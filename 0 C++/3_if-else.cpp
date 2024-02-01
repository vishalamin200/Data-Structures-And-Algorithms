/*
1. even/odd using binary operator
2. check whether the character is vovel ,consonant or small letter , Capital letter , 
   digit or special character.

3. Largest number from 3 numbers
4. Find roots of the Quadratic equation
*/

#include<iostream>
#include<math.h>
using namespace std;

void evenOdd(){
    int num;
    cout<<"enter a number : ";
    cin>>num;
    (num&1 == 1)?cout<<"odd ": cout<<"even";
}

void que2(){
    char ch;
    cout<<"enter a character : ";
    cin>>ch;
    
    if(isalpha(ch)){

        cout << "it's an alphabet" << endl;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "vovel" << endl;
        }
        else
        {
            cout << "Consonant" << endl;
        }

        if(islower(ch)){
            cout<<"Lowercase"<<endl;
        }
        else if(isupper(ch)){
            cout<<"Uppercase";
        }
    }

    else if (isdigit(ch)){
        cout<<ch<<" is a digit "<<endl;
    }
    else {
        cout<<ch<<" is a special charactere ";
    }
}

void largest(){
    int num1, num2,num3;
    cout<<"Enter three numbers : ";
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3){
        cout<<"Largest : "<<num1<<endl;
    }

    else if (num2>=num1 && num2>=num3){
        cout<<"Largest : "<<num2<<endl;
    }
    else{
        cout<<"Largest : "<<num3;
    }
}

void roots(){
    int a,b,c;
    cout<<"Enter the coeffients of a quadratic equation : ";
    cin>>a>>b>>c;

    int disc =(b*b) - (4*a*c) ;
    if(disc <0 ){
        cout<<"Roots are Imazinary ";
    }
    else{
        int rootDisc = pow(disc,0.5);
        int root1 = (-b +rootDisc)/(2*a);
        int root2 = (-b-rootDisc)/(2*a);
        cout<<"roots are " <<root1 <<" and "<< root2;  
    }
}



int main(){
    // evenOdd();
    // que2();
    // largest();
    roots();
}

