#include <iostream>
using namespace std;

void SumOfNum(int n,int m){
    cout<<"Enter first number: ";
    cin>>n;
    cout<<"Enter second number: ";
    cin>>m;

    int result = n + m;
    cout<<"Sum of numbers is: "<<result<<endl;
}

int main(){
    int a,b;
    SumOfNum(a,b);
}