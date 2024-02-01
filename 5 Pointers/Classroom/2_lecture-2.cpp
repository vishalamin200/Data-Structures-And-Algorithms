// pointer in the array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40};

    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    int*p = arr;
    cout<<p<<endl;

    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<arr[0]<<endl<<endl;

    cout<<*(arr+1) <<endl;
    cout<<arr[1]<<endl<<endl;

    cout<<*(arr+2)<<endl;
    cout<<arr[2]<<endl<<endl;


    int i =3;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl;
    cout<<*(i+arr)<<endl;
    return 0 ;
}