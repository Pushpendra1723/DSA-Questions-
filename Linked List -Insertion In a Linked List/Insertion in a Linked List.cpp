    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *p=new Node(x);
       if(head==0)return p;
       p->next=head;
       head=p;
       return head;
       
       }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
        Node *q=new Node(x);
       if(head==0)return q;
       Node *last=head;
      
       while(last->next!=0)
       {
           last=last->next;
       }
    
       last->next=q;
       return head;
    }

    Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node *q=new Node(x);
	if(head==0)return q;
	int len=0;
	Node *p=head;
	while(p!=0)
	{
	    len++;
	    p=p->next;
	}
	p=head;
	if(len&1)
	len=len/2;
	else if(len%2==0)
	{
	    len=len/2;
	    len--;
	}
	
	
	while(len--)
	{
	    p=p->next;
	}
	
	q->next=p->next;
	p->next=q;
	
	return head;
	
	
}