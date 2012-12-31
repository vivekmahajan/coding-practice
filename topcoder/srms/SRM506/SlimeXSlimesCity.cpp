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



class SlimeXSlimesCity {
	public:
	int merge(vector <int> population) {
	
		sort(population.begin(),population.end());
                int siz=population.size();
   	        int number=1;
		for(int i=0;i<(siz-1);i++)
		{
			lint sum=0;
			for(int j=0;j<(siz-i-1);j++)
			{
				sum=sum+population[j];
			}	
			if(sum>=population[siz-i-1])
			{
				number=number+1;
			}else
			{ 		
				break;
			}
			
		}	

		return number;
	}
};
