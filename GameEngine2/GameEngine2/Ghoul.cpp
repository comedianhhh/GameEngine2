#include "Ghoul.h"
#include <iostream>
std::string Ghoul::_type="Ghoul";

void Ghoul::Initialize()
{
	std::cout<<"Ghoul Initialize"<<std::endl;
}
Ghoul::Ghoul() 
{

}
Ghoul::~Ghoul()
{

}
const std::string& Ghoul::GetComponentType()
{
	return "Ghoul";
}