#include "Object.h"
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
