#include <iostream>
using namespace std;

int SumOfEvens(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=i;
        }
        else{
            continue;
        }
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int result = SumOfEvens(n);
    cout<<"Sum of all evens till n is: "<<result<<endl;
}