Example 1:

Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *

void printTriangle(int n) {
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout<<"* ";
                j++;
            }i++;cout<<endl;
        }
    }