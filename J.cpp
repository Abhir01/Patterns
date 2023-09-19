Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

void upar(int n){
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=i){
                cout<<"*"<<" ";
                j++;
            }
            i++;
            cout<<endl;
        }
    }
    void niche(int n){
        int i =1;
        while(i<=n-1){
            int j = 1;
            while(j<=n-i){
                cout<<"*"<<" ";
                j++;
            }
            i++;cout<<endl;
        }
    }
    
    void printTriangle(int n) {
        upar(n);
        niche(n);
    }

