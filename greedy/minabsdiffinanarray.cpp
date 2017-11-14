#include <bits/stdc++.h>

using namespace std;

int minimumAbsoluteDifference(int n, vector <int> arr) {
    int diff=INT_MAX;
    /*
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int val=abs(arr[i]-arr[j]);
            if(val<diff)diff=val;
     }
    }*/
    std::sort(arr.begin(),arr.end());
   // diff=abs(arr[arr.size()-1]-arr[0]);
    for(int i=0;i<arr.size();i++)
    {
        int val=abs(arr[i+1]-arr[i]);
        if(val<diff)diff=val;
    }
    return diff;
    // Complete this function
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = minimumAbsoluteDifference(n, arr);
    cout << result << endl;
    return 0;
}

