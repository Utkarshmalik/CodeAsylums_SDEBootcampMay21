// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    

    int maxSubarraySum(int arr[], int n){
        
    
        int maxSum=arr[0];
        
        for(int i=0;i<n;i++)
        {
            maxSum=max(maxSum,arr[i]);
        }
        
        
        int currSum=0;
        
        
        for(int i=0;i<n;i++)
        {
            currSum+=arr[i];
            
            currSum=max(currSum,arr[i]);
            maxSum=max(maxSum,currSum);
   
        }
        
        return maxSum;

       
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends





  ---------




  class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
        
        
        int n=prices.size();
        
        int maxElement=prices[n-1];
        int maxProfit=0;
        
        
        for(int i=n-1;i>=0;i--)
        {
           maxProfit=max(maxProfit,(maxElement-prices[i]));
            maxElement=max(maxElement,prices[i]);
        }
        
        return maxProfit;
    }
};


----------------------


// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    
	    long long currMax=1;
	    long long currMin=1;
	    long long maxProduct=arr[0];
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            long long  temp=currMax;
	            currMax=currMin;
	            currMin=temp;
	        }
	        
	            
	        currMax=max((long long)arr[i],currMax*arr[i]);
	        currMin=min((long long)arr[i],currMin*arr[i]);
	        maxProduct=max(currMax,maxProduct);
	        
	    }
	    
	    return maxProduct;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends




------------------------------------


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        if(!s.size())
            return 0;
        
        
        int ans=1;
        
        unordered_map<char,int>umap;
        
        
        int left=0,right=0;
        
        
        int n=s.size();
        
        while(right<n)
        {
                        
            if(umap.find(s[right])==umap.end())
            {
                 umap[s[right]]=right;  
                
                right++;
                
               
           
            }
            else
            {
                
                int prev=umap[s[right]];
                
                if(prev<left)
                {
                    
                    umap[s[right]]=right;  
                    right++;
                   
                }
                else
                {
                      umap[s[right]]=right;  
                    
                    while(left!=prev)
                    {
                        left++;
                    }
                    
                    left++;
                    right++;
                }
            }
            
             ans=max(ans,right-left);
        }
        
        return ans;
        
    }
};

