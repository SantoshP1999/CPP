#include<iostream>
using namespace std;

inline void print(string str){
    cout<<str<<endl;
}
int main(){
    for(int i=0;i<10;i++){
     print("Hello Santosh");
    }
    return 0;
}


/*
Advantages of inline function

1) Function calling overhead reduces
2) Variables push/pop on the stack is Reduced
3)Return call from a function overhead reduced
4) Increase locality of reference by utilizing cache 
5) Once inline is done compiler can also apply intra-procedural optimization is specified


Disadvantages 

1) If used too many inline function then code size will increase
2)Compilation overhead will increase if someone changes code inside inline function then 
all calling location will also be compiled
*/