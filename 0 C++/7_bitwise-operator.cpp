// bitwise operators in cpp

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a = 5 , b =7;

    cout<< "a | b  = " <<(a|b)<<endl; // 110  
    cout<< "a & b  = " <<(a&b)<<endl;
    cout<< "~a  = " <<(~a)<<endl;
    cout<< "a ^ b  = " <<(a^b)<<endl;


    /*
    7 ->  1 1 1
    5 ->  1 0 1
    --------------------
    or    1 1 1   -> 7
    and   1 0 1   -> 5 
    xor   0 1 0   -> 2
    
    //for explanations i have take msb , and few bits of remaining bits

    a=5    0   0 0 0 0 0 0 0 0 1 0 1
    not a  1   1 1 1 1 1 1 1 1 0 1 0 
    
    1'     1   0 0 0 0 0 0 0 0 1 0 1
    2';    1   0 0 0 0 0 0 0 0 1 1 0      = -6
    
    */

// left shift and right shift operators

int x = 0;
   cout<<" x << 1 = " <<(x<<1 )<<endl;     // 16X 2 =32
   cout<<" x << 2 = "<<(x<<2)<<endl;       // 16 X 2 X 2 = 64;

   cout<<" x >> 1 = "<<(x >> 1)<<endl;    // 16/2 = 8;
   cout<<" x >> 2 = "<<(x>>2)<<endl;      // 16/(2*2) = 4;

// what if we right shift or left the the INT MIN or INT Max ? 


x = INT_MAX;   // 2147483647
cout<<" INT MAX << 1  = "<<(x<<1)<<endl;

cout<<"INT_MIN < 1 = " <<(INT_MIN <<1)<<endl;

/* explaination 
      INT_MAX     =     0    1 1 1 1 1 1 1 1 1 1 1 1 1 
      INT_MAX <1  =     1    1 1 1 1 1 1 1 1 1 1 1 1 0   -->negative number and to print have to take 2's comliment
      
      1's comliment =   1    0 0 0 0 0 0 0 0 0 0 0 0 1
      2's compliment =  1    0 0 0 0 0 0 0 0 0 0 0 1 0  = -2  

      INT MIN    =      1    0 0 0 0 0 0 0 0 0 0 0 0 0  =  -2147483648
      INT MIN <1 =      0    0 0 0 0 0 0 0 0 0 0 0 0 0  =  0 

*/
                                                   

// pre and post increments and decrement 

int y = 10;

   cout<<(y++) <<endl;     // 10  , y=11
   cout<<(++y)<<endl;  //  y =12   , 12
   cout<<(--y)<<endl;  // y=11 ,11;
   cout<<(y--) <<endl; // 11   , y =10;

y = 10;
   cout<<"(++y) * (++y) = "<<(++y)*(++y);

return 0;

}