//Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.
#include<bits/stdc++.h>
using namespace std;
int MissingNum(vector<int>&a , int N){
    for(int i=1 ; i<=N ; i++){
        int flag=0;
        for(int j=0 ; j<N-1 ; j++){
            if(a[j]==i){
            flag=1;
            break;
            }
        }
        if(flag==0)    //Time complexity is 0(N*N);
        return i;       //space complexity is 0(1);
    }
    return -1;
}
int main(){
    int N=5;
    vector<int>a={1,4,3,2};
    int result=MissingNum(a,N);
    cout<<"The missing number is "<<result<<endl;
    return 0;
}