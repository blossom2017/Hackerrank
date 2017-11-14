#include<vector>
#include<list>
#include<iostream>
#include<cstdio>

using namespace std;
vector<int> v[1000000];
int main()
{
	int n,q,type,x,y;
	cin>>n>>q;
	int lastanswer=0;
	while(q--)
	{
		cin>>type>>x>>y;
		if(type==1)
		{
			v[(x^lastanswer)%n].push_back(y);
		}
		else if(type==2){
			int pos=(lastanswer^x)%n;
			int index=y%((int)v[pos].size());
			lastanswer=v[pos][index];
			cout<<lastanswer<<endl;

		}
	}
	return 0;
}