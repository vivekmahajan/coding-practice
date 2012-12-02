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


int main()
{
}
class SlimeXResidentSlime {
	public:
	int exterminate(vector <string> field) {
		int col=field[0].size();
		int row=field.size();
		int locx,locy;
		EACH(i,field)
		{
			REP(j,col)
			{
				if(field[i][j]=='$')
				{
					locx=i;
					locy=j;
					break;
				}
			}
			//loc=find(field[i].begin(),field[i].end(),'$');
		}
		//Breadth first search
		int dist[field.size()][col];
		memset(dist,0,field.size()*col);
		int flag[9];
		memset(flag,0,9);
		int curx=locx;
		int cury=locy;
		while()
		{
			if(limi(curx+1,cury+1))
			{
			}
			if(limi(curx+1,cury-1))
			{
			}
			if(limi(curx-1,cury+1))
			{
			}
			if(limi(curx-1,cury-1))
			{
			}
		}
		
	}
};
