//Left rotate means move every element of the arraya 1 step back wards..
//example arr[]={1,2,3,4,5}  , left rotated array will be arr[]={2,3,4,5,1}
#include<bits/stdc++.h>
using namespace std;
void rotateArray( int arr[] , int n){
    int temp=arr[0];
    for(int i=1 ; i<n ; i++){   //Time complexity is simple O(N) as only pass
        arr[i-1]=arr[i];        //Space used in the program is O(N) but extra space used is O(1)
    }
    arr[n-1]=temp;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,n);
    cout<<"The rotated array is ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<"";
    }
    return 0;
}