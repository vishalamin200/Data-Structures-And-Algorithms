#include<iostream>
using namespace std;
int main(){
    int a =4;
    int* p = &a;
    cout<<sizeof(p)<<endl;

    char ch = 'A';
    char* c = &ch;
    cout<<sizeof(c)<<endl;

    bool bo = true;
    bool* b = &bo;

    int* ptr =0;
    // cout<<*ptr;

    cout<<sizeof(b)<<endl;




}