unordered_map<Node*,Node*>mp;
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        Node* trgt=NULL;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* t=q.front();
            q.pop();
            if(t->data==target)
            {
                trgt=t;
            }
            if(t->left)
            {
                mp[t->left]=t;
                q.push(t->left);
            }
            if(t->right)
            {
                mp[t->right]=t;
                q.push(t->right);
            }
        }
        q.push(trgt);
        vector<bool>vis(10007,false);
        int ans=0;
        vis[target]=true;
        while(!q.empty())
        {
            ans++;
            int sz=q.size();
            while(sz--)
            {
                Node* t=q.front();
                q.pop();
                if(mp[t]&&!vis[mp[t]->data])
                {
                    vis[mp[t]->data]=true;
                    q.push(mp[t]);
                }
                if(t->left && !vis[t->left->data])
                {
                    vis[t->left->data]=true;
                    q.push(t->left);
                }
                if(t->right && !vis[t->right->data])
                {
                    vis[t->right->data]=true;
                    q.push(t->right);
                }
            }
        }
        return ans-1;
    }
