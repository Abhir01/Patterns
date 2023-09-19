Example 1:

Input: 4

Output:
****
*  *
*  *
****

void printSquare(int n) {
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=n){
                if(i==1 || i==n || j==1 || j==n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                j++;
            }i++;
            cout<<endl;
        }
    }