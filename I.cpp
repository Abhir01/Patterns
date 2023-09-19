For Input: 
5
Your Output: 
    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
    
void erect(int n){
        int i = 1;
        while(i<=n){
            int space = n-i;
            while(space){
                cout<<" ";
                space--;
            }
            int j = 1;
            while(j<=i){
                cout<<"* ";
                j++;
            }
            i++;cout<<endl;
        }
    }
    void invert(int n){
        int i = 1;
        while(i<=n){
            int space = i-1;
            while(space){
                cout<<" ";
                space--;
            }
            int j = 1;
            while(j<=n-i+1){
                cout<<"* ";
                j++;
            }
            i++;cout<<endl;
        }
    }
    
    void printDiamond(int n) {
        erect(n);
        invert(n);
        
        
    }
    
    
    