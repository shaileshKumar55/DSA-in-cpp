//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

                                    /*  <------------------EXPLAINED------------------->  */

/*Input:N = 3arr[] = 1 2 3Output:3Explanation:Three subsets are there whose sum of elements is even.
Subsets are (3, 2, 1), (1, 3), (2).  */

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
class Solution{
  public:
    int countSumSubsets(int arr[], int N){
        
        // Your code here
        int odd=0,even=0;
        for(int i=0;i<N;i++){
            if((arr[i]&1)==0) even++;
            else odd++;
        }
        int a=(1<<even)-1;
        int b=(1<<odd-1)-1;
        if(odd==0) return a;
        else if(even==0) return b;
        else return a+b+a*b;
        
        
    }
};

//{ Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    Solution obj;
	    cout << obj.countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
