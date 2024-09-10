#include<iostream>

using namespace std;
void update(int& x){
x=x+10;

}


int main(){
    
    int val=20;
    cout<<"Val before Update: "<<val<<endl;
    update(val);
    cout<<"Val After Update: "<<val<<endl;
    return 0;
}