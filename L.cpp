Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1


void printTriangle(int n) {
        // code here
        
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout<<j<<" ";
                j++;
            }
            
            int space = (n*2) - (2*i);
            while(space){
                cout<<" "<<" ";
                space--;
            }
            j = i;
            while(j>=1){
                cout<<j<<" ";
                j--;
            }
            
            i++;cout<<endl;
        }
    }