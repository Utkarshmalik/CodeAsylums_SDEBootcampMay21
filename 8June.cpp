// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
         

public:	

	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    
	     unordered_map<int,int>umap;
        
        int currSum=0;
        int maxLength=0;
        
        for(int i=0;i<n;i++)
        {
            
            currSum+=arr[i];
            int t=currSum%k;
             t=(t+k)%k;


            
            if(currSum%k==0)
            {
                maxLength=max(maxLength,i+1);
            }
            else
            {
                
                
                if(umap.find(t)!=umap.end())
                {
                    int prevIndex=umap[t];
                
                   maxLength=max(maxLength,i-prevIndex);

                }
                
            }
            
            if(umap.find(t)==umap.end())
            umap[t]=i;
        }
        
        return maxLength;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends


  -------------------------------


  // { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int>res;
        unordered_map<int,int>umap;
        int curr=0;
        
        for(int i=0;i<k;i++)
        {
            if(umap.find(A[i])==umap.end())
            {umap[A[i]]=1;
            curr++;
            }
            else
            {umap[A[i]]++;
            }
        }
        
        res.push_back(curr);
        
        

        for(int i=k;i<n;i++)
        {
            int left=i-k;
            
            umap[A[left]]--;
            
            if(umap[A[left]]==0)
            {
                curr--;
            }
            else if(umap[A[left]]==1)
            {
                curr++;
            }
            
            
            if(umap.find(A[i])==umap.end())
            {
                curr++;
                umap[A[i]]=1;
            }
            else
            {
                umap[A[i]]++;
            }
            
            res.push_back(curr);
        }
    
    
    return res;
    }
    
};


// 3+1-1

// 1-0
// 2-1
// 3-1
// 4-1


// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends