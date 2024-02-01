// multiple and hierachical inheritance

// multiple inheritance : multiple base and single child

// hierachical : 1 base and multiple child

#include<iostream>
using namespace std;

class herbivores {
    public:
    void drink(){
        cout<<"This animal drink milk "<<endl;
    }
};

class carnivorous {
    public : 
    void eat(){
        cout<<"This animal eats Meat "<<endl;
    }
};

class omnivorous {
    public : 
    void eat(){
        cout<<"This animal drink milk and eat meat"<<endl;
    }
};

class Cat : public herbivores , public carnivorous , public omnivorous{
};

int main(){
    Cat mossy;
    mossy.drink();
    
    mossy.carnivorous::eat();
    mossy.omnivorous::eat();

    // when two class inherited by the child have same function name then , compiler will get confused , this 
    // type of problem is called as Diamond problem.  
    // to solve this problem we used Scope Resolution Operator ::   ;
    
    return 0 ;
}