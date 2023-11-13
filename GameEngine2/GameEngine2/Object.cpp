#include"EngineCore.h"
#include "Object.h"



IMPLEMENT_ABSTRACT_CLASS(Object);   

Object::Object() {

}
Object::~Object() {

}

int Object::GetId()
{
    return id;
}

std::string& Object::GetName()
{
    return name; 
}
