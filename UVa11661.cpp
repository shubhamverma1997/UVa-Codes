//Burger Time?
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char c;
	long long int l,mini,flag,count,temp;
	//0 no state
	//1 r
	//2 d
	//3 z
	while(1)
	{
		count=0;
		scanf("%lld",&l);
		if(l==0)
			break;
		getchar();
		mini=10000000000000000;
		temp=0;
		flag=0;
		for(register long long int i=0;i<l;i++)
		{	
			//cout<<count<<" ";
			c=getchar();
			if(c=='.'&&flag!=0)
			{
				count++;
				continue;
			}
			if(c=='R' && flag==0)
			{
				count=0;
				flag=1;
				continue;
			}
			if(c=='D' && flag==0)
			{
				count=0;
				flag=2;
				continue;
			}
			if(c=='D' && flag==1)
			{
				count++;
				mini=min(mini,count);
				count=0;
				flag=2;
				continue;
			}
			if(c=='R' && flag==2)
			{
				count++;
				mini=min(mini,count);
				count=0;
				flag=1;
				continue;
			}
			if(c=='D' && flag==2)
			{
				count=0;
				continue;
			}
			if(c=='R' && flag==1)
			{
				count=0;
				continue;
			}
			if(c=='Z')
				mini=0;
				continue;
		}
		//cout<<endl;
		printf("%lld\n",mini);

	}
}