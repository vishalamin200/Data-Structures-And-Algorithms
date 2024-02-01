// most used string functions
#include<iostream>
using namespace std;

int main(){
    string name = "Vishal";
    string fullName = "Amin vishal";

    cout<<"name = "<<name<<endl;
    cout<<"fullName : "<<fullName<<endl;

    // 1. substring   -- > substr(starting_index , length of substring)
    cout<<"substring (1 to 4 ) : "<<name.substr(1,4)<<endl;

    //2. compaire  (return 0 if same, -1 if first char is smaller in first string) 
    cout<<"compare name and fullname : "<<name.compare(fullName)<<endl;


    // 3. find()   --> return the index at which string or character is present . 
    // if not present it return npos value --> no position value

    cout<<  "find 'al' : "<< name.find("al") <<endl;
    cout<<  "find 'z' : "<< name.find("z") <<endl;

    // 4. replace(initial index, no. of char. to remove , string name)

    cout<<"replacing index (0 to 3 ) with full Name : "<< name.replace(3,2 , fullName)<<endl;
    

    // erase funtion -- > .erase(starting index , no. of element to remove)

    cout<<"removing three char at index 2 from fullName : "<<fullName.erase(2,3)<<endl;

    
    return 0 ;
}