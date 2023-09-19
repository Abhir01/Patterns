Input: 5

Output:
1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

void printTriangle(int n) {
        int i = 1;
        
        while(i<=n){
            int j =1;
            int start = 1;
            if(i%2==0){
                start = 0;
            }else{
                start = 1;
            }
            while(j<=i){
                cout<<start<<" ";
                start = 1 - start;
                j++;
            }
            i++;cout<<endl;
        }
    }