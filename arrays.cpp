
// array [] -> N non negative integers
// Find a contigous subarray which adds to a given number S
// // [1,4,6,7,8,9];
// // 6+5+4+3+2+1 :  n*(n+1)/2;
// // int arr[]={15,2,4,8,9,5,10,23};
// // int s=23;
// //sort and moving 



#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<unordered_map>

// //brute force

// // int main()
// // {

// // int n=8;
// // int arr[]={15,2,4,8,9,5,10,23};
// // int s=23;


// // //i is the starting point

// // int found=false;

// // for(int i=0;i<n;i++)
// // {
// //     int sum=0;

// //     for(int j=i;j<n;j++)
// //     {
// //         //subarray that starts with i and ends with j
// //         sum+=arr[j];

// //         if(sum==s)
// //         {
// //             cout<<"yes";
// //             cout<<"arrayy starts at"<<i<<" "<<j<<"\n";
// //             found=true;
// //             break;
// //         }
// //     }
// // }

// // if(!found)
// // {
// //     cout<<"subarray not found";
// // }

// // }


// //Sliding Window Approach 

// int main()
// {

// int n=8;


// int sum=0;
// int left=0;
// int right=0;

// int arr[]={1,2,3,4,5};
// int s=15;

// // int arr[]={15,2,4,8,9,5,10,23};
// // int s=23;


// bool found=false;

// while(left<=right  && right<n )
// {

//     if(sum>s)
//     {
//         sum-=arr[left];
//         left++;
//     }
//     else if(sum < s)
//     {
//         sum+=arr[right];
//         right++;   
//     }
//     else
//     {
//         cout<<"yes "<<left<<" "<<right-1<<"\n";
//         sum-=arr[left];
//         left++;
//         found=true;
//     }
// }

// if(!found)
// {
//     cout<<"Not Found";
// }
// }


// // arr=[13,4,6,6,6];
// //s=;

// //time and complexity



// //problem solving skills


//array={12,3,4,1,6,9}
//sum=24

// n*(n-1)*(n-2)

// int main()
// {
//     int n=6;

//     for(int i=0;i<=n-3;i++)
//     {
//         for(int j=i+1;j<=n-2;j++)
//         {
//             for(int k=j+1;k<=n-1;k++)
//             {
//                 if(arr[i]+arr[j]+arr[k]==sum)
//                 {
//                     //
//                 }

//             }
//         }
//     }

// }



// //array={12,3,4,1,6,9}

// array=[1,3,4,6,9,12]
//sum=13;

// int main()
// {
//     int arr[]={12,3,4,1,6,9};
//     int n=6;
//     int reqSum=10;

//     sort(arr,arr+n);
//     //n*logn 

// // array=[1,3,4,6,9,12]

//     int left=0;
//     int right=n-1;

//     while(left<right)
//     {
//         int sum=arr[left]+arr[right];

//         if(sum==reqSum)
//         {
//             cout<<"the pairs are "<<arr[left]<<" "<<arr[right]<<"\n";
//             left++;
//             right--;
//         }
//         else if(sum<reqSum)
//         {
//             left++;
//         }
//         else if(sum>reqSum)
//         {
//             right--;
//         }    
//     }

// }


// O(nlogn + n)=)(nLogn)


// int main()
// {

//     int arr[]={1,3,4,6,9,12};
//     int sum=13;
//     int n=6;

//     sort(arr,arr+n);

//     for(int i=0;i<=n-3;i++)
//     {
//         int currSum=sum-arr[i];

//         //find a pair with a currSum from array i+1 to n  

//         int low=i+1;
//         int high=n-1;

//         while(low<high)
//         {
//             int tempSum=arr[low]+arr[high];

//             if(tempSum>currSum)
//             {
//               high--;   
//             }
//             else if(tempSum<currSum)
//             {
//                 low++;
//             }
//             else
//             {
//                 cout<<" the required triplet is "<<arr[i]<<" "<<arr[low]<<" "<<arr[high]<<"\n";
//                 low++;
//                 high--;
//             }
//         }
        
//     }

// }

// O(nlogn + n*n)
// O(n*n)


//prefix sum concept

//there are n queries 
//in each query you are given two numbers i and j


// int main()
// {
//     int n;
//     cin>>n;

//         int arr[]={1,2,3,4,5};

//         for(int i=0;i<n;i++)
//         {
//             int i,j;
//             cin>>i>>j;

//             int sum=0;
//             for(int k=i;k<=j;k;k++)
//             {
//                 sum+=arr[k];
//             }

//             cout<<sum<<"\n";
//         }
// }





// int main()
// {
//     int n=10;

//     int arr[]={1,2,3,4,5,35,7,8,90,1};

//     //[1,3,6,10,15]

//     // prefixSum[i]=sum of all elements till ith index


//     // i-j: sum till j - sum till i-1
//     //         prefixSum[j]-prefixSum[i-1];

//     int prefixSumArray[n];

//     prefixSumArray[0]=arr[0];


//     for(int i=1;i<n;i++)
//     {
//         prefixSumArray[i]=prefixSumArray[i-1]+arr[i];   
//     }

//     int t;
//     cin>>t;


//     while(t--)
//     {
//         int i,j;
//         cin>>i>>j;

//         int ans=prefixSumArray[j];

//         if(i)
//         ans-=prefixSumArray[i-1];

//         cout<<ans<<"\n";
//     }
    
// }


// O(n + t))
//O(n)



//You are given an array , 
//you have to find check if there is a subarray that sums to zero


// {



// }

int main()
{
    int n=5;
    int arr[]={4,2,-3,1,6};
    //int prefixSumArray[]={4,6,3,1,4,10};

    // [4,5,6,-10,1,-6,7,8]

    // 4,9,15,5,6,0

    // {
    //     4,0
    //     9,1
    //     15,2
    //     5,3
    //     6,4


    // }

    unordered_map<int,int>umap;

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        if(sum==0)
        {
            cout<<"the zero sum subarray is from "<<0<<" "<<i<<"\n";
        }

        if(umap.find(sum)!=umap.end())
        {
            cout<<"the zero sum subarray is from "<<umap[sum]+1<<" "<<i<<"\n";

        }
        

        umap[sum]=i;
    }



}

