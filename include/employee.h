#pragma once
#include "authority.h"
#include "user.h"

class Employee : public User
{
private:
    Authority authority = Authority::WORKER;
    double salary = 0;

public:
    Employee();
    ~Employee();

    Authority get_authority() const;
    void set_authority(Authority authority);
    double get_salary() const;
    void set_salary(double salary);

    virtual std::string to_string() const;
};