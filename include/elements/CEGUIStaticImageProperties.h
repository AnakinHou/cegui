/************************************************************************
	filename: 	CEGUIStaticImageProperties.h
	created:	10/7/2004
	author:		Paul D Turner
	
	purpose:	Interface for StaticImage property classes
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
#ifndef _CEGUIStaticImageProperties_h_
#define _CEGUIStaticImageProperties_h_

#include "CEGUIProperty.h"


// Start of CEGUI namespace section
namespace CEGUI
{

// Start of StaticImageProperties namespace section
/*!
\brief
	Namespace containing all classes that make up the properties interface for the StaticImage class
*/
namespace StaticImageProperties
{
/*!
\brief
	Property to access the image for the StaticImage widget.

	\par Usage:
		- Name: Image
		- Format: "set:[text] image:[text]".

	\par Where:
		- set:[text] is the name of the Imageset containing the image.  The Imageset name should not contain spaces.  The Imageset specified must already be loaded.
		- image:[text] is the name of the Image on the specified Imageset.  The Image name should not contain spaces.
*/
class Image : public Property
{
public:
	Image() : Property((utf8*)"Image", (utf8*)"Property to get/set the image for the StaticImage widget.  Value should be \"set:[imageset name] image:[image name]\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the image colours for the StaticImage widget.

	\par Usage:
		- Name: ImageColours
		- Format: "tl:[aarrggbb] tr:[aarrggbb] bl:[aarrggbb] br:[aarrggbb]".

	\par Where:
		- tl:[aarrggbb] is the top-left colour value specified as ARGB (hex).
		- tr:[aarrggbb] is the top-right colour value specified as ARGB (hex).
		- bl:[aarrggbb] is the bottom-left colour value specified as ARGB (hex).
		- br:[aarrggbb] is the bottom-right colour value specified as ARGB (hex).
*/
class ImageColours : public Property
{
public:
	ImageColours() : Property((utf8*)"ImageColours", (utf8*)"Property to get/set the text colours for the StaticImage widget.  Value is \"tl:[aarrggbb] tr:[aarrggbb] bl:[aarrggbb] br:[aarrggbb]\".") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the horizontal formatting mode setting.

	\par Usage:
		- Name: HorzFormatting
		- Format: "[text]".

	\par Where [text] is one of:
		- "LeftAligned"
		- "RightAligned"
		- "HorzCentred"
		- "HorzStretched"
		- "HorzTiled"
*/
class HorzFormatting : public Property
{
public:
	HorzFormatting() : Property((utf8*)"HorzFormatting", (utf8*)"Property to get/set the horizontal formatting mode.  Value is one of the HorzFormatting strings.") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


/*!
\brief
	Property to access the vertical formatting mode setting.

	\par Usage:
		- Name: VertFormatting
		- Format: "[text]".

	\par Where [text] is one of:
		- "TopAligned"
		- "BottomAligned"
		- "VertCentred"
		- "VertStretched"
		- "VertTiled"
*/
class VertFormatting : public Property
{
public:
	VertFormatting() : Property((utf8*)"VertFormatting", (utf8*)"Property to get/set the vertical formatting mode.  Value is one of the VertFormatting strings.") {}

	String	get(const void* receiver) const;
	void	set(void* receiver, const String& value);
};


} // End of  StaticImageProperties namespace section

} // End of  CEGUI namespace section


#endif	// end of guard _CEGUIStaticImageProperties_h_