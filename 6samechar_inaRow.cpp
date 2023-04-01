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
//			j++;
//		}cout<<endl;
//		ch++;
//		i++;
//	}
//}

//using logic

int main(){
	int n;cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			char ch = 'A' + i - 1;
			cout<<ch;
			j++; 
		}cout<<endl;i++;
	}
}

