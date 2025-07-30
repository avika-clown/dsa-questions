//In brute force approach...time complexity was much high ..O(n*logn)+O(n)
//we can reduce this complexity by using two pointers i and j 
//if i!=j , update i=j and i++ 
//this way time complexity will get reduced to O(n)
//By this method we can remove duplicates only in a sorted array
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[] , int n){
    int i=0;
    for(int j=1 ; j<n ; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        
        }
    }
    return i+1;
}
int main(){
    int arr[]={1,1,1,2,2,2,2,3,3,3,4,4,4,5,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=removeDuplicates(arr , n);
    cout<<"The array with duplicates all removed is "<<endl;
    for(int i=0 ; i<k ; i++){
        cout<<arr[i]<<"";
    }

}