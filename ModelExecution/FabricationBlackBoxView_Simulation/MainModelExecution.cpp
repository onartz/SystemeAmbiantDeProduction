/********************************************************************
	Rhapsody	: 8.0.3 
	Login		: nartz5
	Component	: ModelExecution 
	Configuration 	: FabricationBlackBoxView_Simulation
	Model Element	: FabricationBlackBoxView_Simulation
//!	Generated Date	: Thu, 9, Apr 2015  
	File Path	: ModelExecution\FabricationBlackBoxView_Simulation\MainModelExecution.cpp
*********************************************************************/

//## auto_generated
#include "MainModelExecution.h"
//## auto_generated
#include "Fabrication.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            Fabrication::FabricationBlackBoxView * p_FabricationBlackBoxView;
            p_FabricationBlackBoxView = new Fabrication::FabricationBlackBoxView;
            //#[ configuration ModelExecution::FabricationBlackBoxView_Simulation 
            //#]
            OXF::start();
            delete p_FabricationBlackBoxView;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: ModelExecution\FabricationBlackBoxView_Simulation\MainModelExecution.cpp
*********************************************************************/
