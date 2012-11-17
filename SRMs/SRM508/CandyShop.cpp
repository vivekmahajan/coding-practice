#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>

#include<iostream> 
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define EACH(i,x) REP(i,(x).size())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
 
typedef long long int lint;
typedef unsigned long long int ull;
typedef pair<int,int> pi;
typedef vector<pi> vp;
typedef vector<int> vi;
typedef vector<string> vs;



class CandyShop {
	
	int CountArr[201][201],tempCountArr[201][201];
	public:
	int countProbablePlaces(vector <int> X, vector <int> Y, vector <int> R) {
		
		memset(CountArr,0,sizeof(CountArr));
		memset(tempCountArr,0,sizeof(tempCountArr));
		EACH(i,X)
		{
			X[i]=X[i]+200;
			Y[i]=Y[i]+100;
		}
		EACH(i,X)
		{
		//	CountArr[X[i]][Y[i]]+=1;
			


			walk(X[i],Y[i],R[i]);	
		
			for(int i=100;i<106;i++)
			{	for(int j=95;j<105;j++)
				{
					cout<<tempCountArr[i][j]<<" ";
				}	
			cout<<endl;
			}
			cout<<"*****************************"<<endl;
			for(int i=0;i<201;i++)
			{
				for(int j=0;j<201;j++)
				{
					CountArr[i][j]+=tempCountArr[i][j];
					tempCountArr[i][j]=0;
				}
			}
		}
			cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
			for(int i=100;i<106;i++)
			{	for(int j=95;j<105;j++)
				{
					cout<<CountArr[i][j]<<" ";
				}	
			cout<<endl;
			}
		int len=X.size();
		cout<<len;
		int result=0;
		for(int i=0;i<201;i++)
		{
			for(int j=0;j<201;j++)
			{
				if(CountArr[i][j]==len)
					result++;
			}
		}
		return result;
	}
	void walk(int x,int y,int r)
	{
		if(r<0)
			return;
		if(tempCountArr[x][y]==0)
			tempCountArr[x][y]=1;
		else 
			return;
		walk(x-1,y,r-1);
		walk(x,y-1,r-1);	
		walk(x+1,y,r-1);
		walk(x,y+1,r-1);
		
	}
};
