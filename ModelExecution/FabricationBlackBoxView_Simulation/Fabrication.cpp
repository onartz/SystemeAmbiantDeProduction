/********************************************************************
	Rhapsody	: 8.0.3 
	Login		: nartz5
	Component	: ModelExecution 
	Configuration 	: FabricationBlackBoxView_Simulation
	Model Element	: Fabrication
//!	Generated Date	: Thu, 9, Apr 2015  
	File Path	: ModelExecution\FabricationBlackBoxView_Simulation\Fabrication.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Fabrication.h"
//## link itsPublic
#include "Public.h"
//## link itsSI
#include "SI.h"
//## link itsStockMP
#include "StockMP.h"
//#[ ignore
#define FunctionalAnalysisPkg_FabricationPkg_Fabrication_Fabrication_SERIALIZE OM_NO_OP
//#]

//## package FunctionalAnalysisPkg::FabricationPkg

//## usecase Fabrication
Fabrication::Fabrication() {
    NOTIFY_CONSTRUCTOR(Fabrication, Fabrication(), 0, FunctionalAnalysisPkg_FabricationPkg_Fabrication_Fabrication_SERIALIZE);
    itsPublic = NULL;
    itsSI = NULL;
    itsStockMP = NULL;
}

Fabrication::~Fabrication() {
    NOTIFY_DESTRUCTOR(~Fabrication, true);
    cleanUpRelations();
}

Public* Fabrication::getItsPublic() const {
    return itsPublic;
}

void Fabrication::setItsPublic(Public* p_Public) {
    itsPublic = p_Public;
    if(p_Public != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPublic", p_Public, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPublic");
        }
}

SI* Fabrication::getItsSI() const {
    return itsSI;
}

void Fabrication::setItsSI(SI* p_SI) {
    itsSI = p_SI;
    if(p_SI != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSI", p_SI, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSI");
        }
}

StockMP* Fabrication::getItsStockMP() const {
    return itsStockMP;
}

void Fabrication::setItsStockMP(StockMP* p_StockMP) {
    itsStockMP = p_StockMP;
    if(p_StockMP != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStockMP", p_StockMP, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStockMP");
        }
}

void Fabrication::cleanUpRelations() {
    if(itsPublic != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPublic");
            itsPublic = NULL;
        }
    if(itsSI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSI");
            itsSI = NULL;
        }
    if(itsStockMP != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStockMP");
            itsStockMP = NULL;
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedFabrication::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPublic", false, true);
    if(myReal->itsPublic)
        {
            aomsRelations->ADD_ITEM(myReal->itsPublic);
        }
    aomsRelations->addRelation("itsSI", false, true);
    if(myReal->itsSI)
        {
            aomsRelations->ADD_ITEM(myReal->itsSI);
        }
    aomsRelations->addRelation("itsStockMP", false, true);
    if(myReal->itsStockMP)
        {
            aomsRelations->ADD_ITEM(myReal->itsStockMP);
        }
}
//#]

IMPLEMENT_META_P(Fabrication, FunctionalAnalysisPkg_FabricationPkg, FunctionalAnalysisPkg::FabricationPkg, false, OMAnimatedFabrication)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: ModelExecution\FabricationBlackBoxView_Simulation\Fabrication.cpp
*********************************************************************/
