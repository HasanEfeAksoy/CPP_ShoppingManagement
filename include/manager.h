#pragma once
#include <vector>
#include "product.h"
#include "employee.h"
#include "user.h"

template <class T>
class Manager
{
private:
    std::vector<T*> list = {};

public:
    Manager();
    ~Manager();

    std::vector<T*> get_list() const;
    void set_list(std::vector<T*> list);

    void add_list_element(T* list_element);
    void remove_list_element(T* list_element);
};

// we included here cpp file because this class is template class. 
#include "../src/manager.cpp"