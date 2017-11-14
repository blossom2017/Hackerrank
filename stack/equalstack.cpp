#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
 unsigned long long int sum1=0,sum2=0,sum3=0;
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<long long int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
      //  sum1+=h1[h1_i];
    }
    vector<long long int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
      //  sum2+=h2[h2_i];
    }
    vector<long long int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
       // sum3+=h3[h3_i];
    }
    std::reverse(h1.begin(),h1.end());
     std::reverse(h2.begin(),h2.end());
     std::reverse(h3.begin(),h3.end());
 /*   
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cout<< h1[h1_i];
      //  sum1+=h1[h1_i];
    }
    cout<<endl;
   // vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cout<< h2[h2_i];
      //  sum2+=h2[h2_i];
    }  cout<<endl;
    //vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cout<< h3[h3_i];
       // sum3+=h3[h3_i];
    }  cout<<endl;
    */
    int i=1,j=1,k=1;
   while(i<n1||j<n2||k<n3)
   {
       if(i<n1)
       {
           h1[i]=h1[i]+h1[i-1];
           i++;
       }
       if(j<n2)
       {
           h2[j]=h2[j]+h2[j-1];
           j++;
       }
       if(k<n3)
       {
           h3[k]=h3[k]+h3[k-1];
           k++;
       }
   }
    
   // sum1=std::accumulate(h1.begin(),h1.end(),0);
     //   cout<<sum1;
     //   sum2=std::accumulate(h2.begin(),h2.end(),0);
       // sum3=std::accumulate(h3.begin(),h3.end(),0);
  //  i=0,j=0,k=0;
    int val=0;
    
   
    std::reverse(h1.begin(),h1.end());
     std::reverse(h2.begin(),h2.end());
     std::reverse(h3.begin(),h3.end());
    i=0;
    j=0;
    k=0;
 /*    for(int h1_i = 0;h1_i < n1;h1_i++){
       cout<< h1[h1_i];
      //  sum1+=h1[h1_i];
    }
    cout<<endl;
   // vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cout<< h2[h2_i];
      //  sum2+=h2[h2_i];
    }  cout<<endl;
    //vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cout<< h3[h3_i];
       // sum3+=h3[h3_i];
    }  cout<<endl;
   */ 
while(i<n1&&j<n2&&k<n3)   
{
    if(h1[i]==h2[j]&&h2[j]==h3[k])
    {
        val=h1[i];
        break;
    }
    else if(h1[i]>h2[j]||h1[i]>h3[k])i++;
    else if(h2[j]>h1[i]||h2[j]>h3[k])j++;
    else if(h3[k]>h1[i]||h3[k]>h2[j])k++;
}
    cout<<val;
    return 0;
}

