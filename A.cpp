Input: 5

Output:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

void printSquare(int n) {
        int i = 1;
        while(i<=n){
            int j = 1;
            while(j<=n){
                cout<<"* ";
                j++;
            }
            i++;
            cout<<endl;
        }
    }

