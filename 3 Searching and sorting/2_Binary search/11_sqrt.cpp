// find the square root of a number using binary search

#include<iostream>
using namespace std;

int sqrt(int num ){
    int start =0 , end = num ;
    int mid = start + (end-start)/2;
    int ans =0 ;

    while(start <= end){
        if(mid*mid == num){
            return mid;
        }
        else if (mid*mid > num){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
        mid = start + (end- start)/2;
    }
    return ans;
}

double accurate_sqrt(int num , int precision){
    double sqroot = sqrt(num);
    double step = 0.1;
    
    // 2 for loop doesnt increase time comlexity 
    for(int i=0 ; i<precision;i++){                        // constant
        for(double j = sqroot ; j*j<=num ; j = j+step){    // constant
            sqroot = j;
        }
        step /= 10;
    }
    return sqroot;  
}

int main(){
    int num ; 
    cout<<"Enter number : ";
    cin>>num;
    
    cout<<"Square root : "<<sqrt(num)<<endl;
    cout<<"Enter precision : ";
    int pre;
    cin>>pre;
    cout<<"Square root : "<<accurate_sqrt(num,pre);

    return 0 ;
}