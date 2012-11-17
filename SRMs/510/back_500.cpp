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

//int arr[4748][4748];

class TheLuckyGameDivTwo {
	public:
	int find(int a, int b, int jLen, int bLen) {
/*		for(int i=1;i<4748;i++)
		{
			for(int j=1;j<4748;j++)
				arr[i][j]=-1;
		}
*/		int big=0;
		for(int i=a;i<=(b-jLen+1);i++)
		{
			
			int current=check(i,i+jLen-1,bLen);
			if(current>big)
				big=current;
		}
		return big;
	}
	
	int check(int a,int b, int bLen)
	{
		int small=4747;
		for(int i=a;i<=(b-bLen+1);i++)
		{
/*			if(arr[i][i+bLen-1]!=-1)
			{
				if(small>arr[i][i+bLen-1])
					small=arr[i][i+bLen-1];
			}else
			{
				arr[i][i+bLen-1]=numLuck(i,i+bLen-1);
				if(small>arr[i][i+bLen-1])
					small=arr[i][i+bLen-1];
				
			}
*/
			int num=numLuck(i,i+bLen-1);
			if(small>num)
				small=num;


		}
		return small;
	}
	int numLuck(int a,int b)
	{
		int count=0;
		for(int i=a;i<=b;i++)
		{
			int number=i;
			int flag=1;
			while(number)
			{
				int rem=number%10;
				number=number/10;
				if(rem!=4&&rem!=7)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				count++;
			}
		}
		return count;
	}
};
