//const keyword inside the class

#include<iostream>
using namespace std;

class animal{
    private:
    mutable int legs;
    int eyes;
    int *pair;

    public :

     // ctor
    animal(int l ,int _p , int eyes = 0){
        legs = l;
        pair = new int(_p);
        this -> eyes = eyes;
    }


    // getters and setters

    int  getLegs()const{
        legs = 25;  // as legs is mutable we can change legs even if function is const .
        return legs;
    }

    int getEyes()const{
        return eyes;
    }

    int getPair()const{
        return *pair;
    }

    void setLegs(int legs){
        this -> legs = legs;
    }

    void setEyes (int eyes){
        this-> eyes = eyes;
    }

    void setPair(int val){
        *pair = val;
    }

    //dtor
    ~animal(){
        delete(pair);
    }

};


void print(const animal &obj){
        cout<<obj.getLegs()<<" "
            <<obj.getPair()<<" "
            <<obj.getEyes()<<endl;
}

int main(){
    animal obj(1,2,10);
    print(obj);

    return 0 ;
}