//Question - 1 : Given marks of a student, print on the screen:
//Grade A if marks >= 90
//Grade B if marks >= 70
//Grade C if marks >= 50
//Grade D if marks >= 35
//Fail, otherwise
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>=90)
    cout<<"Grade A";
    else if(marks>=70 && marks<=90)
    cout<<"Grade B";
    else if(marks>=50 && marks<=70)
    cout<<"Grade C";
    else if(marks>=35 && marks<=50)
    cout<<"Grade D";
    else 
    cout<<"Fail";
}




