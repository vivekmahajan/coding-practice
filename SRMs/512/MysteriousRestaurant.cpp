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

class MysteriousRestaurant
        {
        public:
        int maxDays(vector <string> prices, int budget)
            {
		int nDishes=prices[0].length();
		int nDays=prices.size();
//		cout<<nDays<<endl;
		int minii=min(nDays,7);
		for(int i=0;i<nDays;i++)
		{
			int budget_current=0;
			for(int k=0;k<minii;k++)
			{
				int mini=budget;
				for(int j=1;j<=nDishes;j++)
				{
					int current=0;
					int days=k;
					while(days<=i)
					{
						current=current+mapp(days,j,prices);
			//			cout<<"current "<<current<<endl;
						days=days+7;
					}
					if(current<mini)
					{
						mini=current;
					}
				}
				budget_current=budget_current+mini;	

			}
		//	cout<<budget<<" "<<budget_current<<endl;
			if(budget_current>budget)
				return i;
		}
            }
	    int mapp(int k,int j,vector <string> prices)
	   {
		if(prices[k][j]>='0'&&prices[k][j]<='9')
		  return prices[k][j]-'0';
		if(prices[k][j]>='a'&&prices[k][j]<='z')
			return prices[k][j]-'a'+10;
		if(prices[k][j]>='A'&&prices[k][j]<='Z')
			return prices[k][j]-'A'+36;
	   }
        
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"26", "14", "72", "39", "32", "85", "06"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 13; int Arg2 = 5; verify_case(0, Arg2, maxDays(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"26", "14", "72", "39", "32", "85", "06", "91"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 20; int Arg2 = 8; verify_case(1, Arg2, maxDays(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"SRM", "512"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; int Arg2 = 0; verify_case(2, Arg2, maxDays(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"Dear", "Code", "rsHa", "veFu", "nInT", "heCh", "alle", "ngeP", "hase", "andb", "ecar", "eful"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 256; int Arg2 = 10; verify_case(3, Arg2, maxDays(Arg0, Arg1)); }

// END CUT HERE

        };

    // BEGIN CUT HERE
    int main()
        {
        MysteriousRestaurant ___test;
        ___test.run_test(-1);
        system("pause");
        }
    // END CUT HERE 
