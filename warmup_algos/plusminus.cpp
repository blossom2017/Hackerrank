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
    float npos=0,nneg=0,nzero=0;
    
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if (arr[arr_i]==0)nzero++;
        else if(arr[arr_i]<0)nneg++;
        else npos++;
    }
    cout<<npos/n<<endl<<nneg/n<<endl<<nzero/n;
    return 0;
}

