// compliment of base 10 integer (leetcode 1009)

// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in
// its binary representation.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, n , test = 0, count = 0, i = 1;
    cout << "Enter num  : ";
    cin >> num;

    if (num == 0)
    {
        test =  1;
    }
    else
    {
         n = num;
        while (n != 0)
        {
            n = n >> 1 ;
            test = pow(2, i) - 1;
            i++;
        }
    }
    cout << (test ^ num);

    return 0;
}