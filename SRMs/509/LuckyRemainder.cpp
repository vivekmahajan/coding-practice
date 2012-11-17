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



class LuckyRemainder {
	public:
	int getLuckyRemainder(string X) {
		
		int length=X.size();
		if(length==1)
		{
			int lucky=atoi(&X[0]);
			return lucky%9;
		}
		//calculating the number of occurences of integers	
		lint sum=2;
	/*	for(int i=length-1;i>1;i--)
		{
			sum=sum+(choose(length,i)-choose(length-1,i));
		}*/
		sum=1;
		for(int i=1;i<length;i++)
		{	
			sum=sum*2;
		}
		cout<<"sum = "<<sum;
		lint final=0;
		for(int i=0;i<length;i++)
		{
			//cout<<endl<<"atoi"<<atoi(&X[i]);
			
			final=final+sum*(X[i]-'0');
		}
		cout<<"final="<<final;
//		return final%9;
		//summing the numbers
		while(1)
		{	
			lint number=final;
			lint SumDigit=0;
			while(number)
			{
				int rem=number%10;
				number=number/10;
				SumDigit=SumDigit+rem;	
			}
			if(SumDigit%10==SumDigit)
			{
				if(SumDigit==9)
				{
					return 0;
				}else
				{	
					return SumDigit;
				}
			}
			final=SumDigit;
		
		}
	}
		
	lint choose(int x,int y)
	{
		lint nume=1;
		lint deno=1;
		for(int i=1;i<=y;i++)
		{
			nume=nume*x;
			x--;
		}
		for(int i=y;i>1;i--)
		{
			deno=deno*i;
		}
	//	cout<<(nume/deno);
		return (nume/deno);
	}
};
