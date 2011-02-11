/************************************************************************
	filename: 	CEGUIcolour.cpp
	created:	20/8/2004
	author:		Paul D Turner (with code from Jeff Leigh)
	
	purpose:	Implementation of colour class methods.
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://crayzedsgui.sourceforge.net)
    Copyright (C)2004 Paul D Turner (crayzed@users.sourceforge.net)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#include "CEGUIcolour.h"
#include <algorithm>


// Start of CEGUI namespace section
namespace CEGUI
{
/*************************************************************************
	Construction & Destruction
*************************************************************************/
colour::colour(void) :
	d_alpha(1.0f),
	d_red(0.0f),
	d_green(0.0f),
	d_blue(0.0f),
	d_argb(0xFF000000),
	d_argbValid(true)
{
}


colour::colour(const colour& val)
{
	this->operator=(val);
}


colour::colour(float red, float green, float blue, float alpha) :
	d_alpha(alpha),
	d_red(red),
	d_green(green),
	d_blue(blue),
	d_argbValid(false)
{
}


colour::colour(ulong argb)
{
	setARGB(argb);
}


colour::~colour(void)
{
}


float colour::getHue(void) const
{
	float pRed = d_red;
	float pGreen = d_green;
	float pBlue = d_blue;

	float pMax = std::max(std::max(d_red, d_green), d_blue);
	float pMin = std::min(std::min(d_red, d_green), d_blue);

	float pHue;

	if( pMax == pMin )
	{
		pHue = 0;
	}
	else
	{
		if( pMax == pRed )
		{
			pHue = (pGreen - pBlue) / (pMax - pMin);
		}
		else if( pMax == pGreen )
		{
			pHue = 2 + (pBlue - pRed) / (pMax - pMin);
		}
		else
		{
			pHue = 4 + (pRed - pGreen) / (pMax - pMin);
		}
	}

	float Hue = pHue / 6;
	if( Hue < 0 )
		Hue += 1;

	return Hue;
}


float colour::getSaturation(void) const
{
	float pRed = d_red;
	float pGreen = d_green;
	float pBlue = d_blue;

	float pMax = std::max(std::max(d_red, d_green), d_blue);
	float pMin = std::min(std::min(d_red, d_green), d_blue);

	float pLum = (pMax + pMin) / 2;
	float pSat;

	if( pMax == pMin )
	{
		pSat = 0;
	}
	else
	{
		if( pLum < 0.5 )
			pSat = (pMax - pMin) / (pMax + pMin);
		else
			pSat = (pMax - pMin) / (2 - pMax - pMin);
	}

	return pSat;
}


float colour::getLumination(void) const
{
	float pRed = d_red;
	float pGreen = d_green;
	float pBlue = d_blue;

	float pMax = std::max(std::max(d_red, d_green), d_blue);
	float pMin = std::min(std::min(d_red, d_green), d_blue);

	float pLum = (pMax + pMin) / 2;
	return pLum;
}


void colour::setARGB(ulong argb)
{
	d_argb = argb;

	d_blue	= static_cast<float>(argb & 0xFF) / 255.0f;
	argb >>= 8;
	d_green	= static_cast<float>(argb & 0xFF) / 255.0f;
	argb >>= 8;
	d_red	= static_cast<float>(argb & 0xFF) / 255.0f;
	argb >>= 8;
	d_alpha	= static_cast<float>(argb & 0xFF) / 255.0f;

	d_argbValid = true;
}


inline void colour::setAlpha(float alpha)
{
	d_argbValid = false;
	d_alpha = alpha;
}


inline void colour::setRed(float red)
{
	d_argbValid = false;
	d_red = red;
}


inline void colour::setGreen(float green)
{
	d_argbValid = false;
	d_green = green;
}


inline void colour::setBlue(float blue)
{
	d_argbValid = false;
	d_blue = blue;
}


void colour::setHSL(float hue, float saturation, float luminance, float alpha)
{
	d_alpha = alpha;

	float temp3[3];

	float pHue = hue;
	float pSat = saturation;
	float pLum = luminance;

	if( pSat == 0 )
	{
		d_red = pLum;
		d_green = pLum;
		d_blue = pLum;
	}
	else
	{
		float temp2;
		if( pLum < 0.5f )
		{
			temp2 = pLum * (1 + pSat);
		}
		else
		{
			temp2 = pLum + pSat - pLum * pSat;
		}

		float temp1 = 2 * pLum - temp2;

		temp3[0] = pHue + (1.0f / 3);
		temp3[1] = pHue;
		temp3[2] = pHue - (1.0f / 3);

		for( int n = 0; n < 3; n ++ )
		{
			if( temp3[n] < 0 )
				temp3[n] ++;
			if( temp3[n] > 1 )
				temp3[n] --;

			if( (temp3[n] * 6) < 1 )
			{
				temp3[n] = temp1 + (temp2 - temp1) * 6 * temp3[n];
			}
			else
			{
				if( (temp3[n] * 2) < 1 )
				{
					temp3[n] = temp2;
				}
				else
				{
					if( (temp3[n] * 3) < 2 )
					{
						temp3[n] = temp1 + (temp2 - temp1) * ((2.0f / 3) - temp3[n]) * 6;
					}
					else
					{
						temp3[n] = temp1;
					}
				}
			}
		}

		d_red = temp3[0];
		d_green = temp3[1];
		d_blue = temp3[2];
	}

	d_argbValid = false;
}


inline colour& colour::operator=(ulong val)
{
	setARGB(val);
	return *this;
}


inline colour& colour::operator=(const colour& val)
{
	d_alpha	= val.d_alpha;
	d_red	= val.d_red;
	d_green	= val.d_green;
	d_blue	= val.d_blue;
	d_argb	= val.d_argb;
	d_argbValid = val.d_argbValid;

	return *this;
}

inline colour&	colour::operator&=(ulong val)
{
	setARGB(getARGB() & val);
	return *this;
}


inline colour&	colour::operator&=(const colour& val)
{
	setARGB(getARGB() & val.getARGB());
	return *this;
}


inline colour&	colour::operator|=(ulong val)
{
	setARGB(getARGB() | val);
	return *this;
}


inline colour&	colour::operator|=(const colour& val)
{
	setARGB(getARGB() | val.getARGB());
	return *this;
}


inline colour&	colour::operator<<=(int val)
{
	setARGB(getARGB() << val);
	return *this;
}


inline colour&	colour::operator>>=(int val)
{
	setARGB(getARGB() >> val);
	return *this;
}


inline colour colour::operator+(const colour& val) const 
{
	return colour(
		d_red	+ val.d_red, 
		d_green	+ val.d_green, 
		d_blue	+ val.d_blue,
		d_alpha	+ val.d_alpha
	);
}

inline colour colour::operator-(const colour& val) const
{
	return colour(
		d_red	- val.d_red, 
		d_green	- val.d_green, 
		d_blue	- val.d_blue,
		d_alpha	- val.d_alpha 
	);
}

inline colour colour::operator*(const float val) const
{
	return colour(
		d_red	* val, 
		d_green	* val, 
		d_blue	* val,
		d_alpha	* val 
	);
}


ulong colour::calculateARGB(void) const
{
	return (
		static_cast<ulong>(d_alpha * 255) << 24 |
		static_cast<ulong>(d_red * 255) << 16 |
		static_cast<ulong>(d_green * 255) << 8 |
		static_cast<ulong>(d_blue * 255)
	);
}

} // End of  CEGUI namespace section