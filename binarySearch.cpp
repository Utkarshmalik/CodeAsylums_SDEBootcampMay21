// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> find(int a[], int n , int x );

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,x;
//         cin>>n>>x;
//         int arr[n],i;
//         for(i=0;i<n;i++)
//         cin>>arr[i];
//         vector<int> ans;
//         ans=find(arr,n,x);
//         cout<<ans[0]<<" "<<ans[1]<<endl;
//     }
//     return 0;
// }


// // } Driver Code Ends


// vector<int> find(int arr[], int n , int x )
// {
    
//     int low=0,high=n-1;
    
    
    
//     int firstOccurance=-1;
    
//     //first occurance 
    
//     while(low<=high)
//     {
//         int mid=low+(high-low)/2;
        
//         if(arr[mid]==x)
//         {
//            firstOccurance=mid;
           
//            high=mid-1;
//         }
//         else if(arr[mid]>x)
//         {
//             high=mid-1;
//         }
//         else
//         {
//             low=mid+1;
//         }
//     }
    
//     vector<int>res;
    
//     res.push_back(firstOccurance);
    
     
     
//      low=0,high=n-1;
     
//      int lastOccurance=-1;
    
//     while(low<=high)
//     {
//         int mid=low+(high-low)/2;
        
//         if(arr[mid]==x)
//         {
//            lastOccurance=mid;
           
//            low=mid+1;
//         }
//         else if(arr[mid]>x)
//         {
//             high=mid-1;
//         }
//         else
//         {
//             low=mid+1;
//         }
//     }
    
    
//     res.push_back(lastOccurance);
    
//     return res;
    
// }

// #include <iostream>
// using namespace std;
// #define ll long long int
// #include<bits/stdc++.h>


// bool isPossibleAns(ll * arr,ll ans,ll c,ll n)
// {
// 	int allocatedCows=1;
// 	int previouslyAllocatedStall=0;
	
	
// 	for(ll i=1;i<n;i++)
// 	{
// 		if(arr[i]-arr[previouslyAllocatedStall]>=ans)
// 		{
// 		   previouslyAllocatedStall=i;
// 		   allocatedCows++;
		   
// 		   if(allocatedCows==c)
// 		   {
// 		   	 return true;
// 		   }
// 		}
// 	}
	
// 	return false;
// }

// int main() {
	
	
// 	int t;
// 	cin>>t;
	
// 	while(t--)
// 	{
	
// 	ll n,c;
// 	cin>>n>>c;
	
// 	ll arr[n];
	
// 	for(ll i=0;i<n;i++)
// 	cin>>arr[i];
	
	
// 	sort(arr,arr+n);
	
// 	ll minAns=INT_MAX;
	
// 	for(ll i=1;i<n;i++)
// 	{
// 		minAns=min(minAns,arr[i]-arr[i-1]);
// 	}
	
// 	ll maxAns=arr[n-1]-arr[0];
	
	
	
// 	ll low=minAns,high=maxAns;
	
// 	ll ans;
	
	
// 	while(low<=high)
// 	{
		
// 		ll mid=low+(high-low)/2;
		
		
// 		bool isPossible=isPossibleAns(arr,mid,c,n);
		
// 		if(isPossible)
// 		{
// 			ans=mid;
// 			low=mid+1;
// 		}
// 		else
// 		{
// 			high=mid-1;
// 		}
// 	}
	
// 	cout<<ans<<"\n";
	
// 	}

// }


// 7:
// 2

// 11
// 3


// 33
// 5






#include <iostream>
using namespace std;
#define ll long long int
#include<bits/stdc++.h>



int main()
{


    int x;
    cin>>x;
    

    int low=1,high=x;


    int ans;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        int temp=mid*mid;

        if(temp==x)
        {
            ans=mid;
            break;
        }
        else if(temp>x)
        {
            high=mid-1;
        }
        else
        {
            ans=mid;
            low=mid+1;
        }
    }

    int left=ans;

    // if(ans*ans==x)
    // {
    //     //right part is zero 
    // }

    int k;
    cin>>k;
//2
//2.0
// 2.11
//     ans+0.1;
//     ans+0.01;

     float newAns=ans;

         float frac=0.1;

     for(int i=0;i<k;i++)
     { 

         while(newAns* newAns<=x)
         {
             newAns+=frac;
         }

         newAns-=frac;
         frac=frac/10;

         cout<<newAns<<"\n";
     }

     cout<<newAns<<"\n";
}