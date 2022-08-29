#pragma once
#include <iostream>
#include <string>

class Entity
{
private:
    std::string name = "";
    unsigned int id = 0;

public:
    Entity();
    ~Entity();

    std::string get_name() const;
    void set_name(std::string name);
    unsigned int get_id() const;
    void set_id(unsigned int id);

    virtual std::string to_string() const;
};