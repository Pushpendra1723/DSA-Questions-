    int maxLevelSum(Node* root) {
        // Your code here
        int maxx=INT_MIN;
        queue<Node *>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            int level_sum=0;
            for(int i=0;i<size;i++)
            {
                Node *temp=q.front();
                q.pop();
                if(temp->left!=0)q.push(temp->left);
                if(temp->right!=0)q.push(temp->right);
                level_sum+=temp->data;
            }
            maxx=max(maxx,level_sum);
        }
        return maxx;
    }