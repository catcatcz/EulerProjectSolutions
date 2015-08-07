#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
int multi()
{
	vector<bool> a(1000,false);
	a[3] = true;
	a[5] = true;
	for(int i=6; i< a.size(); i+=3)
	{
		a[i] = true;
	}
	for(int i = 10; i< a.size(); i+=5)
	{
		a[i]=true;
	}

	int tot=0;
	for(int i=1; i< a.size(); i++)
	{
	if(a[i] == true) {tot+=i;}
	}
	return tot;
}

};

int main()
{
Solution op;
int a= op.multi(); cout<<a<<endl;
}
