Input: 5

Output:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

void printTriangle(int n) {
        int i = 1;
        int cnt = 1;
        while(i<=n){
            int j =1;
            while(j<=i){
                cout<<cnt<<" ";
                cnt++;
                j++;
            }
            i++;cout<<endl;
        }
    }