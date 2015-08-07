#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
	int FBeven(int nmax)
	{
	int tot=0; vector<int> nn; nn.push_back(1); nn.push_back(2); tot+=2;
	while(nn[nn.size()-1] <= nmax)
	{
		int a= nn[nn.size()-1];
		int b= nn[nn.size()-2];
		nn.push_back(a+b);
		if((a+b)%2 ==0) {tot+=a; tot+=b;}
	}
	return tot;
	}
};

int main()
{
Solution op;
int z = op.FBeven(4000000);
cout<<z<<endl;
}
