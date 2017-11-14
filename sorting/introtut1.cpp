#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int val;
    cin>>val;
    int n;
    cin>>n;
    vector<int> num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        
    }
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(num[mid]==val ){cout<<mid;break;}
        else if(val>num[mid])low=mid+1;
        else high=mid-1;
    }
    return 0;
}

