//The Snail
#include<iostream>
using namespace std;
int main()
{
	int h,u,d,f,i,flag;
	float a,curh;
	while(1)
	{
		flag=2;
		curh=0;
		scanf("%d",&h);
		scanf("%d",&u);
		scanf("%d",&d);
		scanf("%d",&f);
		if(h==0)
			break;
		a=u;
		for(i=1;;i++)
		{
			//cout<<curh<<"|"<<a<<" ";
			curh+=a;
			a=(float)(u)*(100-(float)(f*i))/100;
			if(a<=0)
				a=0;
			if(curh>float(h))
			{
				flag=1;
				break;
			}
			curh-=d;
			if(curh<0)
			{
				flag=0;
				break;
			}

		}
		if(flag==1)
			printf("success on day %d\n",i);
		else
			printf("failure on day %d\n",i);
	}
}