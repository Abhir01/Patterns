Example 1:

Input: 5

Output:
1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

void printTriangle(int n) {
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout<<i<<" ";
                j++;
            }
            i++;cout<<endl;
        
    }
}