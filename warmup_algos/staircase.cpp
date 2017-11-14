#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 void printspace(int i )
 {
     //cout<<"entering";
     for (int j=1;j<=i;j++)
        {
            cout<<" ";
        }
 }
void printhash(int i)
{
    for (int j=1;j<=i;j++)
        {
            cout<<"#";
        }
}

int main(){
    int n;
    cin >> n;
    //cout<<n;
    for (int i=n-1;i>=0;i--)
    {
        printspace(i);
        printhash(n-i);
        cout<<endl;
        
    }
    return 0;
}


