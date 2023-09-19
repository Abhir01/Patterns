Input: 4
Output:
   A
  ABA
 ABCBA
ABCDCBA


 void printTriangle(int n) {
        // code here
        int i = 1;
        while(i<=n){
            int space = n-i;
            while(space){
                cout<<" ";
                space--;
            }
            char ch = 'A';
            int j = 1;
            while(j<=i){
                cout<<ch;
                ch++;
                j++;
            }
            // char ch1 = ch-1;
            ch=ch-2;
            int k = 1;
            while(k<=i-1){
                cout<<ch;
                ch--;
                k++;
            }
            i++;cout<<endl;
        }
        
    }