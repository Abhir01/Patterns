Example 1:

Input: 5

Output:
1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1 

void printTriangle(int n) {
	    int i = 1;
        while(i<=n){
            int j = 1;
            // int cnt = 1;
            while(j<=n-i+1){
                cout<<j<<" ";
                // cnt++;
                j++;
            }
            i++;cout<<endl;
        }
	}