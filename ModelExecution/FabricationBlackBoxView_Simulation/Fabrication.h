/*********************************************************************
	Rhapsody	: 8.0.3 
	Login		: nartz5
	Component	: ModelExecution 
	Configuration 	: FabricationBlackBoxView_Simulation
	Model Element	: Fabrication
//!	Generated Date	: Thu, 9, Apr 2015  
	File Path	: ModelExecution\FabricationBlackBoxView_Simulation\Fabrication.h
*********************************************************************/

#ifndef Fabrication_H
#define Fabrication_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "FabricationPkg.h"
//## link itsPublic
class Public;

//## link itsSI
class SI;

//## link itsStockMP
class StockMP;

//## package FunctionalAnalysisPkg::FabricationPkg

//## usecase Fabrication
class Fabrication {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedFabrication;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Fabrication();
    
    //## auto_generated
    ~Fabrication();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Public* getItsPublic() const;
    
    //## auto_generated
    void setItsPublic(Public* p_Public);
    
    //## auto_generated
    SI* getItsSI() const;
    
    //## auto_generated
    void setItsSI(SI* p_SI);
    
    //## auto_generated
    StockMP* getItsStockMP() const;
    
    //## auto_generated
    void setItsStockMP(StockMP* p_StockMP);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Public* itsPublic;		//## link itsPublic
    
    SI* itsSI;		//## link itsSI
    
    StockMP* itsStockMP;		//## link itsStockMP
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedFabrication : virtual public AOMInstance {
    DECLARE_META(Fabrication, OMAnimatedFabrication)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: ModelExecution\FabricationBlackBoxView_Simulation\Fabrication.h
*********************************************************************/
