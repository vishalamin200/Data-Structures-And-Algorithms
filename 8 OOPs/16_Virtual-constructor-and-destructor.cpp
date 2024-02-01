// is it possible to create a virtual constructor ?  NO
// is it possible to create a virtal Destructor ? YES



#include<iostream>
using namespace std;

class Base{
    private:
    // virtual Base(){      // Not possible to create
    //     cout<<"Virtual constructor is called !"<<endl;
    // }

    public:
    Base(){
        cout<<"BASE constructor is called !"<<endl;
    }

    virtual ~Base(){
        cout<<"Base Destructor is called !"<<endl;
    }
};

class Derived : public Base{
    public:

    Derived(){
        cout<<"Derived constructor is called !"<<endl;
    }

    ~Derived(){
        cout<<"Derived Destructor is called !"<<endl;
    }

};

int main(){
    // Derived* b = new Derived();

    // Base* b = new Base();


    // Derived *b = (Derived*) new Base();
    
    cout<<endl<<endl;
    Base* b = new Derived();



    cout<<endl<<endl;
    delete(b);

    return 0 ;
}