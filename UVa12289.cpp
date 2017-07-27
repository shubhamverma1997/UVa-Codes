//ONe-Two-Three
#include<iostream>
using namespace std;
int main()
{
	int t;
	char w[7];
	scanf("%d",&t);
	while(t)
	{
		w[5]='.';
		scanf("%s",w);
		if(w[5]=='\0')
		{
			printf("3\n");
		}
		else
		{
			if( (w[0]=='o' && w[1]=='n') || (w[0]=='o' && w[2]=='e') || (w[2]=='e' && w[1]=='n'))
				printf("1\n");
			if( (w[0]=='t' && w[1]=='w') || (w[0]=='t' && w[2]=='o') || (w[2]=='o' && w[1]=='w'))
				printf("2\n");
		}
		t--;
	}
}