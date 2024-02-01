// pointer in the character array : 

#include<iostream>
using namespace std;

int main(){
    char name[] = "SherBano";
    cout<<name<<endl; //Sherbano
    cout<<&name<<endl; // addresss of name
    cout<<*name<<endl; // S 
    cout << name[0] <<endl; //S 
    cout << &name[0] <<endl; // Sherbano 
    cout << name+3<<endl;   // rBano 

    char *cptr = name;

    cout << cptr<<endl;   // Sherbano 
    cout << &cptr <<endl;  // address of pointer  
    cout << *cptr <<endl;  // S

    cout << cptr +2 <<endl; //erbano
    cout << *(cptr +3) <<endl;   //r
    cout << *cptr +2 <<endl;  //nnumber S+2
    cout << cptr+8 <<endl;   //nothing

    return 0 ;
}