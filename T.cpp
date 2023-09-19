Example 1:

Input: 5

Output:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

void upper(int n){
        int i = 1;
        while(i<=n){
            int j =1;
            while(j<=i){
                cout<<"*";
                j++;
            }
            int space = 2*(n-i);
            while(space){
                cout<<" ";
                space--;
            }
            int k = 1;
            while(k<=i){
                cout<<"*";
                k++;
            }
            i++;
            cout<<endl;
        }
    }
    
    void lower(int n){
        int i = 1;
        while(i<=n){
            int j =1;
            while(j<=n-i+1){
                cout<<"*";
                j++;
            }
            int space = 2*(i);
            while(space){
                cout<<" ";
                space--;
            }
            int k = 1;
            while(k<=n-i+1){
                cout<<"*";
                k++;
            }
            i++;
            cout<<endl;
        }
    }
    void printTriangle(int n) {
        // code here
        upper(n);
        lower(n-1);
    }
