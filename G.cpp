Input: 5

Output:
    *
   ***  
  *****
 *******
*********

void printTriangle(int n) {
        // code here
        int i = 1;
        while(i<=n){
            int space = n-i;
            while(space){
                cout<<" ";
                space--;
            }
            
            int j = 1;
            while(j<=i){
                cout<<"*";
                j++;
            }
            
            int k = 2;
            while(k<=i){
                cout<<"*";
                k++;
            }
            
            i++;
            cout<<endl;
            
        }
    }
