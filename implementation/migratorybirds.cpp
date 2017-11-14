#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
vector<int > count(6);
    for(int i=0;i<count.size();i++)
        count[i]=0;
    for(int i=0;i<ar.size();i++)
    {
        count[ar[i]]++;
    }
    int max=0;
    int index=1;
    for(int i=1;i<count.size();i++)
    {
        if(count[i]>max){max=count[i];index=i;}
    }
    return index;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

