#include "../include/entity.h"

Entity::Entity() { }
Entity::~Entity() { }

std::string Entity::get_name() const
{
    return this->name;
}
void Entity::set_name(std::string name)
{
    this->name = name;
}
unsigned int Entity::get_id() const
{
    return this->id;
}
void Entity::set_id(unsigned int id)
{
    this->id = id;
}

std::string Entity::to_string() const {
    return "Name: " + this->name + " | Id: " + std::to_string(this->id);
}