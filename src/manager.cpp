// used an 'include guard' in cpp file because we defined template class functions.
//If dont exist 'pragma once' or 'ifndef def endif' keywords (include guards) here, it wouldnt run (example error message: undefined referance).
#ifndef manager_cpp
#define manager_cpp

#include "../include/manager.h"


template <class T>
Manager<T>::Manager() { }
template <class T>
Manager<T>::~Manager()
{
    for (T* list_elem : this->list)
    {
        delete list_elem;
    }
}


template <class T>
std::vector<T*> Manager<T>::get_list() const {
    return this->list;
}
template <class T>
void Manager<T>::set_list(std::vector<T*> list) {
    this->list = list;
}

template <class T>
void Manager<T>::add_list_element(T* list_element)
{
    if (typeid(T) == typeid(Product) || typeid(T) == typeid(Employee) || typeid(T) == typeid(User))
    {
        bool isError = false;
        for (T *i : this->list)
        {
            if (i->get_id() == list_element->get_id())
            {
                std::cout << "Management Error: same id error\n";
                isError = true;
                break;
            }
        }
        if (!isError)
            this->list.push_back(list_element);
    }
    else {
        this->list.push_back(list_element);
    }
}
template <class T>
void Manager<T>::remove_list_element(T* list_element)
{
    for (int i = 0; i < this->list.size(); i++)
    {
        if (this->list[i] == list_element)
        {
            this->list.erase(this->list.begin() + i);
            break;
        }
    }
}



#endif