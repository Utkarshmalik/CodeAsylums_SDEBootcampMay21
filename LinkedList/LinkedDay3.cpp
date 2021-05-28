

class Solution
{
    
    node * reverse(struct node * head)
    {
        
        if(!head)
        return head;
        
        node * prev=NULL;
        
        node * temp=head;
        
        while(temp)
        {
            node * next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    
    
    public:
    struct node *reverse (struct node *head, int k)
    {
    
    
    if(!head || !head->next)
    return head;
    
    if(k==1)
    return head;
    
    
    int count=k-1;
    
    node * temp=head;
    
    while(count-- && temp->next)
    {
        temp=temp->next;
    }
    
    node * furtherHead=reverse(temp->next,k);
    
    temp->next=NULL;
    
    node * prevHead=head;
    
    node * reversedHead=reverse(head);
    
    prevHead->next=furtherHead;
    return reversedHead;
    
    }
};






-------





class Solution
{
    
    node * reverse(struct node * head)
    {
        
        if(!head)
        return head;
        
        node * prev=NULL;
        
        node * temp=head;
        
        while(temp)
        {
            node * next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    
    
    public:
    struct node *reverse (struct node *head, int k)
    {
    
    
    if(!head || !head->next)
    return head;
    
    if(k==1)
    return head;
    
    
    int count=k-1;
    
    node * temp=head;
    
    while(count-- && temp->next)
    {
        temp=temp->next;
    }
    
    node * furtherHead=reverse(temp->next,k);
    
    temp->next=NULL;
    
    node * prevHead=head;
    
    node * reversedHead=reverse(head);
    
    prevHead->next=furtherHead;
    return reversedHead;
    
    }
};


-------






class Solution
{
    
    node * reverse(struct node * head)
    {
        
        if(!head)
        return head;
        
        node * prev=NULL;
        
        node * temp=head;
        
        while(temp)
        {
            node * next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    
    
    public:
    struct node *reverse (struct node *head, int k)
    {
    
    
    if(!head || !head->next)
    return head;
    
    if(k==1)
    return head;
    
    
    int count=k-1;
    
    node * temp=head;
    
    while(count-- && temp->next)
    {
        temp=temp->next;
    }
    
    node * furtherHead=reverse(temp->next,k);
    
    temp->next=NULL;
    
    node * prevHead=head;
    
    node * reversedHead=reverse(head);
    
    prevHead->next=furtherHead;
    return reversedHead;
    
    }
};
