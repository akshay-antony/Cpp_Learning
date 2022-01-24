#include <iostream>

class Player{
public:
    int id;
    virtual void printId(){
        std::cout<<"Super Class"<<" "<<id<<std::endl;
    }
};

class Cricketer: public Player{
public:
    int id;
    void printId() override{
        std::cout<<"Sub class "<<id<<std::endl;
    }
};

int main(){
    Player* p = new Cricketer;
    Cricketer* c = new Cricketer();
    p->id = 0;
    p->printId();
    p->printId();
}