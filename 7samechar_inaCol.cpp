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
//		ch-=3;
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
			char ch = 'A' + j - 1;
			cout<<ch;
			j++; 
		}cout<<endl;i++;
	}
}

