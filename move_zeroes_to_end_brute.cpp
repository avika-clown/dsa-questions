//My idea is we can use function inside another function to carry out this...
// Zeroes ko temp mei daalne ki bajaye ..non zero elements ko temp mei daalo
//we will use vector here;
#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeroesAtEnd(int n , vector<int>a){
    vector<int>temp;
    for(int i=0 ; i<n ; i++){
        if(a[i]!=0)
        temp.push_back(a[i]);
    }
    int nz=temp.size();
    for(int i=0 ; i<nz ; i++){
        a[i]=temp[i];
    }
    for(int i=nz ; i<n ; i++){
        a[i]=0;
    }
    return a;
}
int main(){
    vector<int> arr={1,0,2,0,3,0,4,0,5,0,6,0};
    int n=12;
    vector<int>ans=moveZeroesAtEnd(n,arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}