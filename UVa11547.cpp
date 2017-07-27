//Automatic Answer
//Parking
#include<iostream>
using namespace std;
int main()
{
	long long int t,n;
	scanf("%lld",&t);
	while(t)
	{
		scanf("%lld",&n);
		n*=567;
		n/=9;
		n+=7492;
		n*=235;
		n/=47;
		n-=498;
		if(n<0)
			n=-n;
		n=n/10;
		n=n%10;
		printf("%lld\n",n);
		t--;
	}
}