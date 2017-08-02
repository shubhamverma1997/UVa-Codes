//Jingle Composing
#include<iostream>
using namespace std;
char str[210];

int input()
{
	int i=0;
	char c;
	c=getchar();
	while(c!='\n')
	{
		if(c=='*')
			return -1;
		str[i]=c;
		i++;
		c=getchar();
	}
	return i;
}
double value(char c)
{
	if(c=='W')
		return 1;
	else if(c=='H')
		return 1.0/2;
	else if(c=='Q')
		return 1.0/4;
	else if(c=='E')
		return 1.0/8;
	else if(c=='S')
		return 1.0/16;
	else if(c=='T')
		return 1.0/32;
	else if(c=='X')
		return 1.0/64;
}

int main()
{
	int size,i,count;
	double temp;

	while(1)
	{
		count=0;
		i=1;
		size=input();
		
		if(size==-1)
			break;
		while(i<size)
		{
			temp=0;
			while(str[i]!='/')
			{
				temp+=value(str[i]);
				i++;
			}
			//cout<<temp<<" "; 
			if(temp==1)
				count++;
			i++;

		}
		//cout<<endl;
		printf("%d\n",count);
	}
}