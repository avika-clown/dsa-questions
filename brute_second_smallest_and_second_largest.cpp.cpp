//brute force approach
// for sorting use the normal sort() function .
//sort the array and the 1st index number and second index from the last will be 2nd smallest and second largest resp.
#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[], int n){ //use void agar aisa function banana hai jo kuch return na kare 
    if(n==0|| n==1){
        cout<<-1<<""<<-1<<endl;//edge case if the aray contains only 1 element
        
    }
    sort(arr , arr+n);   //uses introSort algorithm which is a highly efficient technique...it begins with quick sort then switches to heap sort and then setiches to insertion sort as and when required 
    int small=arr[1];      // timecomplexity is O(NlogN) for this sort function 
    int large = arr[n-2];
    cout<<"Second smallest is "<<small<<endl;                 //in sort(arr , arr+n) the arr is the pointer on the 1st element or 0th index 
    cout<<"Second largest is "<<large<<endl;                  // arr+n represents a pointer beyond the last element or beyond the nth index 
}
int main(){
    int arr[]={2,1,3,4,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);    //in case of bigger array you cannot count the elements manually
    getElements(arr , n);
    return 0;
    
}
