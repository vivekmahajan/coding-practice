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



class CubeAnts {
	public:
	int getMinimumSteps(vector <int> pos) {
		int arr[8]={0,1,2,1,1,2,3,2};
		int max=0;
		EACH(i,pos)
		{
			if(arr[pos[i]]>max)
			{
				max=arr[pos[i]];
			}
		}
		return max;
	}
};
