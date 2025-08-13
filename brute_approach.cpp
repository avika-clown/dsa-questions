
//we can simply cout the frequency of occuring 0s , 1s and 2s and then place in the array accordingly;
#include<bits/stdc++.h>
using namespace std;
vector<int> sortArray(vector<int>arr){
    int n=arr.size();
    int a=0;//counter for 0;
    int b=0; //counter for 1;
    int c=0;//counter for 2;
    for(int i=0 ; i<n; i++){
        if(arr[i]==0){
            a++;        }
        else if(arr[i]==1){
            b++;
        }
        else c++;
    }
    
    for(int i=0 ; i<a ; i++){    //here the time complexity for this code would be O(n)+O(n) and space complexity will be 0(1)
        arr[i]=0;
    }
    for(int i=a ; i<a+b ; i++){   //indexing for 1 would be from a to a+b-1
        arr[i]=1;
    }
    for(int i=a+b ; i<n ; i++){   //similarly indexing for 2 would be from a+b to n-1
        arr[i]=2;
    }
    return arr;
}
int main(){
    vector<int>arr={1,2,0,0,2,1,2,1,0};
    vector<int> result =sortArray(arr);
    cout<<"The sorted array is ";
    for(auto it : result){
        cout<<it<<"";
    }

    return 0;
}