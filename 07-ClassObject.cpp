#include<iostream>
#include<string>

using namespace std;

class mobile{
string pName;
string pSize;

public:
mobile(string name,string size){
pName=name;
pSize=size;

}

void makeCall(){
    cout<<"Making call using "<<pName<<endl;
}

void receiveCall(){
    cout<<"Receiving Call using "<<pName<<endl;
}

};

int main(){
    mobile mob("Samsung","4inch");
    mob.makeCall();
    mob.receiveCall();
    

    mobile mob2("Realme","6inch");
    mob2.makeCall();
    mob2.receiveCall();
    
    return 0;
}