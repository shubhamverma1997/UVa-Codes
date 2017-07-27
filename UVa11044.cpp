//Searching for Nessy
#include<iostream>
using namespace std;
int main()
{
	int t,n,m,a,b;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d",&n);
		scanf("%d",&m);
		if(n>3) n-=2;
		if(m>3) m-=2;
		if(n%3==0)
			a=n/3;
		else
			a=n/3+1;
		if(m%3==0)
			b=m/3;
		else
			b=m/3+1;
		printf("%d\n",a*b);
		t--;
	}
}