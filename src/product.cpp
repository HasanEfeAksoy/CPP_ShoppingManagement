#include "../include/product.h"

Product::Product() { }
Product::~Product() { }

double Product::get_unit_price() const
{
    return this->unitPrice;
}
void Product::set_unit_price(double unitPrice)
{
    this->unitPrice = unitPrice;
}
std::string Product::get_description() const
{
    return this->description;
}
void Product::set_description(std::string description)
{
    this->description = description;
}

std::string Product::to_string() const {
    return "Name: " + this->get_name() + " | Id: " + std::to_string(this->get_id()) + " | Unit Price: " + std::to_string(this->unitPrice) + " | Description: " + this->description;
}