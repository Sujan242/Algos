//  https://practice.geeksforgeeks.org/problems/rotate-doubly-linked-list-by-p-nodes/1

struct node*update(struct node*start,int p)
{
    //Add your code here
    int n=1;
    struct node* temp=start;
    if(temp->next==NULL)
    {
        
        return temp;
    }
    // cout<<p;;
    
    while(temp->next!=NULL)
    {
        n++;
        temp=temp->next;
    }
    p=p%n;
    if(p==0)
    {
        return start;
    }
    
    
    temp->next=start;
    while(p>0)
    {
        struct node* temp1=start;
        start=start->next;
        if(p==1)
        {
            // cout<<temp1->data<<" ";
            temp1->next=NULL;
        }
        p--;
    }
    return start;
    
}