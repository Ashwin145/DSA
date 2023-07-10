//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string small="",caps = "",ans="";
        for(auto x:str){
            if(isupper(x)){
                caps+=x;
            }
            else{
                small+=x;
            }
        }
        sort(caps.begin(),caps.end());
        sort(small.begin(),small.end());
        int i=0,j=0;
        for(auto x:str){
            if(isupper(x)){
                ans+=caps[j];
                j++;
            }
            else{
                ans+=small[i];
                i++;
            }
        }
        return ans;
        // your code here
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends