#include <iostream>
#include <stdlib.h>
#include "../include/main.h"

int main()
{
    Manager<User>* userManager = new Manager<User>();
    Manager<Employee>* employeeManager = new Manager<Employee>();
    Manager<Product>* productManager = new Manager<Product>();



    // creating users, employees and products list
    User* users = new User[3];
    Employee* employees = new Employee[1];
    Product* products = new Product[3];


    employees[0].set_name("Hasan Efe Aksoy");
    employees[0].set_password("hasanefeaksoy123");
    employees[0].set_id(0);
    employees[0].set_email("hasanefe@xxx.com");
    employees[0].set_money(100.0);
    employees[0].set_authority(Authority::ADMIN);
    employees[0].set_salary(10.0);

    employeeManager->add_list_element(employees);


    products[0].set_name("Red Apple");
    products[0].set_id(12);
    products[0].set_description("Fresh amasya red apple");
    products[0].set_unit_price(3.0);
    
    products[1].set_name("Laptop");
    products[1].set_id(3);
    products[1].set_description("xxx model xx GHZ xx bit....");
    products[1].set_unit_price(4999.9);

    products[2].set_name("Bitter Chocolate");
    products[2].set_id(68);
    products[2].set_description("90/100 Bitter Chocolate");
    products[2].set_unit_price(2.0);
    
    for (int i = 0; i < 3; i++) {
        //add products in the productManager
        productManager->add_list_element(products + i);
    }



    users[0].set_name("Jeff Bezos");
    users[0].set_password("jeff123");
    users[0].set_id(34);
    users[0].set_email("jeffbezos@xxx.com");
    users[0].set_money(30200.0);
    // create user's box and set it.
    std::vector<Product*> user0Box = {productManager->get_list()[0], productManager->get_list()[1]};
    users[0].set_box(user0Box);


    users[1].set_name("Bill Gates");
    users[1].set_password("billg427");
    users[1].set_id(40);
    users[1].set_email("billgates@xxx.com");
    users[1].set_money(28000.0);

    std::vector<Product*> user1Box = {productManager->get_list()[1]};
    users[1].set_box(user1Box);


    users[2].set_name("Bjarne Stroustrup");
    users[2].set_password("ownC9379");
    users[2].set_id(120);
    users[2].set_email("bjarnestroustrup@xxx.com");
    users[2].set_money(7900.0);

    std::vector<Product*> user2Box = {productManager->get_list()[2]};
    users[2].set_box(user2Box);


    for (int i = 0; i < 3; i++) {
        userManager->add_list_element(users + i);
    }



    for (auto i : userManager->get_list()) {
        std::cout << i->to_string() + "\n";
    }
    printf("\n");
    for (auto i : employeeManager->get_list()) {
        std::cout << i->to_string() + "\n";
    }
    printf("\n");
    for (auto i : productManager->get_list()) {
        std::cout << i->to_string() + "\n";
    }

    return 0;
}