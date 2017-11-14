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
struct coord{
    int x;
    int y;
};

int main(){
    int n;
    int k;
    cin >> n >> k;
    int rq;
    int cq;
    cin >> rq >> cq;
    int diagindex;
    if(n%2==0)diagindex=n/2;
    else diagindex=n/2+1;
    int hr=n-cq;
    int hl=cq-1;
    int vu=n-rq;
    int vd=rq-1;
    int ur=0;
    int posx=rq;
    int posy=cq;
 //   cout<<hl<<vd;
    while(posx<=n&&posy<=n)
    {
        posx++;
        posy++;
        ur++;
    }
    ur--;
    posx=rq;
    posy=cq;
    int dl=0;
    while(posx>=1&&posy>=1)
    {
        posx--;
        posy--;
        dl++;
    }
    dl--;
     posx=rq;
    posy=cq;
    int ul=0;
    
    while(posx<=n&&posy>=1)
    {
        posx++;
        posy--;
        ul++;
    }
    ul--;
    posx=rq;
    posy=cq;
    int dr=0;
    while(posx>=1&&posy<=n)
    {
        posx--;
        posy++;
        dr++;
    }
    dr--;
    int moves=hr+hl+vu+vd+ur+ul+dr+dl;
    
//cout<<moves<<endl;
//cout<<ur;
     int x,y;
    int minhr=n,minhl=n,minvu=n,minvd=n;
    int diffx,diffy;
    int minur=n,minul=n,mindr=n,mindl=n;
    for(int a0 = 0; a0 < k; a0++){
        
        cin >> x >> y;
        diffx=x-rq;
        diffy=y-cq;
     // cout<<diffx<<"and"<<diffy;
        if(diffx==0&&diffy>0&&diffy<minhr)
        {
            minhr=diffy;
            moves=moves-hr+diffy-1;
            hr=diffy-1;
        }
        else if(diffx==0&&diffy<0&&abs(diffy)<minhl)
        {
           minhl=abs(diffy);
            moves=moves-hl+abs(diffy)-1;
             hl=abs(diffy)-1;
            
        }
        else if(diffy==0&&diffx>0&&diffx<minvd)
        {
            minvd=diffx;
            moves=moves-vu+diffx-1;
            vu=diffx-1;
            
        }
        else if(diffy==0&&diffx<0&&abs(diffx)<minvu)
        {
           
           // cout<<"entering";
            minvu=abs(diffx);
            moves=moves-vd+abs(diffx)-1;
         vd=abs(diffx)-1;}
        else if(abs(diffx)==abs(diffy))
        {
            if(diffx>0&&diffy>0&&diffx<minur)
            {
               minur=diffx;
                moves=moves-ur+diffx-1;
                 ur=diffx-1;
            }
            else if(diffx>0&&diffy<0&&diffx<minul)
            {
               minul=diffx;
                moves=moves-ul+diffx-1;
                 ul=diffx-1;
            }
            else if(diffx<0&&diffy<0&&abs(diffy)<mindl)
            {
                mindl=abs(diffy);
                moves=moves-dl+abs(diffx)-1;
                dl=abs(diffx)-1;
            }
            else if(diffx<0 && diffy>0&& diffy<mindr)
            {
                mindr=diffy;
                moves=moves-dr+diffy-1;
                dr=diffy-1;
            }
            
        }
     //   cout<<moves<<endl;
        
            
        
    }
    cout<<moves;
   // int move=minhr-cq-1+cq-maxhl-1+minvu-rq-1+rq-maxvd-1+minur-1+minul-1+mindr-1+mindl-1;
  //  cout<<" "<<move;
    return 0;
}

