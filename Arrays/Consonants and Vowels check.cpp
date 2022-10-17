//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void checkString(string s);


// } Driver Code Ends
//User function Template for C++

void checkString(string s)
{
    int v=0;
    int c=0;
    int n=s.length();
    int x=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            v++;
        else if(s[i]==' ')
            x--;
    }
    c=x-v;
    //Your code here
    
    if(v>c)
        cout<<"Yes";
    else if(c>v)
        cout<<"No";
    else
        cout<<"Same";
    
    cout<<endl;
}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    
	    //function call
	    checkString(s);
	   
	}
	return 0;
}


// } Driver Code Ends
