// getters - setter - constructor and destructor

#include<iostream>
using namespace std;

class Animal{
    private: 
    int age;

    public :
    int  getAge(){
         return age;
    }

    void setAge(int age){
        this -> age = age;  // here age is a pointer to corresponding object so we use -> . 
    }



    //Defalut Constructor
    Animal(){
        cout<<"Default Constructor is called  ! "<<endl;
    }

    //Parameterized constructor 
    Animal(int age){
        cout<<"Parameterized constructor is called ! "<<endl;

        this -> age = age;
    }

    //Destructor
    
    ~Animal(){
        cout<<"Destructor is called !"<<endl;
    };
    
};

int main(){
    Animal* cat = new Animal();
    cat->setAge(23);
    cout<<"AGe of cat is : "<<   cat -> getAge()  <<endl;
    delete (cat) ;


    Animal* monkey = new Animal(8);
    cout<<"AGe of Monkey is  :"<< monkey -> getAge()<< endl;
    delete(monkey);

    return 0 ;
}