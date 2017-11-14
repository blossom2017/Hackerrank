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
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > M(n,vector<int>(n));
        for(int M_i = 0;M_i < n;M_i++){
           for(int M_j = 0;M_j < n;M_j++){
              cin >> M[M_i][M_j];
           }
        }
        vector<int> sumrv;
        vector<int> sumcv;
        int i=0;
        int sum=0;
        int flag=1;
        for(int i=0;i<n;i++)
        {
            int sumr=0;
            int sumc=0;
            for(int j=0;j<n;j++)
            {
               
                
                sumr+=M[i][j];
                sumc+=M[j][i];
            }
           sumrv.push_back(sumr);
            sumcv.push_back(sumc);
            
           
        }
        std::sort(sumrv.begin(),sumrv.end());
        std::sort(sumcv.begin(),sumcv.end());
        for(i=0;i<n;i++)
        {
           // cout<<sumcv[i]<<sumrv[i];
            if(sumcv[i] !=sumrv[i] )
            {
                flag=0;
                break;
            }
        }
        
        /*
        for(i=0;i<n;i++)
        {
            sum+=M[i][0];
        }
        int flag=1;
        for(i=1;i<n;i++)
        {
         int   sumc=0;
            for(int j=0;j<n;j++)
            {
                sumc+=M[j][i];
            }
           // cout<<sumc<<" ";
            if(sumc!=sum)
            {
                flag=0;
                break;
            }
        }*/
        if(flag==1)cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
        // your code goes here
    }
    return 0;
}

