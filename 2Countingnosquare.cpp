#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int i=1;
	int cnt=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<cnt;
			cnt++;
			j++;
		}cout<<endl;
		i++;
	}
}

