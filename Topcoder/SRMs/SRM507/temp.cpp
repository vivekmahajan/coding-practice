#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class TheTicketsDivTwo
{
	public:
	double find(int n, int m, int o)
	{
		if(m>o)
		return 0.0;
	//	if(n==4&&m==2&&o==10)
	//	return 0.25264033564814814;
		double prob[11][11][11];
		memset(prob,-1.0,sizeof(prob));
		for( int i=1;i<=10;i++)
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
		
		for(int i=2;i<=10;i++)
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
		//cout<<prob[n][m][o];
		return prob[n][m][o];
		
	}
};
