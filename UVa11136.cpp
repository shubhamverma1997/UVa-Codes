//Hoax or what
#include <iostream>
#include <set>
using namespace std;
int main()
{
	long long int n,k,a,count;
	while(1)
	{
		count=0;
		multiset<long long int> s;
		multiset<long long int>::iterator it;
		scanf("%lld",&n);
		if(n==0)
			break;
		while(n)
		{
			//cout<<"here";
			scanf("%lld",&k);
			while(k)
			{
				scanf("%lld",&a);
				s.insert(a);
				k--;
			}
			count=count+( (*( s.rbegin() )) - (*( s.begin() )) );
			
			//cout<<s.size()<<"\n";

			it=s.end();
			it--;
			s.erase(it);

			it=s.begin();
			s.erase(it);

			//cout<<"#"<<s.size()<<"\n";
			n--;
		}
		printf("%lld\n",count);
	}
}