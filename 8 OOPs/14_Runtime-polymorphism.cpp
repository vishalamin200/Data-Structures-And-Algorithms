// Runtime polymorphism 

// Funcition overriding

#include<iostream>
using namespace std;

class Animal {
    public:

    Animal(){
        cout<<"Animal constructor called !" <<endl;
    }
    ~Animal(){
        cout<<"Animal Distructor called !" <<endl;
    }

    virtual void speak(){
        cout<<"Speaking "<<endl<<endl;
    }
};


class Dog : public Animal{
    public : 
    void speak(){
        cout<<"Barking "<<endl<<endl;
    }

    Dog(){
        cout<<"Dog Constructor is calleD !"<<endl;
    }
    ~Dog(){
        cout<<"Dog distructor is called !"<<endl;
    }

};

int main(){

   Animal* monti = new Animal();
   monti -> speak();

   Dog* donky = new Dog();
   donky -> speak();

   Animal* banti = new Dog();
   banti -> speak();


   Dog* harry = (Dog*)  new Animal();
   harry -> speak();



    delete(monti,donky);
    delete(banti,harry);


    //here oberservation is when there is no virtual keyword is used then , the function of Pointer side will call (left side of declaration)
    // when when virtual keyword is used , the function of object type  is called ( right side function in declaration)
    
    return 0 ;
}

