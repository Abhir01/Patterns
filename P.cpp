Input: 5

Output:
A
BB
CCC
DDDD
EEEEE


void printTriangle(int n) {
        // code here
        int i = 1;
        while(i<=n){
            char ch = 'A'+i-1;
            int j = 1;
            while(j<=i){
                cout<<ch;
                // ch++;
                j++;
            }
            i++;
            cout<<endl;
        }
    }