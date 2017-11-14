#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    string str;
     if(x1>x2&&v1>v2)return "NO";
    else if(x1<x2&&v1<v2)return "NO";
    else {
      //  cout<<"entering else part";
        int i=0;
      int  posx1=0;
        int posx2=0;
        
        while(1)
        {
            posx1=x1+(i*v1);
            posx2=x2+(i*v2);
          //  cout<<posx1<<" "<<posx2<<endl;
            if(posx1==posx2){
                str="YES";
                break;
                
            }
            i++;
            //forgot to handle the edge case where speeds are equal but positions are different in those cases also
            //there is no way of catching up
            if(posx1>posx2&&v1>=v2)
            {
                str="NO";
                break;
            }
            else if(posx2>posx1&&v2>=v1)
            {
                str="NO";
                break;
            }
            
        }
    }
    return str;
    // Complete this function
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
   
    return 0;
}

