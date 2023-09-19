Example 1:

Input: 5

Output:
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

void printTriangle(int n) {
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout<<j<<" ";
                j++;
            }
            i++;cout<<endl;
        }
    }