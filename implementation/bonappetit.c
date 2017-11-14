#include <bits/stdc++.h>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int  sum=0;
    for(int i=0;i<ar.size();i++)
    {
        if(i!=k)
        {
            sum+=ar[i];
        }
    }
    
        return b-sum/2;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    int sum=0;
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
        if(ar_i!=k)sum+=ar[ar_i];
    }
   
    int b;
    cin >> b;
   // cout<<b-sum/2;
     if(b-sum/2==0)cout<<"Bon Appetit";
    else{
    
    int result = bonAppetit(n, k, b, ar);
    cout << result << endl;}
    return 0;
}

