
/*
1) Constructor name is same as Class Name
2) Constructor is automatic call when we create an object of the class
3) Constructor has no return type
4) If constructor is not given by user, Compiler create itself  

Types of Constructor
    1) Default Constructor
    2) Parameterized Constructor
    3) Copy Constructor

*/

#include<iostream>
using namespace std;

class Point{
 int x;
 int y;

public:
Point()
{
    x=10;
    y=20;
    cout<<"Default Constructor Called\n";
}
Point(int x,int y)
{
    x=x;
    y=x;
    cout<<"Parameterized Constructor Called\n";
}

Point(const Point& rhs)
{
     x=rhs.x;
     y=rhs.y;  
     cout<<"Copy Constructor Called\n";
}


};

int main(){
    Point p1;
    Point p2(30,40);
    Point p3=p1;
    return 0;
}