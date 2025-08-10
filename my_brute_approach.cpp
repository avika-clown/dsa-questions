//we can create another array and place a counter ...if there are consecutive ones ..everytime the counter will be increased by 1 ...and the if the next is o then it will break..again the counter will be set to 0..and we will si ultaneously place the value f counter in another array...then the maximum number in the array will be our answer
#include<bits/stdc++.h>
using namespace std;
int ConsecutiveOnes(vector<int>&arr , int n){   //time complexity is O(3N)
    vector<int>counts;
    int ctr=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==1){
            ctr++;
        }
        else{
            counts.push_back(ctr);
            ctr=0;
        }
    }
    counts.push_back(ctr);
    return *max_element(counts.begin() , counts.end());
}
int main(){
    vector<int>arr={1,1,1,1,0,0,0,1,1,0,1,1,1,1,1,1,1};
    int n=arr.size();
    int result= ConsecutiveOnes(arr,n);
    cout<<"the max number of consecutive ones is "<<result<<endl;
    return 0;

}