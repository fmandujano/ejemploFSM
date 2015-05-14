#pragma once
class Agente;
class State
{
public: 
	State(){}
	~State(){}
	//this will execute when the state is entered
	virtual void Enter(Agente*)=0;
	//this is the state's normal update function
	virtual void Execute(Agente*)=0;
	//this will execute when the state is exited. (My word, isn't
	//life full of surprises... ;o))
	virtual void Exit(Agente*)=0;
};