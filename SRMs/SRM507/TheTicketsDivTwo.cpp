#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class TheTicketsDivTwo
{
	public:
	double prob[11][11][11];
	double find(int n, int m, int o)
	{
		if(m-1>o)
		return 0.0;
	//	if(n==4&&m==2&&o==10)
	//	return 0.25264033564814814;
		memset(prob,-1,sizeof(prob));
/*		for( int i=1;i<=10;i++)
		{
			prob[i][1][1]=(1.0/6.0);
			//cout<<prob[i][1][1]<<endl;
			prob[i][2][1]=(5.0/6.0);
			for(int j=3;j<=10;j++)
			{
				prob[i][j][1]=0.0;
			}
		}
		for(int j=1;j<=10;j++)
		{
			for(int k=1;k<=10;k++)
			{
				prob[1][j][k]=1.0;
			}
		}
		
*/		
		prob[n][m][o]=recur(n,m,o);
/*		for(int i=2;i<=10;i++)
		{
			for(int j=1;j<=10;j++)
			{
				for(int k=1;k<=10;k++)
				{
					if(k==1) continue;
					if(j==1)
					{
					 prob[i][j][k]=(1.0/6.0)+0.5*prob[i][i][k-1];
						cout<<prob[i][i][k-1];
					}
					else prob[i][j][k]=(0.50)*prob[i][j-1][k-1]+(1.0/3.0)*prob[i-1][j-1][k-1];
					
				}
			}
		}
*/		//cout<<prob[n][m][o];
		return prob[n][m][o];
		
	}
	double recur(int n,int m,int o)
	{
		if(prob[n][m][o]>=0)
			return prob[n][m][o];
		if(n==1)
			return (prob[n][m][o]=1.0);
		if(o==1&&m==1)
			return (prob[n][m][o]=(1.0/6.0));
		if(o==1&&m==2)
			return (prob[n][m][o]=5.0/6.0);
		if(m>=3&&o==1)
			return (prob[n][m][o]=0.0);
		if(m==1)
			return (prob[n][m][o]=(1.0/6.0)+0.5*recur(n,n,o-1));
		else 
			return(prob[n][m][o]=(0.5*recur(n,m-1,o-1)+(1.0/3.0)*recur(n-1,m-1,o-1)));
	}
};
