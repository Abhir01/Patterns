Input: 5

Output:
ABCDE
ABCD
ABC
AB
A

void printTriangle(int n) {
        // code here
        int i = 1;
        while(i<=n){
            char ch = 'A';
            int j = 1;
            while(j<=n-i+1){
                cout<<ch;
                ch++;
                j++;
            }
            i++;
            cout<<endl;
        }
    }