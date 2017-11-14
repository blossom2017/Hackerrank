#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    cin>>n;
    vector <int > num(100);
   int val;
   for(int i=0;i<n;i++)
    {
        cin>>val;
        num[val]++;
    }
    for(int i=0;i<100;i++)
    {
        cout<<num[i]<<" ";}
    return 0;
}

