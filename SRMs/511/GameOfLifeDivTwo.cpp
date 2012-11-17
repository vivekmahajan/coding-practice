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



class GameOfLifeDivTwo {
	public:
	string theSimulation(string init, int T) {
		
		int size=init.size();
		string temp1=init;
		string temp2=init;

		for(int i=0;i<T;i++)
		{
			temp2=temp1;
			for(int j=0;j<size;j++)
			{
				if(j==0)
				{
					int sum=check(temp1[size-1],temp1[j],temp1[j+1]);
					if(sum>=2)
					{
						temp2[j]='1';
						cout<<"asdasdf";
					}else
					{	temp2[j]='0';
						cout<<"asdasdf";
					}
				}else if(j==size-1)
				{
					int sum=check(temp1[j-1],temp1[j],temp1[0]);
					if(sum>=2)
					{
						temp2[j]='1';
						cout<<"asdasdf";
					}else
					{	temp2[j]='0';
						cout<<"asdasdf";
					}
				}else
				{
					int sum=check(temp1[j-1],temp1[j],temp1[j+1]);
					if(sum>=2)
					{
						temp2[j]='1';
						cout<<"asdasdf";
					}else
					{	temp2[j]='0';
						cout<<"asdasdf";
					}
				}
				
			}	
		
			temp1=temp2;
		}
		return temp2;
			
	}
	int check(char a,char b,char c)
	{
		int sum=0;
		if(a=='1')
		{
			sum=sum+1;
		}
		if(b=='1')
		{
			sum=sum+1;
		}
		if(c=='1')
		{
			sum=sum+1;
		}
		return sum;
	}
};
