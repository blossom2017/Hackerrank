#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    int x,round,num,diff;
    for (int i=0;i<grades.size();i++)
    {
        if(grades[i]>=38)
        {
            x=grades[i]%10;
            if(x>5){round=10-x;
                    num=grades[i]+round;
                    diff=num-grades[i];
                    if(diff<3)grades[i]=num;
            
        }
            else if(x<5){
                round=5-x;
                num=grades[i]+round;
                diff=num-grades[i];
                if(diff<3)grades[i]=num;
            }
    }
        
}return grades;}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}

