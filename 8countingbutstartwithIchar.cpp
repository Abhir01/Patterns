#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int n;cin>>n;
//	char ch = 'A';
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<ch;
//			ch++;
//			j++;
//		}cout<<endl;
//		ch-=2;
//		i++;
//	}
//}


int main(){
	int n;cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch = 'A' + i + j - 2;
			cout<<ch;
			j++; 
		}cout<<endl;i++;
	}
}

