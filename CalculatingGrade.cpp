#include <iostream>
using namespace std;

char calGrade(int marks){
    if(marks>=90){
        return 'O';
    }
    else if(marks>=80 && marks<90){
        return 'A';
    }
    else if(marks>=70 && marks<80){
        return 'B';
    }
    else if(marks>=60 && marks<70){
        return 'C';
    }
    else if(marks>=50 && marks<60){
        return 'D';
    }
    else if(marks>=40 && marks<50){
        return 'E';
    }
    else{
        return 'R';
    }
}

int main(){
    int marks;
    cout<<"Enter marks you obtained: ";
    cin>>marks;

    char finalGrade = calGrade(marks);
    cout<<"You obtained "<<finalGrade<<" grade."<<endl;

    return 0;
}