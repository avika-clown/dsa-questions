#include<bits/stdc++.h>
using namespace std;
void result(int arr[] , int n){
    int i;
    if(n<=2){
        cout<<-1<<""<<-1<<endl;
    }
    for(i=0 ; i<n ; i++){   //If you will not add return then multiple time the not a sorted array will be printed as its in the for loop.
        if(arr[i]>arr[i+1]){
            cout<<"Not a sorted array"<<endl;
            return;
        }
    }

    cout<<"Sorted array"<<endl;
    
}
int main(){
    int arr[]={1,2,3,4,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    result(arr,n);
    return 0;
}