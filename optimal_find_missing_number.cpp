//the time complexity in brute force approach is way higher 0(n*n)
//we can use summation method to solve this 
#include<bits/stdc++.h>
using namespace std;
int MissNum(int arr[] , int n){ //time compexity in this case is 0(N)
    int sum2=0;
    int sum1=(n*(n+1))/2;
    for(int i=0 ; i<n-1 ; i++){
        sum2=sum2+arr[i];

    }
    int result=sum1-sum2;
    return result;
}
int main(){
    int arr[]={1,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int result=MissNum(arr,n);
    cout<<"The missing  number is "<<result<<endl;
    return 0;

}