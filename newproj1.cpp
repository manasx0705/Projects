#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;

    a=b+a;
    b=a-b;
    a=a-b;

    cout<<a<<endl;
    cout<<b;

return 0;
}