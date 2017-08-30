//Babelfish
#include <iostream>
#include <map>
#include <string>
using namespace std;
string a,b;
char w[11];
int input()
{
	int i=0;
	char c=getchar();

	while(c!=' ')
	{
		if(c=='\n')
			return -1;
		w[i]=c;
		i++;
		c=getchar();
	}
	w[i]='\0';
	a=w;

	i=0;
	c=getchar();
	while(c!='\n')
	{
		w[i]=c;
		i++;
		c=getchar();
	}
	w[i]='\0';
	b=w;
	return 1;
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	map<string , string> m;
	while(1)
	{
		if(input()==-1)
			break;
		m[b]=a;
	}
	while(1)
	{
		getline(cin,a);
		if(a.length()>0)
		{
			if(m[a].length()!=0)
			{
				cout<<m[a]<<"\n";
			}
			else
			{
				cout<<"eh\n";
			}
		}
		else
		{
			break;
		}
	}
}