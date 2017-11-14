#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;
//carefully see all the vector functions you have used and max_element function that you have used 

int main() {
    vector  <long int> v;
    int n;
    cin>>n;
    int i=1;
    int t;
    long int num;
    
    while(i<=n)
    {
        cin>>t;
        if(t==1)
        {
            cin>>num;
            v.push_back(num);
            
        }
        else if( t==2)
        {
            v.pop_back();
            
        }
        else if(t==3)
        {
            long int max=*std::max_element(v.begin(),v.end());
            cout<<max<<endl;
        }
        i++;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

