//A Special "Happy Birthday" Song!!!
#include<iostream>
using namespace std;
int main()
{
	int n;
	char name[102][102];
	char song[16][20]={ "Happy","birthday", "to", "you", "Happy", "birthday", "to", "you", 
					"Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	scanf("%d",&n);
	for(register int i=0;i<n;i++)
	{
		scanf("%s",name[i]);
	}
	int flag=0;
	for(register int i=0,j=0;;i++,j++)
	{
		if(i==n)
			flag=1;
		i=i%n;
		j=j%16;
		printf("%s: %s\n",name[i],song[j]);
		if(flag==1&& j==15)
			break;
	}
}