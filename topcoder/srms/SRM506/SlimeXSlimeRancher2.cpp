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



class SlimeXSlimeRancher2 {
	public:
	int train(vector <int> attributes) {
            int maxx=0;		
            EACH(i,attributes)
	    {
		if(maxx<attributes[i])
                   maxx=attributes[i];
	    }
            int sum=0;
            EACH(i,attributes)
              sum=sum+(maxx-attributes[i]);

             return sum;
	}
};
