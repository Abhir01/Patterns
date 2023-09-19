Example 1:

Input: 5

Output:
E
E D
E D C
E D C B
E D C B A

void printTriangle(int n) {
        // code here
        int i = 1;
        while(i<=n){
            int j = 1;
            char ch = 'A'+n-1;
            while(j<=i){
                cout<<ch<<" ";
                ch--;
                j++;
            }
            i++;
            cout<<endl;
        }
    }