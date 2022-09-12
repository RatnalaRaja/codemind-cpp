#include<bits/stdc++.h>
using namespace std;
int decimalTobin(int n){
	int ans=0;
	int x=1;
	while(x<=n)
		x*=2;
	x/=2;
	while (x>0)
	{
	int lastd=n/x;
	n-=lastd*x;
	x/=2;
	ans=ans*10+lastd;
}
	return ans;
}


int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	    int k;
	    cin>>k;
	cout<<decimalTobin(k)<<endl;
}
}