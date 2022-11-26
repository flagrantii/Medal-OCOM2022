#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a>b;
}
main(){
	int n,num=0; cin>>n;
	int tan[n],ple[n],sum[n];
	
	for(int i=0;i<n;i++){
		cin>>ple[i];
	}
	sort(ple,ple+n);
	
	for(int i=0;i<n;i++){
		cin>>tan[i];
	}
	sort(tan,tan+n,cmp);
	
	for(int i=0;i<n;i++){
		sum[i]=ple[i]+tan[i];
	}
	sort(sum,sum+n);
	
	for(int i=1;i<n;i++){
		num+=(sum[i]-sum[i-1]);
	}
	cout<<num;
	
}
