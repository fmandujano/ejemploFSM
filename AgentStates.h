#pragma once
#include "State.h"

class StateOn:public State
{
private:
	StateOn(){}
	~StateOn(){}
	StateOn(const StateOn&);
	StateOn& operator =(const StateOn&);

public: 
	static StateOn* instance();
	virtual void Enter(Agente* agente);
	virtual void Execute(Agente* agente);
	virtual void Exit(Agente* agente);
};	

class StateOff:public State
{
private:
	StateOff(){}
	~StateOff(){}
	StateOff(const StateOff&);
	StateOff& operator =(const StateOff&);

public: 
	static StateOff* instance();
	virtual void Enter(Agente* agente);
	virtual void Execute(Agente* agente);
	virtual void Exit(Agente* agente);
};	
