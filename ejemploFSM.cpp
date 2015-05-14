// ejemploFSM.cpp : Defines the entry point for the console application.
//

#include "iostream"
#include "Agente.h"
#include "AgentStates.h"
#include "string"


int main(int argc, char** argv)
{
	Agente* agente = new Agente(StateOff::instance());

	std::string cmd;

	while(1)
	{
		agente->Update();
		std::cin >> cmd;

		if(strcmp("on", cmd.c_str())==0)
		{
			agente->ChangeState( StateOn::instance() );
		}

		if(strcmp("off", cmd.c_str())==0)
		{
			agente->ChangeState( StateOff::instance() );
		}


	}
	return 0;
}

