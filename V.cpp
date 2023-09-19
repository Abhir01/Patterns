Input: 4

Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

void printSquare(int n) {
        int size = 2*n-1;
        int i = 1;
        while(i<=size){
            int j = 1;
            while(j<=size){
                int left = i;
                int top = j;
                int right = size - j + 1;
                int bottom = size - i + 1;
                int val = min(min(left,right) , min(top,bottom));
                cout<< n - val+1<<" ";
                j++;
            }
            i++;cout<<endl;
        }
}