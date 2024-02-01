// write a program for the number of the notes of 1000, 500, 100, 50 , 20 ,10 , 5, 1 for an given amount ;
// using switch case

#include<iostream>
using namespace std;
int main(){
    int amount ;
    cout<<"Enter Amount : ";
    cin>>amount;

    int n1000 , n500 , n200, n100 , n50 , n20 , n10, n5, n1;
    n1000 = n500 = n200 =  n100 = n50 = n20 = n10 = n5 = n1 = 0;
    
    switch(amount>=1000){
        case 1 : {
            n1000 = amount /1000;
            amount = amount - 1000*n1000;
            cout<<n1000<<endl;
        }
    }

    switch(amount>=500){
        case 1 : {
            n500 = amount /500;
            amount = amount - 500 * n500;
        }
    }

    switch(amount>=200){
        case 1 : {
            n500 = amount /500;
            amount = amount - 500 * n500;
        }
    }
    switch(amount>=100){
        case 1 : {
            n100 = amount /100;
            amount = amount - n100*100;
        }
    }
    switch(amount>=50){
        case 1 : {
            n50 = amount /50;
            amount = amount - n50*50;
        }
    }
    switch(amount>=20){
        case 1 : {
            n20 = amount /20;
            amount = amount - n20*20;
        }
    }
    switch(amount>=10){
        case 1 : {
            n10 = amount /10;
            amount = amount - 10 * n10;
        }
    }

    switch(amount>=5){
        case 1 : {
            n5 = amount /5;
            amount = amount - 5 * n5;
        }
    }

    switch(amount>=1){
        case 1 : {
            n1 = amount;
        }
    }
    
    cout<<"No. of 1000 notes : "<<n1000<<endl
        <<"No. of 500 notes : "<<n500<<endl
        <<"No. of 200 notes : "<<n200<<endl
        <<"No. of 100 notes : "<<n100<<endl
        <<"No. of 50 notes : "<<n50<<endl
        <<"No. of 20 notes : "<<n20<<endl
        <<"No. of 10 notes : "<<n10<<endl
        <<"No. of 5 notes : "<<n5<<endl
        <<"No. of 1 notes : "<<n1<<endl;
}