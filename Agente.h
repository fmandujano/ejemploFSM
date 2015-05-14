#pragma once

#include "State.h"
#include "iostream"

class Agente
{
	State* currentState;

public: 
	Agente(State* initialState);
	void Update();
	void ChangeState(State* newState);
};