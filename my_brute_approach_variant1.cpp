//problem statement: Given an array of integers arr[] and an integer target.
//1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.
//approach is 1st we will place the pointer on 1 number then iterate through all the other numbers next and find if the other num + 1st num sum is equal to k or not.
#include<bits/stdc++.h>
using namespace std;
string TwoSum(int n , vector<int>&arr , int target){
    n=arr.size();
    for(int i=0 ; i<n ; i++){        //time complexity will be O(N*N)  and space complexity will be O(1) as no extra space is used 
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==target)
            return "YES";
        }
    }
    return "NO";  //// If n == 0, the for loop never runs, so we reach here without returning
}                   //isiliye return"NO" ko i waali for loop ke andar nhi likhenge 
int main(){
    vector<int>arr={1,2,3,2,4};
    int n=arr.size();
    int target =4;
    string result=TwoSum(n , arr , target);
    cout<<"The result is "<<result<<endl;
    return 0;
}