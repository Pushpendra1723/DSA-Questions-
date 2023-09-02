    int minLeafSum(Node *root)
    {
        //code here
        queue<Node *>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            int level_leaf_sum=0;
            for(int i=0;i<size;i++)
            {
                Node *temp=q.front();
                q.pop();
                
                if(temp->left!=0)q.push(temp->left);
                if(temp->right!=0)q.push(temp->right);
                if(temp->left==0&&temp->right==0)
                {
                    level_leaf_sum+=temp->data;
                }
            }
            if(level_leaf_sum!=0)
            {
                return level_leaf_sum;
            }
        }
    }