// copy constructor for copying an object

#include<iostream>
using namespace std;

class Animal{
    int age;

    public:

    // getter
    int getAge(){
        return age;
    }

    //setter
    void setAge(int age){
        this->age =age;
    }


    //default constuctor
    Animal(){
        cout<<"Default Constructor is called !"<<endl;
    }

    //parameterized constructor
    Animal(int age){
        cout<<"parameterized constructor called!"<<endl;
        this->age = age;
    }

    //copy constructor
    Animal(Animal &obj){
        cout<<"Copy constructor called!"<<endl;
        this->age = obj.age;
    }

    // destructor
    ~Animal(){
        cout<<"Destructor is called!"<<endl;
    }



};

int main(){

   // by dynamic memory allocation
    Animal* cat  = new Animal(20);

    Animal*dog(cat);

    cout<<dog->getAge()<<endl;

    delete(cat);
    delete(dog);

    cout<<endl<<endl;
    //by static allocation

    Animal parot ;
    parot.setAge(15);
    
    Animal crow(parot);
    cout<<"Crow age = "<<crow.getAge()<<endl;

    return 0 ;
}