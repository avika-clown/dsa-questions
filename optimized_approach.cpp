//we can optimize this approach and time complexity by using two pointer approach
#include <bits/stdc++.h>   //pair matlab tum koi bhi do number utha sakte ho array ke beech ke ..not necesaary to be contigous 
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());   //arr[]={1,2,3,4,5}   target=7
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];    //time complexity is O(N)+O(nLogn) = O(nLogn)  somewhere less than O(n*n)
        if (sum == target) {                 //space complexity is O(1)
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}