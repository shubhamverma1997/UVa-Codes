//Magic square palindromes
#include<iostream>
#include<cmath>
using namespace std;
char str[10004];
char matrix[100][100];
long long int input()
{
	long long int i=0;
	char c;
	c=getchar();
	while(c!='\n')
	{
		if(c>='a'&&c<='z')
		{
			str[i]=c;
			i++;
		}
		else if(c>='A'&&c<='Z')
		{
			str[i]=char(c+32);
			i++;
		}
		c=getchar();
	}
	return i;
}
int main()
{
	long long int n,size,flag,t=1,counter;
	scanf("%lld",&n);
	getchar();
	while(n)
	{
		counter=0;
		size=input();

		//for(register long long int i=0;i<size;i++)
		//	cout<<str[i];
		//cout<<endl;

		int oflag=1;
		printf("Case #%lld:\n",t);
		long long int tsize=sqrt(size);

		if((tsize*tsize)==size)
		{
			for(register long long int i=0;i<tsize;i++)
			{
				for(register long long int j=0;j<tsize;j++)
				{
					matrix[i][j]=str[counter];
					counter++;
				}	
			}
				
			counter=0;
			for(register long long int i=0;i<tsize;i++)
			{
				for(register long long int j=0;j<tsize;j++)
				{
					if(matrix[i][j]==str[counter] && matrix[j][i]==str[counter]
					   && matrix[tsize-1-j][tsize-i-1]==str[counter]
					   && matrix[tsize-1-i][tsize-1-j]==str[counter])
					{
						counter++;
						continue;
					}	
					else
					{
						oflag=0;
						break;
					}
					
				}	
			}
			if(oflag==0)
				cout<<"No magic :(\n";
			else
				printf("%lld\n",tsize);		
		}
		else
		{
			cout<<"No magic :(\n";
		}

		t++;
		n--;
	}
}