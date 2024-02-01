#include <iostream>
#include<math.h>
using namespace std;

void decimal_to_binary(int);
void deci_to_bi(int);

int main()
{
    int deci;
    cout << "Enter a non negative number : ";
    cin >> deci;

    //by first approach
    decimal_to_binary(deci);
    cout<<endl;
    // by second approach
    deci_to_bi(deci);
}

//First approach
void decimal_to_binary(int deci)
{   int bi =0, binary[32];
    int i=0;
    while (deci !=0 ){
        int rem = deci % 2;
        binary[i] = rem;
        deci = deci/2;
        i++;
    }
    
    for(int j = i-1 ; j>=0 ; j--){
        cout<<binary[j];
    }  
}

//sedond approach by AND operator
void deci_to_bi(int deci){
    int i=0 , binary[32];
    while(deci !=0 ){
        int bit = (deci & 1);
        binary[i] = bit;
        deci = deci>>1;
        i++;
    }
    //print array having binary in reverse order
    for(int j = i-1; j>=0 ; j--){
        cout<<binary[j];
    }
}