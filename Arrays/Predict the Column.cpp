//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
         int res = 0;
        int maxCount = 0;
        
        for(int i=N-1; i>=0; i--){
            int tempCount = 0;
            for(int j=N-1; j>=0; j--){
                if(arr[j][i] == 0) tempCount++;
            }
            maxCount = maxCount>tempCount?maxCount:tempCount;
            res = maxCount>tempCount?res:i;
        }
        
        return res;
                                                   /* <<------------------------Explained ------------------->>>*/
      /*Input:
N = 3
M[][] = {{1, 1, 0},
         {1, 1, 0},
         {1, 1, 0}}
Output:2
Explanation:
2nd column (0-based indexing) 
is having 3 zeros which is 
maximum among all columns.  */  
      
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
