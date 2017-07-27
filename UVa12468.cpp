//Zapping
#include<iostream>
using namespace std;
int main()
{
	int a,b,s1,s2;
	while(1)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if(a==-1 && b==-1)
			break;
		s1=(a-b);
		if(s1<0)
			s1=-s1;
		s2=100-s1;
		if(s1<s2)
			printf("%d\n",s1);
		else
			printf("%d\n",s2);
	}
}