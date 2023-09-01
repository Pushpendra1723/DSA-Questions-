void printCorner(Node *root)
{

// Your code goes here
queue<Node *>q;
q.push(root);
vector<int>ans;
while(!q.empty())
{
    int size=q.size();
    vector<int>level;
    for(int i=0;i<size;i++)
    {
        Node *temp=q.front();
        q.pop();
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
        level.push_back(temp->data);
    }
    if(level.size()==1)
    {
        ans.push_back(level.front());
    }
    else
    {
    ans.push_back(level.front());
    ans.push_back(level.back());
    }
}
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}

}