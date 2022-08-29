#include "../include/employee.h"
#include "../include/user.h"

Employee::Employee() { }
Employee::~Employee() { }

Authority Employee::get_authority() const
{
    return this->authority;
}
void Employee::set_authority(Authority authority)
{
    this->authority = authority;
}
double Employee::get_salary() const
{
    return this->salary;
}
void Employee::set_salary(double salary)
{
    this->salary = salary;
}


std::string Employee::to_string() const {
    std::string tstr = "Name: " + this->get_name() + " | Id: " + std::to_string(this->get_id()) + " | Password: " + this->get_password() + " | Email: " + this->get_email() + " | Money: " + std::to_string(this->get_money()) + " | Box: ";
    for (int i = 0; i < this->get_box().size(); i++) {
        tstr += std::to_string(i+1) + "-) " + this->get_box()[i]->get_name() + " ";
    }
    tstr += "| Authority: " + std::to_string(this->authority) + " | Salary: " + std::to_string(this->salary);
    return tstr;
}