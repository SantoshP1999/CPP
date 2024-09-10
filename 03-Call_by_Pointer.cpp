#include<iostream>
using namespace std;

void update(int* newx){
    *newx=50;
}

int main(){
    int x=10;
    update(&x);
    cout<<"X: "<<x<<endl;
    return 0;
}