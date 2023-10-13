/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"

int main() {
    std::cout << "Task 1" << std::endl;
    // call for task 1
    Car ferrari;
    ferrari.cost = 1000;
    ferrari.color = "black";
    //ferrari.plate[] = {'0','1','1','1','1','z','a','b'};//['0','1','1','1','1','Z','A','B'];
    std::cout<<ferrari.cost<<std::endl;
    ferrari.updateHP(10);
    std::cout<<ferrari.retrieveHP()<<std::endl;

    Sedan tahoe;
    tahoe.cost = 3000;


    std::cout << "Task 2" << std::endl;//polymorphism(many forms of open function declared in Parent class Obj)
    // call for task 2
    Door door1;
    Thermos thermos1;
    Laptop macbook;
    door1.open();
    thermos1.open();
    macbook.open();

    std::cout << "Task 3" << std::endl;
    // call for task 3
    std::cout << "Task 4" << std::endl;
    // call for task 4
    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
