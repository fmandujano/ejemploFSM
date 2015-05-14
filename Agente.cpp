#include "Agente.h"

Agente::Agente( State* initialState )
{
	std::cout << "Agente creado" << std::endl;
	currentState = initialState;
}

void Agente::Update()
{
	currentState->Execute(this);
}

void Agente::ChangeState(State* newState)
{
	currentState->Exit(this);
	currentState = newState;
	currentState->Enter(this);
}


