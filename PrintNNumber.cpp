#include <iostream>
using namespace std;

void Count(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter number till that you want to print: ";
    cin>>n;

    Count(n);
    return 0;
}