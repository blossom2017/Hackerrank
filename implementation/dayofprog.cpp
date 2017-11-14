#include <bits/stdc++.h>

using namespace std;
//look at the question details properly 
string solve(int year){
    // Complete this function
    if(year>=1919 )
    {
        if(year%4==0&&year%100!=0||year%400==0)return "12.09."+std::to_string(year);
        else return "13.09."+std::to_string(year);
    }
    else if(year<=1917)
    {
        if(year%4==0)return "12.09."+std::to_string(year);
        else return "13.09."+std::to_string(year);
    }
        
   
    else if(year==1918){
        if(year%4==0){
            int d=12+13;
            return std::to_string(d)+".09."+std::to_string(year);
            
        }
        else return "26.09."+std::to_string(year);
    }
    return "N>A";
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}

