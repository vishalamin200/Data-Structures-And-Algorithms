// find the HCF ( GCD) and LCM of the two numbers 

/* gcd by  Euclid's algorithm :
  gcd (a,b) = gcd (a-b ,b)   if a>b;
            = gcd (a , b-a)  if b>a;
*/

#include<iostream>
using namespace std;

int gcd(int A , int B){
    if(A==0) return B;
    if(B==0) return A;

    while(A > 0 && B>0){
        if(A > B){
            A = A-B;
        }
        else{
            B = B-A;
        }
    }
    return (A == 0)? B : A;
}

int lcm (int A , int B){
    return (A*B)/gcd(A,B);
}

int main(){
    int num1, num2;
    cout<<"Enter two number : ";
    cin>>num1>>num2;
    cout<<"GCD/HCF  = " <<gcd(num1,num2)<<endl;
    cout<<"LCM = "<<lcm(num1,num2)<<endl;
    return 0 ;
}
