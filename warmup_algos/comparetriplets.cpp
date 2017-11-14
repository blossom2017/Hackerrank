#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int scorea=0,scoreb=0;
   if( a0>b0){scorea++;}else if(b0>a0)scoreb++;
    if( a1>b1){scorea++;}else if(b1>a1)scoreb++;
    if( a2>b2){scorea++;}else if(b2>a2)scoreb++;
   vector <int> v;
    v.push_back(scorea);
    v.push_back(scoreb);
    return v;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}

