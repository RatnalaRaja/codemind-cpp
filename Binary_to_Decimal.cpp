#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
	int ans=0;
	int x=1;
	while(n!=0){
	int y=n%10;
	ans +=x*y;
	x*=2;
	n/=10;
	}
	return ans;
}
int main()
{
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++){
	    //int k
	    cin>>k;
	    cout<<binaryToDecimal(k)<<endl;
	}
}