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



class CubeStickers {
	public:
	string isPossible(vector <string> sticker) {

		sort(sticker.begin(),sticker.end());	
		int siz=sticker.size();
		if( siz<6)
			return "NO";

		vector <int> arr(0);
		for(int i=0;i<siz;i++)
		{
			arr.push_back(0);
		}
		int count=0;
		arr[count]=1;
		for(int i=1;i<siz;i++)
		{
			if(sticker[i-1].compare(sticker[i])==0)
			{
				arr[count]++;
			}else
			{
				count++;
				arr[count]++;
			}
		}
		if((count+1)<3)
			return "NO";

		int sum=0;
		for(int i=0;i<=count;i++)
		{
			if(arr[i]>=3)
				arr[i]=2;
	
			sum=sum+arr[i];
		}
		if (sum>=6)
			return "YES";
		else
			return "NO";
	}
};
