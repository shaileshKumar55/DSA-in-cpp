//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
                                           //Input:s = xxyy      Output:1

class Solution{
    public:
    void follPatt(string s)
    {
       //Your code here
         int n = s.length();
       int count = 0;

       bool flag = true;
       

       int i = 0;
       while(i!=n)
       {
           while(s[i] == 'x')
           {
               count++;
               i++;
           }
           
           while(s[i] == 'y')
           {
               count--;
               i++;
           }
           
           if(count != 0)
           {
               flag = false;
               break;
           }
       }
       
       if(flag)
           cout << "1";
       else
           cout << "0";
       
   
       
       cout<<endl;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    Solution obj;
	    //function call
	    obj.follPatt(s);
	   
	}
	return 0;
}
// } Driver Code Ends
