//binary to decimal 
#include<iostream>
#include<math.h>

int binary_to_decimal(int);

using namespace std;
int main(){
    int bi;
    cout<<"Enter binary number : ";
    cin>>bi;
    cout<<binary_to_decimal(bi);

}

int binary_to_decimal(int bi){
    int deci =0 , i =0 ;
    while(bi!=0 ){
        int bit = bi%10;
        deci = deci + bit*pow(2,i);
        bi = bi/10;
        i++;
    }
    return deci;
}