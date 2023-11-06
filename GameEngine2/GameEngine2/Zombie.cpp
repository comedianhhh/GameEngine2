#include "Zombie.h"
#include <iostream>
std::string Zombie::_type = "Zombie";

void Zombie::Initialize()
{
	
}
Zombie::Zombie()
{

}
Zombie::~Zombie()
{

}
const std::string& Zombie::GetComponentType()
{
	return "Zombie";
}