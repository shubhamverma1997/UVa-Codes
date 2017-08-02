//A Change in Thermal Unit
#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
double answer(int d)
{
	double a;
	a=d-32;
	a=a*5;
	a=a/9.0;
	
	return a;
}
int main()
{
	int t,temp=1,c,d;
	double ans;
	cout.precision(4);
	scanf("%d",&t);
	while(t)
	{
		
		scanf("%d",&c);
		scanf("%d",&d);

		printf("Case %d: ",temp);
		ans=(double)(c)+answer(d)+(32.0*5)/9.0;
		
		cout<<setprecision(2)<<fixed<<ans<<"\n";
		
		temp++;
		t--;
	}
}