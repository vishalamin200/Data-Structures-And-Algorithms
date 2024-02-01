// multiple conditions in a for loop
#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    //loop continue till rightmost condition become false or 
    // we can say loop will only consider the rightmost condition.
    
    for(int a=0 , b=0 , c=0 ; a<=5 , b<=10 , c<=20 ; a++ , b++, c++ ){
        cout<<a<<","<<b<<","<<c<<endl;
    }
    return 0;
}