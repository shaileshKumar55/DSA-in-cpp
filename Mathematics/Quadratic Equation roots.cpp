//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++



class Solution
{
public:
    vector<int> quadraticRoots(int a, int b, int c)
    {
        vector<int> ans;

        double ok = ((b * b) - (4 * a * c));

        double x = -1, y;

        if (ok < 0)
        {
            ans.push_back(-1);
            return ans;
        }

        if (ok >= 0)
        {
            x = floor((-b + sqrt(ok)) / (2 * a));
            y = floor((-b - sqrt(ok)) / (2 * a));
        }

        if (x >= y)
        {
            ans.push_back(x);
            ans.push_back(y);
        }

        else
        {
            ans.push_back(y);
            ans.push_back(x);
        }

        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
