vector<int> serialize(Node *root)
    {
        vector<int>ans;
        if(root==NULL){
            ans.push_back(-1);
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        ans.push_back(root->data);
        while(!q.empty())
        {
            Node* t=q.front();
            q.pop();
            if(t->left)
            {
                q.push(t->left);
                ans.push_back(t->left->data);
            }
            else
                ans.push_back(-1);
            if(t->right)
            {
                q.push(t->right);
                ans.push_back(t->right->data);
            }
            else
                ans.push_back(-1);
        }
        return ans;
    }
    Node * deSerialize(vector<int> &A)
    {
       Node* root=NULL;
       if(A[0]==-1) return root;
       root=new Node(A[0]);
       Node* tmp=root;
       queue<Node*>q;
       q.push(tmp);
       int i=1;
       while(!q.empty() && i<A.size())
       {
           Node* t=q.front();
           q.pop();
           if(A[i]!=-1)
           {
               t->left=new Node(A[i]);
               q.push(t->left);
           }
           i++;
           if(A[i]!=-1)
           {
              t->right=new Node(A[i]);
              q.push(t->right);
           }
           i++;
       }
       return root;
    }
