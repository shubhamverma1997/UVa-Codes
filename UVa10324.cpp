//Zeroes and Ones
#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000006];
int main()
{
	
	char c;
	long long int i,n,a,b,temp=1;
	
	while(1)
	{
		int flag=1;
	for(i=0;;i++)
	{
		c=getchar();
		if(c=='\n')
			{
				break;
			}
		if(c==EOF)
		{
			flag=0;
			break;
		}

			arr[i]=c-'0';
	}

	if(i==0||flag==0)
		break;

	scanf("%lld",&n);
	long long int sum=0;
	printf("Case %lld:\n",temp);
	for(register long long int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		scanf("%lld",&b);
		int t=arr[min(a,b)],tflag=1;
		for(register long long int j=min(a,b);j<=max(a,b);j++)
		{
			if(t==arr[j])
				continue;
			else
			{
				tflag=0;
				break;
			}
		}
		
		if(tflag==1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	getchar();
	temp++;
	}
	
}