//data types, sizeof() function , typeid().name()  function
//note : to use typeid().name() funtion you have to include typeinfo header file.

#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int num = 1054566635;
    cout<<"the type of num is : "<<typeid(num).name()<<endl;
    cout<<"size of the int is : "<<sizeof(num)<<endl;
    
    cout<<endl;
    short size = 123;
    cout<<"the type of size variable : "<<typeid(size).name()<<endl;
    cout<<"size of the short datatype : "<<sizeof(size)<<endl;

    cout<<endl;
    long value = 1341651131;
    cout<<"the type of value variable :"<<typeid(value).name()<<endl;
    cout<<"size of the long datatype : "<<sizeof(value)<<endl;
    
    cout<<endl;
    float pi = 3.14;
    cout<<"the type of pi is : "<<typeid(pi).name()<<endl;
    cout<<"the size of float is : "<<sizeof(pi)<<endl;

    cout<<endl;
    double pi2 = 3.14159265359;
    cout<<"the type of pi2 : "<<typeid(pi2).name()<<endl;
    cout<<"the size of double is : "<<sizeof(pi2)<<endl;

    cout<<endl;
    bool work = true;
    cout<<"the type of work is : "<<typeid(work).name()<<endl;
    cout<<"the size of bool datatype : "<<sizeof(work)<<endl;

    cout<<endl;
    char ch = 'A';
    cout<<"type of ch variable : "<<typeid(ch).name()<<endl;
    cout<<"the size of ch "<<sizeof(ch)<<endl;



    



}