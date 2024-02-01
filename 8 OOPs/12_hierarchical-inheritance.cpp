// Hierarchical inheritance

#include<iostream>
using namespace std;



class Car {
    
    public : 
    virtual void model() = 0 ;


    void drive(){
        cout<<"This is a car";
    }
};

class Scorpio : public Car{
    public : 

    void model(){
        cout<<"This is Scorpio"<<endl;
    }
};

class Tiago : public Car{
    public:

    void model(){
        cout<< "This is tiago" << endl;
    }
};

int main(){

    Scorpio s1 ;
    s1.model();

    Tiago t30;
    t30.model();
    t30.drive();
 
    return 0 ;
}