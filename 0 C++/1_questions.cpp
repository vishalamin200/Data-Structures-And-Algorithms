/*  Questions : 

1.  Swap two number without using third variable .
2.  Find the value of energy using formula E = mc^2  ;
3.  Convert the temperature from Fahrenheit to Celsius using formula
    c = (f-32) (5/9) ;

4.  Calculate Simple Interest .  if rate of interest = 9% .
5   check whether the number is prime or not .
6.  Print prime number in an interval given by user ;

*/

#include<iostream>
#include<math.h>
using namespace std;


void swap(){
    int num1, num2;
    cout<<"enter two numbers : ";
    cin>>num1>>num2;

    cout<<"after swaping "<<endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout<<"num1  = "<<num1<<"num2 = "<<num2;
}


void mc2(){
    float mass;
    int c = 3* pow(10,8);
    cout<<"enter the mass (in kg): ";
    cin>>mass;

    cout<<"Energy  = "<<mass*c*c<<"joules"<<endl;
}

void feh_to_cel(){
    int feh;
    cout<<"Temperature in Fehrenheit : ";
    cin>>feh;
    cout<<"Temperature in Celsius : "<<( (feh-32) *5) /9;
}

void interest(){
    int rate = 9 , principal , time ; 
    cout<<"Enter principal value and time (years) : ";
    cin>>principal>>time;
    cout<<"Total interest after "<<time<<"years : "<<(rate*principal*time)/100;
}

bool is_prime(int num){

    if(num<=1){
         return 0;
    }
    for(int i =2 ; i<num ; i++){
        if(num%i == 0 ){
            return 0;
        }
    }
    return 1;
}

void prime_in_interval(){
    int lower, upper;
    cout<<"enter the interval : ";
    cin>>lower>>upper;
    cout<<"prime number are : ";
    for(int i =lower ;i< upper ; i++){
        if(is_prime(i)){
            cout<<i<<endl;
        }
    }
}

int main(){
    int num;

    // swap();
    // mc2();
    // feh_to_cel();
    interest();

    cout<<"enter a number : ";
    cin>>num;
    is_prime(num)? cout<<"Prime ": cout<<" Not prime";

    prime_in_interval();

    return 0 ;
}