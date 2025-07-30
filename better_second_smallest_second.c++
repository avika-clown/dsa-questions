//Better approach is that without sorting the whole array first find the smallest and largest in just 1 traversal..then in another traversal again find the smallest 
//and largest..now these will be the second smallest and second largest number in the array.
#include<bits/stdc++.h>
using namespace std;
void getElements( int arr[] , int n){    //[2,1,4,3,6,5]      //Time Complexity is O(N) which is better than O(NlogN)
    if(n==0 || n==1){                                         //However this is still a double pass solution ..therefore we will find optimal solution ..where it can be done in single pass only 
        cout<<-1<<""<<-1<<endl; //edge case if an array contains only 1 or 0 elements
    }
    int small=INT_MAX , second_small=INT_MAX;
    int large=INT_MIN , second_large=INT_MIN;
    for(int i=0; i<n; i++){
        small=min(small , arr[i]);
        large=max(large , arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }
    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second Largest is "<<second_large<<endl;

}
int main(){
    int arr[]={2,7,8,4,6,9,3,5,};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr , n);
    return 0;

}