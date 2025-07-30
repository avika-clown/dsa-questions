#include<bits/stdc++.h>
using namespace std;
int second_smallest(int arr[], int n){
    if(n<=2){
        return -1;
    }
    int small=INT_MAX ;
    int second_small=INT_MAX;
    int i;
    for(i=0 ; i<n ; i++){
        if(arr[i]<small){
            second_small=small;
            small=arr[i];
        }
        if(arr[i]<second_small && arr[i]!=small){
            second_small=arr[i];
        }
    }
    return second_small;

}
int second_largest(int arr[] , int n){
    if(n<=2){
        return -1;
    }
    int large=INT_MIN;
    int second_large=INT_MIN;
    int i;
    for(i=0 ; i<n ; i++){
        if(arr[i]>large){
            second_large=large;
            large=arr[i];
        }
        if(arr[i]>second_large && arr[i]!=large){
            second_large=arr[i];
        }
    }
    return second_large;
}
int main(){
    int arr[]={2,7,8,4,6,9,2,5,1,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Second Smallest is "<<second_smallest(arr,n)<<endl;
    cout<<"Second Largest is "<<second_largest(arr,n)<<endl;
    return 0;
}