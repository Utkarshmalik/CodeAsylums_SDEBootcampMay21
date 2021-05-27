
class Solution
{
    public:
    
    struct Node* reverseList(struct Node *head)
    {
        
        if(!head)
         return head;
         
         
         Node * temp;
         temp=head;
         
         Node * prev=NULL;
         
         while(temp!=NULL)
         {
             Node * nextNode=temp->next;
             temp->next=prev;
             prev=temp;
             temp=nextNode;
         }
         
         return prev;
        
    }
    
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        // 5->4
        // 5=>4->3
        
        // 0->9->3-
        
        
        if(!first)
        return second;
        
        if(!second)
        return first;
        
        
        Node * head=NULL;
        Node * tail=NULL;
        
        
        first=reverseList(first);
        second=reverseList(second);
        
        Node * ptr1=first;
        Node * ptr2=second;
        int carry=0;
        
        while(ptr1 && ptr2)
        {
            int sum=ptr1->data+ ptr2->data+carry;
            
            int rem=sum%10;
            int que=sum/10;

            
            carry=que;
            
            Node * newNode=new Node(rem);
            
            
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
            }
            else
            {
                tail->next=newNode;
                tail=tail->next;
            }
            
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            
        }
        
        
        while(ptr1)
        {
            
            int sum=ptr1->data+carry;
            
            int rem=sum%10;
            int que=sum/10;

            
            carry=que;
            
            Node * newNode=new Node(rem);
            
            
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
            }
            else
            {
                tail->next=newNode;
                tail=tail->next;
            }
            
            ptr1=ptr1->next;
        }
        
        while(ptr2)
        {
            
            int sum=ptr2->data+carry;
            
            int rem=sum%10;
            int que=sum/10;

            
            carry=que;
            
            Node * newNode=new Node(rem);
            
            
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
            }
            else
            {
                tail->next=newNode;
                tail=tail->next;
            }
            
            ptr2=ptr2->next;
            
        }
        
        
        if(carry)
        {
            
            Node * newNode=new Node(carry);
            
            
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
            }
            else
            {
                tail->next=newNode;
                tail=tail->next;
            }
            
        }
        
        
        return reverseList(head);
        
        
    }
};
