// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    
    char complementary(char c)
    {
        if(c==')')
        return '(';
        
        
        
        if(c=='}')
        return '{';
        
        
        if(c==']')
        return '[';
    }
    
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        
        int n=x.size();
        
        if(n%2)
        return false;
        
        

        stack<char>s;
        
        
        int i=0;
        
        while(i<n)
        {

            if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            {
                s.push(x[i]);
            }
            else
            {
                if(s.empty())
                {
                    
                                    return false;

                }
                
                if(s.top()!=complementary(x[i]))
                {
                return false;
                }
                
                s.pop();
            }
            
            i++;
        }
        
        return s.empty();
        

    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends




// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    
    char complementary(char c)
    {
        if(c==')')
        return '(';
        
        
        
        if(c=='}')
        return '{';
        
        
        if(c==']')
        return '[';
    }
    
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        
        int n=x.size();
        
        if(n%2)
        return false;
        
        

        stack<char>s;
        
        
        int i=0;
        
        while(i<n)
        {

            if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            {
                s.push(x[i]);
            }
            else
            {
                if(s.empty())
                {
                    
                                    return false;

                }
                
                if(s.top()!=complementary(x[i]))
                {
                return false;
                }
                
                s.pop();
            }
            
            i++;
        }
        
        return s.empty();
        

    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends