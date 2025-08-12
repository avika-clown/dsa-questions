//variant 2: in this we have to return the indices also of the numbers whose sum is equal to the target number 
#include<bits/stdc++.h>
using namespace std;
vector<int> TwoSum(int n , vector<int>&arr , int target){
    n=arr.size();
    vector<int>result;
    for(int i=0 ; i<n ; i++){   //here time complexity is O(n*n) and space complexity is O(1)  ...basically extra space is used so space complexity will be O(2)
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
            
        }
    }
    return {-1 , -1};
}
int main(){
    vector<int>arr={1,2,4,3,2,1};
    int target=7;
    int n=arr.size();
    vector<int> result=TwoSum(n,arr,target);
    cout<<"the indices are ["<<result[0] <<","<<result[1]<<"]"<<endl;
    return 0;

}