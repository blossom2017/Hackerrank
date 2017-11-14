#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
  int  numx=0;
    
 int  maxa= *std::max_element(a.begin(),a.end());
   int  minb=*std::min_element(b.begin(),b.end());
    int x=maxa;
    while(x<=minb)
    {
        int flag=1;
        for(int i=0;i<a.size();i++)
        {
            if(x%a[i]!=0){
                flag=0;
                break;
            }
        }
        int flag2=1;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]%x!=0)
            {
                flag2=0;
                break;
            }
        }
        if(flag==1&&flag2==1)
        {
            numx++;
            //break;
        }
        x++;
    }
   
    return numx;
    // Complete this function
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

