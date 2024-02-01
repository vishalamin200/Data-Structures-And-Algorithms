// pointer in char datatype and in special cases

#include<iostream>
using namespace std;

int main(){
    char ch = 'k';
    char* cptr = &ch;
    cout<<cptr<<endl;   // will print till null character not incountered

    //in some special cases
    char name[] = "Babbar";
    char *p = "Babbar";     //Bad practice 

    cout<<p<<endl;
    return 0 ;
}