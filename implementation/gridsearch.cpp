#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        int startr=0;
        int endr=r-1;
        int startc=0;
        int endc=c-1;
        int flag=-1;
      while(endr<R&&endc<C)
      {
         
          while(endr<R&&endc<C)
          {
              if(G[startr][startc]!=P[0][0]||G[startr][endc]!=P[0][c-1]||G[endr][startc]!=P[r-1][0]||G[endr][endc]!=P[r-1][c-1])
              {
             //    cout<<G[startr][startc]<<" "<<P[0][0]<<" ";
                //  cout<<startc<<endc<<" ";
                //  cout<<startr<<endr<<" ";
                  startc++;
              endc++;
                  continue;
              }
              else{
               //   cout<<"entering else";
                 // cout<<"";
                   flag=0;
                  for(int i=0;i<r;i++)
                  {
                      for(int j=0;j<c;j++)
                      {
                        //  cout<<P[i][j]<<" "<<G[startr+i][startc+j];
                          if(P[i][j]!=G[startr+i][startc+j]){
                              flag=1;
                              break;
                          }
                           
                      }if(flag==1)break;
                     
                  }
              }
              if(flag==0)break;
              
              startc++;
              endc++;
          }
           if(flag==0)break;
           startc=0;
          endc=c-1;
        //  cout<<endl;
          startr++;
          endr++;
      }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}

