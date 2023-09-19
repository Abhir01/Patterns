Input: 5

Output:
A
AB
ABC
ABCD
ABCDE

void printTriangle(int n) {
        // code here
        int i = 1;
        while(i<=n){
            char ch = 'A';
            int j = 1;
            while(j<=i){
                cout<<ch;
                ch++;
                j++;
            }
            i++;
            cout<<endl;
        }
}
