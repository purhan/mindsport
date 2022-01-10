void linkdelete(struct Node  *head, int M, int N)
    {
        struct Node* tmp=head;
        int k=0;
        struct Node* prev=NULL;
        while(tmp!=NULL)
        {
            if(k==M)
            {
                int t=N;
                while(t>0&&tmp!=NULL)
                {
                    t--;
                    if(prev==NULL)
                    {
                        struct Node* l=tmp;
                        tmp=tmp->next;
                        delete(l);
                    }
                    else
                    {
                        prev->next=tmp->next;
                        delete(tmp);
                        tmp=prev->next;
                    }
                }
                k=-1;
            }
            else
            {
                prev=tmp;
                tmp=tmp->next;
            }
            k++;
        }
    }
