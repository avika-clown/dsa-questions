#include<bits/stdc++.h>
using namespace std;
int SingleElement(vector<int>&arr){
    int n=arr.size();
    for(int i=0 ; i<n; i++){
        int num=arr[i];
        int ctr=0;

        for(int j=0 ; j<n ; j++)   //time complexity is O(n*n)
   {                               //space complexity is 0(1)
    if(arr[j]==num){
        ctr++;
    }
   }   
   if(ctr==1)
   return num;
 }
 return -1;
}
int main(){
    vector<int>arr={1,1,2,3,3,4,4};
    int n=arr.size();
    int result=SingleElement(arr);
    cout<<"The element that occurs only once is "<<result<<endl;
    return 0;
}