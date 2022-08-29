#pragma once
#include <vector>
#include "entity.h"
#include "product.h"

class User : public Entity
{
private:
    std::string password = "";
    std::string email = "";
    double money = 0;
    std::vector<Product*> box = {};

public:
    User();
    ~User();

    std::string get_password() const;
    void set_password(std::string password);

    std::string get_email() const;
    void set_email(std::string email);
    
    double get_money() const;
    void set_money(double money);
    
    std::vector<Product*> get_box() const;
    void set_box(std::vector<Product*> box);

    virtual std::string to_string() const;
};