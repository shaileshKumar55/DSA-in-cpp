//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/

                /* Input:
                s1 = madame
                s2 = madam
                Output:
                      1
                     Explanation:
                     String s1 = madame, string s2 = madam. 
                     character 'e' in first string needs to 
                     be deleted to make s1 equal to s2. */
class Solution{
    public:
    int countChars(string s1, string s2){
        //your code is from here
        
int ctr1[26],ctr2[26];
int i,count=0;
memset(ctr1,0,sizeof(ctr1));
memset(ctr2,0,sizeof(ctr2));
for(i=0; s1[i]!='\0'; i++)
{
ctr1[((int)s1[i])-97]++;
}
for(i=0; s2[i]!='\0'; i++)
{
ctr2[((int)s2[i])-97]++;
}
for(i=0; i<26; i++)
{
if(ctr1[i]==ctr2[i])
{
continue;
}
else if(ctr1[i]>ctr2[i])
{
count+=ctr1[i]-ctr2[i];
}
else
{
count+=ctr2[i]-ctr1[i];
}
}
return count;
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    Solution obj;
	    cout << obj.countChars(s1, s2) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
