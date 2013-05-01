// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "SequentialLayoutContainer.pypp.hpp"

namespace bp = boost::python;

struct SequentialLayoutContainer_wrapper : CEGUI::SequentialLayoutContainer, bp::wrapper< CEGUI::SequentialLayoutContainer > {

    SequentialLayoutContainer_wrapper(::CEGUI::String const & type, ::CEGUI::String const & name )
    : CEGUI::SequentialLayoutContainer( boost::ref(type), boost::ref(name) )
      , bp::wrapper< CEGUI::SequentialLayoutContainer >(){
        // constructor
    
    }

    virtual void moveChildWindowToPosition( ::CEGUI::Window * wnd, ::size_t position ) {
        if( bp::override func_moveChildWindowToPosition = this->get_override( "moveChildWindowToPosition" ) )
            func_moveChildWindowToPosition( boost::python::ptr(wnd), position );
        else{
            this->CEGUI::SequentialLayoutContainer::moveChildWindowToPosition( boost::python::ptr(wnd), position );
        }
    }
    
    void default_moveChildWindowToPosition( ::CEGUI::Window * wnd, ::size_t position ) {
        CEGUI::SequentialLayoutContainer::moveChildWindowToPosition( boost::python::ptr(wnd), position );
    }

    virtual void swapChildWindowPositions( ::size_t wnd1, ::size_t wnd2 ) {
        if( bp::override func_swapChildWindowPositions = this->get_override( "swapChildWindowPositions" ) )
            func_swapChildWindowPositions( wnd1, wnd2 );
        else{
            this->CEGUI::SequentialLayoutContainer::swapChildWindowPositions( wnd1, wnd2 );
        }
    }
    
    void default_swapChildWindowPositions( ::size_t wnd1, ::size_t wnd2 ) {
        CEGUI::SequentialLayoutContainer::swapChildWindowPositions( wnd1, wnd2 );
    }

    virtual void beginInitialisation(  ) {
        if( bp::override func_beginInitialisation = this->get_override( "beginInitialisation" ) )
            func_beginInitialisation(  );
        else{
            this->CEGUI::Window::beginInitialisation(  );
        }
    }
    
    void default_beginInitialisation(  ) {
        CEGUI::Window::beginInitialisation( );
    }

    virtual void cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_cloneChildWidgetsTo = this->get_override( "cloneChildWidgetsTo" ) )
            func_cloneChildWidgetsTo( boost::ref(target) );
        else{
            this->CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
        }
    }
    
    void default_cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
    }

    virtual void clonePropertiesTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_clonePropertiesTo = this->get_override( "clonePropertiesTo" ) )
            func_clonePropertiesTo( boost::ref(target) );
        else{
            this->CEGUI::Window::clonePropertiesTo( boost::ref(target) );
        }
    }
    
    void default_clonePropertiesTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::clonePropertiesTo( boost::ref(target) );
    }

    virtual void destroy(  ) {
        if( bp::override func_destroy = this->get_override( "destroy" ) )
            func_destroy(  );
        else{
            this->CEGUI::Window::destroy(  );
        }
    }
    
    void default_destroy(  ) {
        CEGUI::Window::destroy( );
    }

    virtual void endInitialisation(  ) {
        if( bp::override func_endInitialisation = this->get_override( "endInitialisation" ) )
            func_endInitialisation(  );
        else{
            this->CEGUI::Window::endInitialisation(  );
        }
    }
    
    void default_endInitialisation(  ) {
        CEGUI::Window::endInitialisation( );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual void getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext_impl = this->get_override( "getRenderingContext_impl" ) )
            func_getRenderingContext_impl( boost::ref(ctx) );
        else{
            this->CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rect getUnclippedInnerRect_impl(  ) const  {
        if( bp::override func_getUnclippedInnerRect_impl = this->get_override( "getUnclippedInnerRect_impl" ) )
            return func_getUnclippedInnerRect_impl(  );
        else{
            return this->CEGUI::LayoutContainer::getUnclippedInnerRect_impl(  );
        }
    }
    
    ::CEGUI::Rect default_getUnclippedInnerRect_impl(  ) const  {
        return CEGUI::LayoutContainer::getUnclippedInnerRect_impl( );
    }

    virtual void initialiseComponents(  ) {
        if( bp::override func_initialiseComponents = this->get_override( "initialiseComponents" ) )
            func_initialiseComponents(  );
        else{
            this->CEGUI::Window::initialiseComponents(  );
        }
    }
    
    void default_initialiseComponents(  ) {
        CEGUI::Window::initialiseComponents( );
    }

    virtual bool isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        if( bp::override func_isHit = this->get_override( "isHit" ) )
            return func_isHit( boost::ref(position), allow_disabled );
        else{
            return this->CEGUI::Window::isHit( boost::ref(position), allow_disabled );
        }
    }
    
    bool default_isHit( ::CEGUI::Vector2 const & position, bool const allow_disabled=false ) const  {
        return CEGUI::Window::isHit( boost::ref(position), allow_disabled );
    }

    virtual void layout(  ){
        bp::override func_layout = this->get_override( "layout" );
        func_layout(  );
    }

    virtual void layoutIfNecessary(  ) {
        if( bp::override func_layoutIfNecessary = this->get_override( "layoutIfNecessary" ) )
            func_layoutIfNecessary(  );
        else{
            this->CEGUI::LayoutContainer::layoutIfNecessary(  );
        }
    }
    
    void default_layoutIfNecessary(  ) {
        CEGUI::LayoutContainer::layoutIfNecessary( );
    }

    virtual void performChildWindowLayout( bool nonclient_sized_hint=false, bool client_sized_hint=false ) {
        if( bp::override func_performChildWindowLayout = this->get_override( "performChildWindowLayout" ) )
            func_performChildWindowLayout( nonclient_sized_hint, client_sized_hint );
        else{
            this->CEGUI::Window::performChildWindowLayout( nonclient_sized_hint, client_sized_hint );
        }
    }
    
    void default_performChildWindowLayout( bool nonclient_sized_hint=false, bool client_sized_hint=false ) {
        CEGUI::Window::performChildWindowLayout( nonclient_sized_hint, client_sized_hint );
    }

    virtual void setLookNFeel( ::CEGUI::String const & look ) {
        if( bp::override func_setLookNFeel = this->get_override( "setLookNFeel" ) )
            func_setLookNFeel( boost::ref(look) );
        else{
            this->CEGUI::Window::setLookNFeel( boost::ref(look) );
        }
    }
    
    void default_setLookNFeel( ::CEGUI::String const & look ) {
        CEGUI::Window::setLookNFeel( boost::ref(look) );
    }

    virtual void setMargin( ::CEGUI::UBox const & margin ) {
        if( bp::override func_setMargin = this->get_override( "setMargin" ) )
            func_setMargin( boost::ref(margin) );
        else{
            this->CEGUI::Window::setMargin( boost::ref(margin) );
        }
    }
    
    void default_setMargin( ::CEGUI::UBox const & margin ) {
        CEGUI::Window::setMargin( boost::ref(margin) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void update( float elapsed ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( elapsed );
        else{
            this->CEGUI::LayoutContainer::update( elapsed );
        }
    }
    
    void default_update( float elapsed ) {
        CEGUI::LayoutContainer::update( elapsed );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_SequentialLayoutContainer_class(){

    { //::CEGUI::SequentialLayoutContainer
        typedef bp::class_< SequentialLayoutContainer_wrapper, bp::bases< CEGUI::LayoutContainer >, boost::noncopyable > SequentialLayoutContainer_exposer_t;
        SequentialLayoutContainer_exposer_t SequentialLayoutContainer_exposer = SequentialLayoutContainer_exposer_t( "SequentialLayoutContainer", "*!\n\
        \n\
            An abstract base class providing common functionality and specifying the\n\
            required interface for derived classes.\n\
        \n\
            Sequential Layout Container provide means for automatic positioning of\n\
            windows in sequence\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const & >(( bp::arg("type"), bp::arg("name") ), "*!\n\
            \n\
                Constructor for Window base class\n\
        \n\
            @param type\n\
                String object holding Window type (usually provided by WindowFactory).\n\
        \n\
            @param name\n\
                String object holding unique name for the Window.\n\
            *\n") );
        bp::scope SequentialLayoutContainer_scope( SequentialLayoutContainer_exposer );
        { //::CEGUI::SequentialLayoutContainer::addChildWindowToPosition
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*addChildWindowToPosition_function_type )( ::CEGUI::Window *,::size_t ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "addChildWindowToPosition"
                , addChildWindowToPosition_function_type( &::CEGUI::SequentialLayoutContainer::addChildWindowToPosition )
                , ( bp::arg("window"), bp::arg("position") )
                , "*!\n\
            \n\
                Adds a window to given position\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::addChildWindowToPosition
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*addChildWindowToPosition_function_type )( ::CEGUI::String const &,::size_t ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "addChildWindowToPosition"
                , addChildWindowToPosition_function_type( &::CEGUI::SequentialLayoutContainer::addChildWindowToPosition )
                , ( bp::arg("window"), bp::arg("position") )
                , "*!\n\
            \n\
                Adds a window to given position\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::getChildWindowAtPosition
        
            typedef ::CEGUI::Window * ( ::CEGUI::SequentialLayoutContainer::*getChildWindowAtPosition_function_type )( ::size_t ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "getChildWindowAtPosition"
                , getChildWindowAtPosition_function_type( &::CEGUI::SequentialLayoutContainer::getChildWindowAtPosition )
                , ( bp::arg("position") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
                Gets the child window that currently is at given position\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::getPositionOfChildWindow
        
            typedef ::size_t ( ::CEGUI::SequentialLayoutContainer::*getPositionOfChildWindow_function_type )( ::CEGUI::Window * ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "getPositionOfChildWindow"
                , getPositionOfChildWindow_function_type( &::CEGUI::SequentialLayoutContainer::getPositionOfChildWindow )
                , ( bp::arg("wnd") )
                , "*!\n\
            \n\
                Gets the position of given child window\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::getPositionOfChildWindow
        
            typedef ::size_t ( ::CEGUI::SequentialLayoutContainer::*getPositionOfChildWindow_function_type )( ::CEGUI::String const & ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "getPositionOfChildWindow"
                , getPositionOfChildWindow_function_type( &::CEGUI::SequentialLayoutContainer::getPositionOfChildWindow )
                , ( bp::arg("wnd") )
                , "*!\n\
            \n\
                Gets the position of given child window\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::moveChildWindow
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*moveChildWindow_function_type )( ::CEGUI::Window *,int ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "moveChildWindow"
                , moveChildWindow_function_type( &::CEGUI::SequentialLayoutContainer::moveChildWindow )
                , ( bp::arg("window"), bp::arg("delta")=(int)(1) )
                , "*!\n\
                \n\
                    Moves a window forward or backward, depending on delta\n\
                    (-1 moves it backward one step, 1 moves it forward one step)\n\
            \n\
                @param delta\n\
                    The amount of steps the window will be moved\n\
                    (old position + delta = new position)\n\
                *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::moveChildWindowToPosition
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*moveChildWindowToPosition_function_type )( ::CEGUI::Window *,::size_t ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_moveChildWindowToPosition_function_type )( ::CEGUI::Window *,::size_t ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "moveChildWindowToPosition"
                , moveChildWindowToPosition_function_type(&::CEGUI::SequentialLayoutContainer::moveChildWindowToPosition)
                , default_moveChildWindowToPosition_function_type(&SequentialLayoutContainer_wrapper::default_moveChildWindowToPosition)
                , ( bp::arg("wnd"), bp::arg("position") ) );
        
        }
        { //::CEGUI::SequentialLayoutContainer::moveChildWindowToPosition
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*moveChildWindowToPosition_function_type )( ::CEGUI::String const &,::size_t ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "moveChildWindowToPosition"
                , moveChildWindowToPosition_function_type( &::CEGUI::SequentialLayoutContainer::moveChildWindowToPosition )
                , ( bp::arg("wnd"), bp::arg("position") )
                , "*!\n\
            \n\
                Moves a window that is alrady child of thi layout container\n\
                to given position (if the window is currently in a position\n\
                that is smaller than given position, given position is\n\
                automatically decremented\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::removeChildWindowFromPosition
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*removeChildWindowFromPosition_function_type )( ::size_t ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "removeChildWindowFromPosition"
                , removeChildWindowFromPosition_function_type( &::CEGUI::SequentialLayoutContainer::removeChildWindowFromPosition )
                , ( bp::arg("position") )
                , "*!\n\
            \n\
                Removes a window from given position\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::swapChildWindowPositions
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*swapChildWindowPositions_function_type )( ::size_t,::size_t ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_swapChildWindowPositions_function_type )( ::size_t,::size_t ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "swapChildWindowPositions"
                , swapChildWindowPositions_function_type(&::CEGUI::SequentialLayoutContainer::swapChildWindowPositions)
                , default_swapChildWindowPositions_function_type(&SequentialLayoutContainer_wrapper::default_swapChildWindowPositions)
                , ( bp::arg("wnd1"), bp::arg("wnd2") ) );
        
        }
        { //::CEGUI::SequentialLayoutContainer::swapChildWindows
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*swapChildWindows_function_type )( ::CEGUI::Window *,::CEGUI::Window * ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "swapChildWindows"
                , swapChildWindows_function_type( &::CEGUI::SequentialLayoutContainer::swapChildWindows )
                , ( bp::arg("wnd1"), bp::arg("wnd2") )
                , "*!\n\
            \n\
                Swaps positions of given windows\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::swapChildWindows
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*swapChildWindows_function_type )( ::CEGUI::String const &,::CEGUI::Window * ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "swapChildWindows"
                , swapChildWindows_function_type( &::CEGUI::SequentialLayoutContainer::swapChildWindows )
                , ( bp::arg("wnd1"), bp::arg("wnd2") )
                , "*!\n\
            \n\
                Swaps positions of given windows\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::swapChildWindows
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*swapChildWindows_function_type )( ::CEGUI::Window *,::CEGUI::String const & ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "swapChildWindows"
                , swapChildWindows_function_type( &::CEGUI::SequentialLayoutContainer::swapChildWindows )
                , ( bp::arg("wnd1"), bp::arg("wnd2") )
                , "*!\n\
            \n\
                Swaps positions of given windows\n\
            *\n" );
        
        }
        { //::CEGUI::SequentialLayoutContainer::swapChildWindows
        
            typedef void ( ::CEGUI::SequentialLayoutContainer::*swapChildWindows_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "swapChildWindows"
                , swapChildWindows_function_type( &::CEGUI::SequentialLayoutContainer::swapChildWindows )
                , ( bp::arg("wnd1"), bp::arg("wnd2") )
                , "*!\n\
            \n\
                Swaps positions of given windows\n\
            *\n" );
        
        }
        SequentialLayoutContainer_exposer.add_static_property( "EventChildWindowOrderChanged"
                        , bp::make_getter( &CEGUI::SequentialLayoutContainer::EventChildWindowOrderChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        { //::CEGUI::Window::beginInitialisation
        
            typedef void ( ::CEGUI::Window::*beginInitialisation_function_type )(  ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_beginInitialisation_function_type )(  ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "beginInitialisation"
                , beginInitialisation_function_type(&::CEGUI::Window::beginInitialisation)
                , default_beginInitialisation_function_type(&SequentialLayoutContainer_wrapper::default_beginInitialisation) );
        
        }
        { //::CEGUI::Window::cloneChildWidgetsTo
        
            typedef void ( ::CEGUI::Window::*cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( SequentialLayoutContainer_wrapper::*default_cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "cloneChildWidgetsTo"
                , cloneChildWidgetsTo_function_type(&::CEGUI::Window::cloneChildWidgetsTo)
                , default_cloneChildWidgetsTo_function_type(&SequentialLayoutContainer_wrapper::default_cloneChildWidgetsTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::clonePropertiesTo
        
            typedef void ( ::CEGUI::Window::*clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( SequentialLayoutContainer_wrapper::*default_clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "clonePropertiesTo"
                , clonePropertiesTo_function_type(&::CEGUI::Window::clonePropertiesTo)
                , default_clonePropertiesTo_function_type(&SequentialLayoutContainer_wrapper::default_clonePropertiesTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::destroy
        
            typedef void ( ::CEGUI::Window::*destroy_function_type )(  ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_destroy_function_type )(  ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "destroy"
                , destroy_function_type(&::CEGUI::Window::destroy)
                , default_destroy_function_type(&SequentialLayoutContainer_wrapper::default_destroy) );
        
        }
        { //::CEGUI::Window::endInitialisation
        
            typedef void ( ::CEGUI::Window::*endInitialisation_function_type )(  ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_endInitialisation_function_type )(  ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "endInitialisation"
                , endInitialisation_function_type(&::CEGUI::Window::endInitialisation)
                , default_endInitialisation_function_type(&SequentialLayoutContainer_wrapper::default_endInitialisation) );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&SequentialLayoutContainer_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::Window::getRenderedStringParser
        
            typedef ::CEGUI::RenderedStringParser & ( ::CEGUI::Window::*getRenderedStringParser_function_type )(  ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "getRenderedStringParser"
                , getRenderedStringParser_function_type(&::CEGUI::Window::getRenderedStringParser)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Window::getRenderingContext_impl
        
            typedef void ( ::CEGUI::Window::*getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( SequentialLayoutContainer_wrapper::*default_getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "getRenderingContext_impl"
                , getRenderingContext_impl_function_type(&::CEGUI::Window::getRenderingContext_impl)
                , default_getRenderingContext_impl_function_type(&SequentialLayoutContainer_wrapper::default_getRenderingContext_impl)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::LayoutContainer::getUnclippedInnerRect_impl
        
            typedef ::CEGUI::Rect ( ::CEGUI::LayoutContainer::*getUnclippedInnerRect_impl_function_type )(  ) const;
            typedef ::CEGUI::Rect ( SequentialLayoutContainer_wrapper::*default_getUnclippedInnerRect_impl_function_type )(  ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "getUnclippedInnerRect_impl"
                , getUnclippedInnerRect_impl_function_type(&::CEGUI::LayoutContainer::getUnclippedInnerRect_impl)
                , default_getUnclippedInnerRect_impl_function_type(&SequentialLayoutContainer_wrapper::default_getUnclippedInnerRect_impl) );
        
        }
        { //::CEGUI::Window::initialiseComponents
        
            typedef void ( ::CEGUI::Window::*initialiseComponents_function_type )(  ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_initialiseComponents_function_type )(  ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "initialiseComponents"
                , initialiseComponents_function_type(&::CEGUI::Window::initialiseComponents)
                , default_initialiseComponents_function_type(&SequentialLayoutContainer_wrapper::default_initialiseComponents) );
        
        }
        { //::CEGUI::Window::isHit
        
            typedef bool ( ::CEGUI::Window::*isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            typedef bool ( SequentialLayoutContainer_wrapper::*default_isHit_function_type )( ::CEGUI::Vector2 const &,bool const ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "isHit"
                , isHit_function_type(&::CEGUI::Window::isHit)
                , default_isHit_function_type(&SequentialLayoutContainer_wrapper::default_isHit)
                , ( bp::arg("position"), bp::arg("allow_disabled")=(bool const)(false) ) );
        
        }
        { //::CEGUI::LayoutContainer::layout
        
            typedef void ( ::CEGUI::LayoutContainer::*layout_function_type )(  ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "layout"
                , bp::pure_virtual( layout_function_type(&::CEGUI::LayoutContainer::layout) )
                , "*!\n\
            \n\
                (re)layouts all windows inside this layout container immediately\n\
            *\n" );
        
        }
        { //::CEGUI::LayoutContainer::layoutIfNecessary
        
            typedef void ( ::CEGUI::LayoutContainer::*layoutIfNecessary_function_type )(  ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_layoutIfNecessary_function_type )(  ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "layoutIfNecessary"
                , layoutIfNecessary_function_type(&::CEGUI::LayoutContainer::layoutIfNecessary)
                , default_layoutIfNecessary_function_type(&SequentialLayoutContainer_wrapper::default_layoutIfNecessary) );
        
        }
        { //::CEGUI::Window::performChildWindowLayout
        
            typedef void ( ::CEGUI::Window::*performChildWindowLayout_function_type )( bool,bool ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_performChildWindowLayout_function_type )( bool,bool ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "performChildWindowLayout"
                , performChildWindowLayout_function_type(&::CEGUI::Window::performChildWindowLayout)
                , default_performChildWindowLayout_function_type(&SequentialLayoutContainer_wrapper::default_performChildWindowLayout)
                , ( bp::arg("nonclient_sized_hint")=(bool)(false), bp::arg("client_sized_hint")=(bool)(false) ) );
        
        }
        { //::CEGUI::Window::setLookNFeel
        
            typedef void ( ::CEGUI::Window::*setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "setLookNFeel"
                , setLookNFeel_function_type(&::CEGUI::Window::setLookNFeel)
                , default_setLookNFeel_function_type(&SequentialLayoutContainer_wrapper::default_setLookNFeel)
                , ( bp::arg("look") ) );
        
        }
        { //::CEGUI::Window::setMargin
        
            typedef void ( ::CEGUI::Window::*setMargin_function_type )( ::CEGUI::UBox const & ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_setMargin_function_type )( ::CEGUI::UBox const & ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "setMargin"
                , setMargin_function_type(&::CEGUI::Window::setMargin)
                , default_setMargin_function_type(&SequentialLayoutContainer_wrapper::default_setMargin)
                , ( bp::arg("margin") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( SequentialLayoutContainer_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&SequentialLayoutContainer_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( SequentialLayoutContainer_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&SequentialLayoutContainer_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::LayoutContainer::update
        
            typedef void ( ::CEGUI::LayoutContainer::*update_function_type )( float ) ;
            typedef void ( SequentialLayoutContainer_wrapper::*default_update_function_type )( float ) ;
            
            SequentialLayoutContainer_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::LayoutContainer::update)
                , default_update_function_type(&SequentialLayoutContainer_wrapper::default_update)
                , ( bp::arg("elapsed") ) );
        
        }
        { //::CEGUI::Window::writeXMLToStream
        
            typedef void ( ::CEGUI::Window::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( SequentialLayoutContainer_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            SequentialLayoutContainer_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Window::writeXMLToStream)
                , default_writeXMLToStream_function_type(&SequentialLayoutContainer_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}