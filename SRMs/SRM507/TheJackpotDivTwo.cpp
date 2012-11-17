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



class TheJackpotDivTwo {
	public:
	vector <int> find(vector <int> money, int jackpot) {

	for(int i=jackpot;i>0;i--)
	{
		int min=0;
		
		for(int j=0;j<money.size();j++)
		{
			if(money[j]<money[min])
			{
				min=j;
			}
		}
		money[min]++;
		
	}
	sort(money.begin(),money.end());
		return money;
	}
};
