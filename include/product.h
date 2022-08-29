#pragma once
#include "entity.h"

class Product : public Entity
{
private:
    double unitPrice = 0;
    std::string description = "";

public:
    Product();
    ~Product();

    double get_unit_price() const;
    void set_unit_price(double unitPrice);
    std::string get_description() const;
    void set_description(std::string description);
    
    virtual std::string to_string() const;
};