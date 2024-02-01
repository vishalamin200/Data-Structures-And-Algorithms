// INitilisation list - other way of making constructor 

//pros : can initilise even a const variable , easy syntex


#include <iostream>
using namespace std;

#define PI 3.14
#define maxx(x,y) (x>y ? x:y)



class Circle
{
private:
	const double radius;

public:
    

   // initilisation list
    Circle():radius(0){};

    Circle(double r) : radius(r){
        // radius = 20;   // we can't update the value ,as it is a const , but in initilisation list  we can assign a value
    }


    // functions 
	double getArea()
	{
		return PI * (radius * radius);
	}

    double getPeri(){
        return  2 * PI * radius;
    }
};

int main()
{
	Circle circle1;
	Circle circle2(20);
	
	cout << circle1.getArea() << endl;
	cout << circle2.getArea() << endl;
    cout << circle2.getPeri() << endl;

    cout << maxx(10,12) <<endl;

}