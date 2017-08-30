//Slogan Learning of Princess
#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,q;
	map<string,string> m;
	string a,b;
	scanf("%lld",&n);
	getchar();
	while(n)
	{
		getline(cin,a);
		getline(cin,b);
		//cout<<"|"<<a<<" "<<b<<"|\n";
		m[a]=b;
		n--;
	}
	scanf("%lld",&q);
	getchar();
	while(q)
	{
		getline(cin,a);
		//cout<<"-"<<a<<"-\n";
		cout<<m[a]<<"\n";
		q--;
	}
}