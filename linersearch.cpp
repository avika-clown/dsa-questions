#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[] , int n , int num){
    for(int i=0 ; i<n ; i++){
        if (arr[i]==num){
            cout<<i;
            return;
        }
    }
    cout<<-1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num=7;
    linearSearch(arr , n , 7);
    return 0;
}