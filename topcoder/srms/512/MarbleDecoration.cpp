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

class MarbleDecoration
        {
        public:
        int maxLength(int R, int G, int B)
            {
		int temp=max(R,G);
		int max1=max(temp,B);
		int temp1=min(R,G);
		int min1=min(temp1,B);
		int second=R+G+B-min1-max1;
		if(max1==0)
			return 0;
		if(second==0)
			return 1;
		if(second==max1)
			return 2*max1;
		return 2*second+1;
            }
       int max(int a,int b)
	{
		if(a>b)
			return a;
		else
			return b;
	} 
	int min(int a,int b)
	{
		if(a<b)
			return a;
		else
			return b;
	}
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 0; int Arg1 = 0; int Arg2 = 0; int Arg3 = 0; verify_case(0, Arg3, maxLength(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 0; int Arg2 = 0; int Arg3 = 1; verify_case(1, Arg3, maxLength(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 5; int Arg1 = 1; int Arg2 = 2; int Arg3 = 5; verify_case(2, Arg3, maxLength(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 7; int Arg1 = 7; int Arg2 = 4; int Arg3 = 14; verify_case(3, Arg3, maxLength(Arg0, Arg1, Arg2)); }
	void test_case_4() { int Arg0 = 2; int Arg1 = 3; int Arg2 = 5; int Arg3 = 7; verify_case(4, Arg3, maxLength(Arg0, Arg1, Arg2)); }
	void test_case_5() { int Arg0 = 13; int Arg1 = 13; int Arg2 = 13; int Arg3 = 26; verify_case(5, Arg3, maxLength(Arg0, Arg1, Arg2)); }

// END CUT HERE

        };

    // BEGIN CUT HERE
    int main()
        {
        MarbleDecoration ___test;
        ___test.run_test(-1);
        system("pause");
        }
    // END CUT HERE 
