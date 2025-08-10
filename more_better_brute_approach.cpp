//we can create two variables..count and max_count..count condition is same and if count>max_count then we will update the max_count
#include<bits/stdc++.h>
using namespace std;
int Max_Consecutive_ones(vector<int>&nums){  //time complexity is O (N)
    int count=0;
    int max_count=0;
    for(int i=0 ; i <nums.size() ; i++){
        if(nums[i]==1){
            count++;
        }
        else {
        count=0;
        }
        max_count=max(count,max_count);
    }
    return max_count;
}
int main(){
    vector<int>nums={1,1,1,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1};
    int result=Max_Consecutive_ones(nums);
    cout<<"the max number of consecutive ones are "<<result<<endl;
    return 0;
}