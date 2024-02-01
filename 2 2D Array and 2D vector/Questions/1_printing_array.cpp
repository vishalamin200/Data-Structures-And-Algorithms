// print the 2d array row wise and column wise 

#include<iostream>
using namespace std;

void row_WisePrint(int arr[3][3]){
    cout<<"Row wise printing : "<<endl;
    for(int i=0  ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}

void col_WisePrint(int arr[3][3]){
    cout<<"column wise printing : "<<endl;
    for(int i=0  ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}

int main(){
    
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};       // initialisation
    int brr[3][3];
    int crr[3][3];

    cout<<"Row wise and column wise printing of Arr : "<<endl;
    row_WisePrint(arr);
    col_WisePrint(arr);  

    cout<<"taking input row wise : ";

    for(int i=0  ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>>brr[i][j];
        }
    }
    cout<<"\n\n";
    row_WisePrint(brr);

    cout<<"Taking input column wise and print : ";
    for(int i=0  ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cin>>crr[j][i];
        }
    }
    row_WisePrint(crr);

}


