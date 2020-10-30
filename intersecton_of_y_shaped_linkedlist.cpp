#include<bits/stdc++.h>

int intersectPoint(Node* head1, Node* head2)
{
    int l1=0,l2=0,d=0;
    Node* curr = NULL, *curr1=NULL;
    curr=head1;
    while(curr != NULL)
    {
        l1 += 1;
        curr = curr -> next;
    }
    curr = head2;
    while(curr != NULL)
    {
        l2 += 1;
        curr = curr -> next;
    }
    if(l1 > l2)
    {
        d=l1-l2;
        curr = head1;
        for(int i = 0; i < d;i++)
        {
            if(curr == NULL)return -1;
            curr = curr->next;
        }
        curr1=head2;
        while(curr1 != NULL && curr != NULL)
        {
            if(curr1 == curr)return curr1->data;
            curr1 = curr1->next;
            curr = curr->next;
        }
        return -1;
    }
    else
    {
     d=l2-l1;
        curr = head2;
        for(int i = 0; i < d;i++)
        {
            if(curr == NULL)return -1;
            curr = curr->next;
        }
        curr1=head1;
        while(curr1 != NULL && curr != NULL)
        {
            if(curr1 == curr)return curr1->data;
            curr1 = curr1->next;
            curr = curr->next;
        }
        return -1;   
    }
}
