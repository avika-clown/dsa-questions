//Set data structrue can be used to remove duplicates form an array as a set only stores unique elements
//Internally it also keeps elements in sorted order
//So by using sets array is sorted and all the duplicates are removed (bingo)
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates( int arr[] , int n){
    set<int>set;
    for(int i=0 ; i<n ; i++){
        set.insert(arr[i]);
    }
    int k=set.size();
    int j=0;
    for(int x: set){
        arr[j++]=x;
    }
    return k;
}
int main(){
    int arr[]={2,4,1,2,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=removeDuplicates(arr , n); ///but in this case time complexity is more that is [O(N*logN)+O(N)]
    cout<<"The array without duplicates is "<<endl;
    for(int i=0 ; i<k; i++){
       cout<<arr[i]<<"";
    }
    return 0;
}