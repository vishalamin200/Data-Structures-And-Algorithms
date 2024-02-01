#include<iostream>
#include<vector>
using namespace std;

// for printing the vector elements 
void print(vector<int>&arr){
    for(auto value : arr){
        cout<<value<<" ";
    }
    cout<<"\n\n";
}


int main(){
    int n ;
    // declaration of vector 
    vector<int> arr = {1,2,3,4,5,6};
    vector<int> brr(10,5);

    print(arr);

    //inserting element at back;
    cout<<"After inserting 20 at back ";
    arr.push_back(20);
    print (arr);

    // removing element from back 
    cout<<"Removing element from back "<<endl;
    arr.pop_back();
    print(arr);

    // size and capacity of a vector
    cout<<"Size = "<<arr.size()<<endl;
    cout<<"Capacity = "<<arr.capacity()<<"\n\n";

    // shrink to fit reduce the capacity to size of a vector
    cout<<"After using shrink_to_fit()  : "<<endl;
    arr.shrink_to_fit();
    cout<<"capacity "<<arr.capacity()<<endl<<endl;

    // inserting element at position 3;
    arr.insert(arr.begin()+2 , 15 );
    print(arr);

    // to check whether the vector is empty or not 
    (arr.empty())? cout<<"Empty " : cout<<"NOT empty ";

    // swaping the vector arr with brr;
    arr.swap(brr);
    cout<<"After swapping arr with brr , arr = "<<endl;
    print (arr);

    // resize the vector arr to 6
    arr.resize(6);
    cout<<"After resize arr to 6: ";
    print (arr);

    // 3rd element of vector brr ;
    cout<<"brr : ";
    print(brr);
    cout<<"brr.at(2) =  "<<brr.at(2)<<endl;
    cout<<"brr.front() = "<<brr.front()<<endl;
    cout<<"brr.back() = " <<brr.back()<<endl ;

    // brr.date() gives the address of the vector 
    cout<<"*brr.data() = "<<*brr.data() <<"\n\n";

    // arr.emplace gives a iteration of the element to be inserted
    auto it = arr.emplace(arr.begin(),9);
    cout<<*it<<" ";
    print(brr);
    

    cout<<"After using clear funtion brr : ";
    brr.clear();
    print(brr);
    cout<<"Size = "<<brr.size()<<endl;
    cout<<"Capacity = "<<brr.capacity()<<"\n\n";
    
    return 0;
}