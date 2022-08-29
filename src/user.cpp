#include "../include/user.h"

User::User() { }
User::~User()
{
    for (Product* prod : this->box)
    {
        delete prod;
    }
}


std::string User::get_password() const
{
    return this->password;
}
void User::set_password(std::string password)
{
    this->password = password;
}

std::string User::get_email() const
{
    return this->email;
}
void User::set_email(std::string email)
{
    this->email = email;
}

double User::get_money() const
{
    return this->money;
}
void User::set_money(double money)
{
    this->money = money;
}

std::vector<Product*> User::get_box() const
{
    return this->box;
}
void User::set_box(std::vector<Product*> box)
{
    this->box = box;
}

std::string User::to_string() const
{    
    std::string tstr = "Name: " + this->get_name() + " | Id: " + std::to_string(this->get_id()) + " | Password: " + this->password + " | Email: " + this->email + " | Money: " + std::to_string(this->money) + " | Box: ";
    for (int i = 0; i < this->box.size(); i++) {
        tstr += std::to_string(i+1) + "-) " + this->box[i]->get_name() + " ";
    }
    return tstr;
}