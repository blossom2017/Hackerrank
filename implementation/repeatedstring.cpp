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
    string s;
    cin >> s;
    long n;
    cin >> n;
    int size=s.length();
    long int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')count++;
    }
    //just because of this bracket(n/size)
    long int step=n/size;
   if(size<n) 
   {count=count*step;
    for(int i=0;i<n%size;i++)
    {
        if(s[i]=='a')count++;
    }}
    else{
        count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')count++;
        }
    }
   
    cout<<count;
    return 0;
}

