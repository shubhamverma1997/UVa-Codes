//Anagram checker
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int words[2002][26],in;
char w[2002][100];
int input()
{
	char c;
	int i=0,j;
	
	while(c!='#')
	{
		c=getchar();
		if(c=='#')
		{
			return i;
			break;
		}
		j=0;
		while(c!='\n')
		{
			words[i][c-'A']++;
			w[i][j]=c;
			c=getchar();
			j++;
		}
		w[i][j]='\0';
		i++;
	}
}

int phrase[26];
string sor[21];
int sorindex;
string sstore,m;
char store[100];

int phraseinput()
{
	char c;
	int i=0,j=0;
	c=getchar();
	sor[0]="";

	memset(phrase,0,26*sizeof(int));

	while(c!='\n')
	{
		if(c==' ')
		{
			sor[j]+='\0';
			j++;
			sor[j]="";
		}
		if(c=='#')
		{
			return -1;
		}
		store[i]=c;
		if(c!=' ')
			sor[j]+=c;
		phrase[c-'A']++;
		c=getchar();
		
		i++;
	}
	sorindex=j+1;
	store[i]='\0';
	return 1;
}

int currentsumequals(int sum[26])//compares with phrase
{
	int gflag=0,lflag=0;
	for(int i=0;i<26;i++)
	{
		//cout<<sum[i]<<" "<<phrase[i]<<"|";
		if(sum[i]<phrase[i])
			lflag=1;
		else if(sum[i]>phrase[i])
		{
			gflag=1;
			break;
		}
	}
	
	if(gflag==1)
		return -1;
	if(lflag==1)
		return 0; 
	return 1;
}

vector<string>::iterator it;
void answer(int sum[26],int index,string ans)
{
	
	int response=currentsumequals(sum);
	if(response==-1)
		return;
	else if(response==1 && index!=0)
	{
		string t1="",t2="";
		for(int i=0;i<ans.length()-1;i++)
		{
			if((ans[i]>='A'&&ans[i]<='Z')||ans[i]==' ')
				t1+=ans[i];
		}
		for(int i=0;i<sstore.length()-1;i++)
		{
			if((sstore[i]>='A'&&sstore[i]<='Z')|| sstore[i]==' ')
				t2+=sstore[i];
		}
		if(t1==t2)
			return;
		t2="";
		for(int i=0;i<m.length()-1;i++)
		{
			if((m[i]>='A'&&m[i]<='Z')|| m[i]==' ')
				t2+=m[i];
		}
		//cout<<"_"<<sstore<<"_";
		//cout<<t1.length()<<" "<<t2.length()<<endl;
		cout<<t2<<" = ";
		cout<<t1;
		cout<<"\n";
		return;
	}
	else if(response==0 && index!=in)
	{

		for(int i=0;i<26;i++)
		{
			sum[i]+=words[index][i];
		}
		
		string str="";
		
		answer(sum,index+1,ans+w[index]+" ");

		for(int i=0;i<26;i++)
		{
			sum[i]-=words[index][i];
		}
		
		answer(sum,index+1,ans);

		
	}
}



int main()
{
	char c;
	
	int sum[26];
	in=input();
	
	while(1)
	{
		if(phraseinput()==-1)
			break;
		string ans="";
		sstore="";
		m="";
		
		for(int i=0;i<sorindex;i++)
		{
			m+=sor[i];
			m+=" ";
		}
		sort(sor,sor+sorindex);
		for(int i=0;i<sorindex;i++)
		{
			sstore+=sor[i];
			sstore+=" ";
		}
		memset(sum,0,26*sizeof(int));
		answer(sum,0,ans);
	}

}