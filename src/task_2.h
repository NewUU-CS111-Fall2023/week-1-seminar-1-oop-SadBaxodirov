//
// Created by student on 10/13/2023.
//

#ifndef WEEK_1_SEMINAR_1_OOP_SADBAXODIROV_TASK_2_H
#define WEEK_1_SEMINAR_1_OOP_SADBAXODIROV_TASK_2_H
class Obj{
public :
    void open(){
        std::cout<<"base class";
}
};
class Door:public Obj{
public:
    void open(){
        std::cout<<"opening door"<< std::endl;
    }
};
class Thermos{
public:
    void open(){
        std::cout<<"opening thermos by rotating the head"<< std::endl;
    }
};
class Laptop{
public:
    void open(){
        std::cout<<"opening any MacBook"<< std::endl;
    }
};
#endif //WEEK_1_SEMINAR_1_OOP_SADBAXODIROV_TASK_2_H
