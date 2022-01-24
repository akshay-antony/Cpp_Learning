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
    int num;
    void printId() override{
        std::cout<<"Sub class "<<num<<std::endl;
    }
};

int main(){
    Player p;
    p.id = 9;
    Cricketer c;
    c.id = 10;
    
    Cricketer* x = static_cast<Cricketer*>(&p);
    Cricketer* y = reinterpret_cast<Cricketer*>(&p);
    // Cricketer* y = const_cast<Cricketer*>(&p);
    // Cricketer* y = dynamic_cast<Cricketer*>(&p);
    x->id = 8;
    std::cout<<x->id<<" "<<p.id<<std::endl;
}