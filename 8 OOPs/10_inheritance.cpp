// Inheritance  -> simple inheritance , multi level inheritance 

#include<iostream>
using namespace std;

class Animal{
    protected : 
    int legs;

    public : 

    virtual void eat(){
        cout<<"Eating "<<endl;
    }
};

class Dog : public Animal {
    private: 
    int age;


    public : 

    Dog() : age(0){}
    Dog(int age , int legs) : age(age){
        this->legs = legs;
    }


    void run() {
        cout<<"dog is running "<<endl;
    }

    int getAge(){
        return age;
    }

    int getLegs(){
        return legs;
    }

};


class bullDog : public Dog{
     public :
     string name;

    
    void bark() {
        cout<<"Bull dong is Barking "<<endl;
     }

};



int main(){
    Dog dog1;

    dog1.eat();     // method of animal class inherit by Dog class
    dog1.run();
    cout<<"Age of dog1 : "<< dog1.getAge() << endl<<endl;

    Dog monti(16,4);

    cout<<"AGe of monti : "<<monti.getAge()<<endl;
    cout<<"legs of monti : "<<monti.getLegs() <<endl<<endl;
    monti.run();


    cout<<endl<<endl;
    bullDog kalaKatta;
    kalaKatta.name="Bully";

    kalaKatta.run();
    kalaKatta.eat();
    kalaKatta.bark();




    
    return 0 ;
}