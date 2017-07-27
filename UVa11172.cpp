//Relational Operator
#include<iostream>
using namespace std;
int main()
{
	long long int t,n,m;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld",&n);
		scanf("%lld",&m);
		if(n>m)
			printf(">\n");
		else if(n<m)
			printf("<\n");
		else
			printf("=\n");
		
		t--;
	}
}