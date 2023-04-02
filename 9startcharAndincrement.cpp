#include<iostream>
using namespace std;

int main(){
	int n;cin>>n;
	int i=1;
//	char start='A';

	while(i<=n){
		int j=1;
		
//		bahar isliye bcz andar karega to same 
//		se start hoga and same print hota jaiga	
			
		char start='A' + n - i;
		while(j<=i){
			cout<<start;
			start++; 
			j++;
		}cout<<endl;
		i++;
	}
}
