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



class TheAlmostLuckyNumbersDivTwo {
	public:
	int find(int a, int b) {
		int big=0;
		for(int i=a;i<=b;i++)
		{
			int count=0;
			lint number=i;
			while(number)
			{
				int rem=number%10;
				if(rem!=4&&rem!=7)
					count++;	
				number=number/10;
			}
			if(count<=1)
			{
				big++;
			}
		}
		return big;
		
	}
};
