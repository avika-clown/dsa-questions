#include<bits/stdc++.h>
using namespace std;
int largestelement(int arr[], int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr1[]={1,2,3,4,5,6};
    int max=largestelement(arr1,6);
    cout<<"The largest element is "<<max<<endl;

    int arr2[]={10,20,30,20,10};
    int max1=largestelement(arr2,5);
    cout<<"The largest element is "<<max1<<endl;
}
