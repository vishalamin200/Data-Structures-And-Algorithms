// divide two numbers using binary search , two number can be positive or negative 

#include<iostream>
using namespace std;

// this function  just divide two positive numbers 
int divide(int& dividend , int& divisor){
    int start =0 , end = dividend , ans = 0;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(mid*divisor == dividend){
            return mid;
        }
        else if(mid*divisor < dividend){
            ans = mid;
            start = mid + 1 ;
        }
        else {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

// this function will return the ans with entered precison with sign
double absoluteAns(int dividend, int divisor , int precision){
    int dend = abs(dividend) , sor = abs(divisor);
    double quotient = divide(dend , sor);

    double step = 0.1;
    for(int i=0 ; i<precision ; i++  ){
        for(double j=quotient ; j*sor<= dend ; j = j+step){
            quotient = j;
        }
        step /= 10;
    }

    if(dividend * divisor >0 ){
        return quotient;
    }
    else{
        return -quotient;
    }
}



int main(){
    int dividend , divisor , ans , precision; 
    cout<<"enter dividend and divisor : ";
    cin>>dividend>>divisor ;

    cout<<"Enter precision : ";
    cin>>precision ; 
    cout << absoluteAns(dividend , divisor, precision);



    return 0 ;
}