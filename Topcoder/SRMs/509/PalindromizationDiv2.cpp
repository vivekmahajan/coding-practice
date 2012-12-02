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



class PalindromizationDiv2 {
	public:
	int getMinimumCost(int X) 
	{
		lint number;
		for(lint i=0;1;i++)
		{
			number=X+i;
			if(check(number))
			{
				return i;
			}
			number=X-i;
			if(check(number))
			{
				return i;
			}	
		}
		
		
	}
	int check(lint number)
	{
		lint old=number;
		lint rev_num=0;
		while(number!=0)
		{
			int rem=number%10;
			rev_num=rev_num*10+rem;
			number=number/10;
		}
		if(rev_num==old)
		{
			return 1;
		}else
		{
			return 0;
		}
	}
};
