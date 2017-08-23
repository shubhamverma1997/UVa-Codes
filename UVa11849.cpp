//CD
#include <iostream>
#include <set>
using namespace std;
int main()
{
	long long int n,m,num,count;
	while(1)
	{
		count=0;
		set<long long int> a,b;
		scanf("%lld",&n);
		scanf("%lld",&m);
		if(n==0 && m==0)
			break;
		for(register long long int i=0;i<n;i++)
		{
			scanf("%lld",&num);
			a.insert(num);
		}
		for(register long long int i=0;i<m;i++)
		{
			scanf("%lld",&num);
			if(a.find(num)!=a.end())
				count++;
		}
		printf("%lld\n",count);
	}
}