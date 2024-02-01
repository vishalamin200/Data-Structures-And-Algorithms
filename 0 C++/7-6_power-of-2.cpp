// check whether the given integer is power of 2 or not (leetcode 231)

#include<iostream>
#include<math.h>
using namespace std;

int powerOf2(int num){

    for(int i=0 ; i<32; i++){
        if(pow(2,i) == num){
            cout<<"It's power of 2"<<endl;
            return 0;
        }
    }
    cout<<"Not power of 2"<<endl;
}

bool powerOftwo(int num){
    if(num<=0) return 0;
    while(num !=1){
        if(num & 1){
            return 0;
        }
        num = num>>1;
    }
    return 1;
}

int power_of_two(int num){
    while(num != 1){
        if(num % 2 != 0 || num == 0){
            return 0;
        }
        num /=2;
    }
    return 1;
}

int Power_Of_2(int num){
    int temp =1;
    for(int i =0 ; i<30 ; i++){
        if(num == temp){
            return 1;
        }
        if(temp <INT_MAX){
            temp = temp*2;
        }
    }
    return 0;
}

int main(){
    int num ;
    cout<<"Enter a number : ";
    cin>>num;
    powerOf2(num);
    
    (powerOftwo(num) ) ? cout<<"Power of two \n" : cout<<"Not power of two\n";

    (power_of_two(num) ) ? cout<<"Power of two \n" : cout<<"Not power of two\n";
    
    (Power_Of_2(num) ) ? cout<<"Power of two \n" : cout<<"Not power of two\n";
}

