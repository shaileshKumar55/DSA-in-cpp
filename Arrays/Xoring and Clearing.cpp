//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

                                              //<--------------EXPLAINED--------------------->
/*Input:
N = 10
A[] = 1 2 3 4 5 6 7 8 9 10
Output:
1 3 1 7 1 3 1 15 1 3
0 0 0 0 0 0 0 0 0 0
Explanation:
First we take xor of every element with
their indices, like 1xor0, 2xor1, 3xor2, 
4xor3 and so on.
Now print the resultant array
Now set all the elements of array to zero
Now print the resultant array*/

class Solution{
    public:
    void printArr(int arr[],int n)
    {
        //Your code for printing array here
         for(int i = 0; i < n; i++) cout << arr[i] << " ";
        
        cout<<endl;
    }
    
    void setToZero(int arr[],int n)
    {
       //Use memset to set arr to zero
       memset (arr, 0, n * sizeof (int));
    }
    
    void xor1ToN(int arr[], int n)
    {
       //Xor arr[i]^i
       for (int i = 0; i < n; i++) arr[i] ^= i;
    }
};


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    Solution obj;
	    obj.xor1ToN(arr,n);
	    obj.printArr(arr,n);
	    obj.setToZero(arr,n);
	    obj.printArr(arr,n);
	}
	return 0;
}


// } Driver Code Ends
