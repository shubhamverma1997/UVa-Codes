//Hardwood Species
#include <iostream>
#include <map>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int t;
	double count;
	string s;
	scanf("%lld",&t);
	getchar();
	getline(cin,s);
	//cout<<"here";
	while(t)
	{
		map<string,long long int> m;
		count=0;
		while(1)
		{
			getline(cin,s);
			if(s.length()==0)
				break;
			m[s]++;
			count++;
			
		}

		map<string,long long int>::iterator it;
		for(it=m.begin();it!=m.end();it++)
		{
			cout<<(*it).first<<" ";
			cout<<fixed<<setprecision(4)<<(*it).second*100/count<<"\n";
		}
		t--;
		if(t!=0)
		cout<<"\n";
	}
}
