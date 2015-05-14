#include "AgentStates.h"
#include "iostream"
#include "Agente.h"

///Estado encendido

StateOn* StateOn::instance()
{
	static StateOn instance;
	return &instance;
}

void StateOn::Enter(Agente* agent)
{
	std::cout << "Enciende la luz" << std::endl;
}
void StateOn::Execute(Agente* agent)
{
	std::cout << "luz encendida" << std::endl;
}
void StateOn::Exit(Agente* agent)
{
	std::cout << "saliendo de estado encendido" << std::endl;
}

///Estado apagado
StateOff* StateOff::instance()
{
	static StateOff instance;
	return &instance;
}

void StateOff::Enter(Agente* agent)
{
	std::cout << "apagando luz" << std::endl;
}
void StateOff::Execute(Agente* agent)
{
	std::cout << "luz apagada" << std::endl;
}
void StateOff::Exit(Agente* agent)
{
	std::cout << "saliendo de estado apagado" << std::endl;
}
