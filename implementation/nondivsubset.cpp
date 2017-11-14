#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k;
    cin>>n>>k;
    vector<int > nos(n);
    for (int i=0;i<n;i++)
    {
        cin>>nos[i];
    }
    vector<int > subs(k);
   int rem=0; 
   // subs.push_back(0);
 //   modval=0;
    
   for(int i=0;i<n;i++)
   {
    int rem=nos[i]%k;
     //  cout<<rem<<" ";
       subs[rem]++;
       
      
   }
   // cout<<k;
 // for(int i=0;i<k;i++)cout<<subs[i]<<" ";
    int i=1;
    int l=k-1;
    int max=-100;
  long  int sum=0;
  //  vector <int> pair(k);
 //   pair=subs;
  
 //  cout<<i<<l; 
  while(i<l)
  {
     
      
       //   cout<<"enterin";
     if(subs[i]>=subs[l])sum+=subs[i];
      else sum+=subs[l];
      l--;
      i++;
  }
    if(k%2==0)sum+=1;
    if(subs[0]<1)sum+=subs[0];
    else sum++;
     //for(int i=0;i<k;i++)cout<<pair[i]<<" ";
    cout<<sum;
    return 0;
}



