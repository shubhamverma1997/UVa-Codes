//Love Calculator
#include<iostream>
using namespace std;

int input()
{
	int sum=0;
	char c;
	c=getchar();

	if(c==EOF)
	{
		return -1;
	}

	while(c!='\n')
	{

		if(c>='a' && c<='z')
			sum+=(c-'a'+1);
		if(c>='A' && c<='Z')
			sum+=(c-'A'+1);

		c=getchar();
	}
	return sum;
}


int main()
{
	int a,b,s;
	double ans;

	cout.precision(4);
	while(1)
	{

		a=input();
		if(a==-1)
			break;
		b=input();
		
		while(a>=10)
		{
			s=0;
			while(a>0)
			{
				s+=a%10;
				a=a/10;
			}
			a=s;
		}

		while(b>=10)
		{
			s=0;
			while(b>0)
			{
				s+=b%10;
				b=b/10;
			}
			b=s;
		}

		if(a>b)
		{
			ans=((double)(b)/(double)(a))*100;
			if((b*100)%a!=0)
				cout<<ans<<" %\n";
			else
				cout<<ans<<".00 %\n";
		}
		else
		{
			ans=((double)(a)/(double)(b))*100;
			if((a*100)%b!=0)
				cout<<ans<<" %\n";
			else
				cout<<ans<<".00 %\n";
		}
	}
}