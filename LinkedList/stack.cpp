// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends



// class Solution
// {
    
//     char complementary(char c)
//     {
//         if(c==')')
//         return '(';
        
        
        
//         if(c=='}')
//         return '{';
        
        
//         if(c==']')
//         return '[';
//     }
    
//     public:
//     //Function to check if brackets are balanced or not.
//     bool ispar(string x)
//     {
        
//         int n=x.size();
        
//         if(n%2)
//         return false;
        
        

//         stack<char>s;
        
        
//         int i=0;
        
//         while(i<n)
//         {

//             if(x[i]=='{' || x[i]=='(' || x[i]=='[')
//             {
//                 s.push(x[i]);
//             }
//             else
//             {
//                 if(s.empty())
//                 {
                    
//                                     return false;

//                 }
                
//                 if(s.top()!=complementary(x[i]))
//                 {
//                 return false;
//                 }
                
//                 s.pop();
//             }
            
//             i++;
//         }
        
//         return s.empty();
        

//     }

// };

// // { Driver Code Starts.

// int main()
// {
//    int t;
//    string a;
//    cin>>t;
//    while(t--)
//    {
//        cin>>a;
//        Solution obj;
//        if(obj.ispar(a))
//         cout<<"balanced"<<endl;
//        else
//         cout<<"not balanced"<<endl;
//    }
// }  // } Driver Code Ends




// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends



// class Solution
// {
    
//     char complementary(char c)
//     {
//         if(c==')')
//         return '(';
        
        
        
//         if(c=='}')
//         return '{';
        
        
//         if(c==']')
//         return '[';
//     }
    
//     public:
//     //Function to check if brackets are balanced or not.
//     bool ispar(string x)
//     {
        
//         int n=x.size();
        
//         if(n%2)
//         return false;
        
        

//         stack<char>s;
        
        
//         int i=0;
        
//         while(i<n)
//         {

//             if(x[i]=='{' || x[i]=='(' || x[i]=='[')
//             {
//                 s.push(x[i]);
//             }
//             else
//             {
//                 if(s.empty())
//                 {
                    
//                                     return false;

//                 }
                
//                 if(s.top()!=complementary(x[i]))
//                 {
//                 return false;
//                 }
                
//                 s.pop();
//             }
            
//             i++;
//         }
        
//         return s.empty();
        

//     }

// };

// // { Driver Code Starts.

// int main()
// {
//    int t;
//    string a;
//    cin>>t;
//    while(t--)
//    {
//        cin>>a;
//        Solution obj;
//        if(obj.ispar(a))
//         cout<<"balanced"<<endl;
//        else
//         cout<<"not balanced"<<endl;
//    }
// }  // } Driver Code Ends



// ---------------------------------------


// // { Driver Code Starts
// // C++ program to evaluate value of a postfix expression

// #include <bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends


// class Solution
// {
//     int eval(int num1,int num2,char oper)
//     {
//         if(oper=='*')
//         {
//             return num1*num2;
//         }
        
        
//         if(oper=='+')
//         {
//             return num1+num2;
//         }
        
        
//         if(oper=='-')
//         {
//             return num1-num2;
//         }
        
        
//         if(oper=='/')
//         {
//             return num1/num2;
//         }
        
//     }
    
    
//     public:
//     //Function to evaluate a postfix expression.
//     int evaluatePostfix(string S)
//     {
        
//         stack<int>s;
        
//         int n=S.size();
        
//         for(int i=0;i<n;i++)
//         {
//             if(S[i]=='*' || S[i]=='/' || S[i]=='+' ||S[i]=='-' )
//             {
                
//                 int top1=s.top();
                
//                 s.pop();
                
//                 int top2=s.top();
                
//                 s.pop();
                
                
//                 int res=eval(top2,top1,S[i]);
                
//                 s.push(res);
            
//             }
//             else
//             {
//                 s.push(S[i]-'0');
            
            
                
//             }
//         }
        
//         return s.top();
//     }
// };

// // { Driver Code Starts.

// // Driver program to test above functions
// int main()
// {
//     int t;
//     cin>>t;
//     cin.ignore(INT_MAX, '\n');
//     while(t--)
//     {
//         string S;
//         cin>>S;
//         Solution obj;
    
//     cout<<obj.evaluatePostfix(S)<<endl;
//     }
//     return 0;
// }
//   // } Driver Code Ends



//   ---------------------------





#include<iostream>
#include<bits/stdc++.h>
#include<stack>



void insertAtBottom(stack<int> & s,int value)
{
    if(s.empty())
    return s.push(value);


    int temp=s.top();
    s.pop();


    insertAtBottom(s,value);

    s.push(temp);

}

void reverse(stack<int>&s)
{
    if(s.empty())
    return;

    int temp=s.top();
    s.pop();

    reverse(s);

    insertAtBottom(s,temp);

}

void insertAtCorrectPlace(stack<int>&s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return;
    }

    if(s.top()<=val)
    {
        s.push(val);
        return;
    }

    int temp=s.top();
    s.pop();


    insertAtCorrectPlace(s,val);

    s.push(temp);
}


void sortStack(stack<int>&s)
{
    if(s.empty())
    return;

    int temp=s.top();
    s.pop();

    sortStack(s);

    insertAtCorrectPlace(s,temp);
}

int main()
{
    stack<int>s;

    s.push(13);
        s.push(2);
    s.push(33);
    s.push(3);
    s.push(1);

    // while(!s.empty())
    // {
    //    cout<<s.top()<<" ";
    //    s.pop();
    // }

    cout<<"\n";


    sortStack(s);


     while(!s.empty())
    {
       cout<<s.top()<<" ";
       s.pop();
    }


}
