Input: 5

Output:

*********
 *******
  *****
   ***
    *
    
    void printTriangle(int n) {
	    int i = 1;
	    while(i<=n){
	        int space = i - 1;
	        while(space){
	            cout<<" ";
	            space--;
	        }
	        int j = 1;
	        while(j<=n-i+1){
	            cout<<"*";
	            j++;
	        }
	        int k = 1;
	        while(k<=n-i){
	            cout<<"*";
	            k++;
	        }
	        i++;
	        cout<<endl;
	    }
	}