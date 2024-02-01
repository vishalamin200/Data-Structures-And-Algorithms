// creating an object using static and dynamic allocation


#include<iostream>
using namespace std;

class Animal{
    private:
    string name;

    protected:
    void eat(){
        cout<<"Animal is eating "<<endl;
    }

    public: 
    int age;
    int weight;

};

int main(){
    //static object 

    Animal dog;
    dog.age =20;
    dog.weight = 30;

    cout<<"Dog's age and weight : "<<dog.age<<" "<<dog.weight<<endl;

    //creating object dynamically 
    Animal* cow = new Animal();

    (*cow).age = 30;
    (*cow).weight=45;

    cout<<"AGE of cow : "<<cow->age <<endl <<"Weight of cow : "<<cow->weight<<endl;

    //size of class
    cout<<"Size of class : "<<sizeof(Animal)<<endl;

    //we can't access the name and eat() fn because they are private and protected ;
 
    return 0 ;
}