#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    long int sum=0;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
        sum=sum+arr[arr_i];
        
    }
   // cout<<sum;
   long int min=sum-arr[0];
    long int max=sum-arr[0];
    for(int arr_i = 1; arr_i < 5; arr_i++){
        if(sum-arr[arr_i]<min)min=sum-arr[arr_i];
        else if(sum-arr[arr_i]>max)max=sum-arr[arr_i];
        
    }
    cout<<min<<" "<<max;
    return 0;
}

