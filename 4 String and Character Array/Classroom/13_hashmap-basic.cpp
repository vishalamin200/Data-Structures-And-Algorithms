// creating map in the cpp

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,char> M;
    M.insert(make_pair(1,'a'));
    M[2]  = 'b';
    M[20] = 'C';

    cout<<M[1]<<"  "<<M[2]<<" "<<M[20]<<" "<<M[29]<<endl;
    return 0 ;
}