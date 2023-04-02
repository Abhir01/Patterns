#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n-i+1){
			cout<<j;
			j++;
		}
		
		int star=i-1;
		while(star--){
			cout<<"*";
		}
		
		int star1=i-1;
		while(star1--){
			cout<<"*";
		}
		
		int no=n-i+1;
		while(no){
			cout<<no;
			no--;
		}
		
//		main hai ki kaha se start ho rahe hai
		
		cout<<endl;
		i++;
	}
}

