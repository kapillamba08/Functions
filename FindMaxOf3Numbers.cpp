#include <iostream>
using namespace std;

int FindMax(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter I,II,III number: ";
    cin>>a>>b>>c;

    int max = FindMax(a,b,c);
    cout<<max<<endl;
}