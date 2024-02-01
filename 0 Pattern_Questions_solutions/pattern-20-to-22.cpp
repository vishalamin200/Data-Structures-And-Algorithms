/*
Pattern20 

3
44
555
6666
555
44
3

pattern21

1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1

pattern 22

1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1

*/

#include<iostream>
using namespace std;
void pattern20(int n){
    for(int row=0 ; row<n ;row++){
        for(int i=0 ; i<row+1 ;i++){
            cout<<row+3;
        }
        cout<<endl;
    }
    for(int row=n-2 ; row>=0 ;row--){
        for(int i=0 ; i<row+1 ;i++){
            cout<<row+3;
        }
        cout<<endl;
    }
}

void pattern21(int n){
    for(int row=0 ; row<n ; row++){
        for(int i =0 ; i<row+1 ; i++){
            cout<<row+1;
            if(i<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int row=n-1 ; row>=0 ; row--){
        for(int i =0 ; i<row+1 ; i++){
            cout<<row+1;
            if(i<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern22(int n){
    int counter =1;
    for(int row=0 ; row<n ; row++){

        for(int i =0 ; i<row+1 ; i++){
            cout<<counter++;
            if(i<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
    for(int row=n-1 ; row>=0 ; row--){
        counter = counter-row-1;
        for(int i =0 ; i<row+1 ; i++){
            cout<<counter+i;
            if(i<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"No. of rows(height) : ";
    cin>>n;

    pattern20(n);    cout<<"\n\n";
    pattern21(n);    cout<<"\n\n";
    pattern22(n);    cout<<"\n\n";
}
