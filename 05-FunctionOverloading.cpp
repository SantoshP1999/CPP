
//RULES WHERE FUNCTION OVERLOADING WILL NOT WORK.

// 1. Function declarations that differ only in the return type. 
// 2. In class if we have similar function name and parameter but one is static function another one is non-static. 
// 3. When we receive array as pointer or array both are similar.
// 4. const and volatile doesn't make any difference.
// 5. One function parameter declared as function type and another as pointer to the same function type are equivalent.
// 6. Two function parameters are equal if they differ only if one of them is having default parameter.

#include<iostream>
using namespace std;

void add(int x,int y){
int z=x + y;
cout<<"Integer Addition: "<<z<<endl;
}

void add(float x,float y){
float z=x + y;
cout<<"Float Addition: "<<z<<endl;
}

void add(double x,double y){
double z=x + y;
cout<<"Double Addition: "<<z<<endl;
}

int main(){
add(2,3);
add(10.4f,20.5f);
add(5.4,5.5);
    return 0;
}