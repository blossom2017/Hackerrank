#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
   std::sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        int count=1;
        int flag=1;
        if(arr[i]>0)
        {
            flag=0;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]>0){
            arr[j]=arr[j]-arr[i];
                flag=0;
                count++;
        }
            
        }}
     if(flag==0){ cout<<count<<endl;}
        //    else cout<<"DONE";
    }
    return 0;
}

