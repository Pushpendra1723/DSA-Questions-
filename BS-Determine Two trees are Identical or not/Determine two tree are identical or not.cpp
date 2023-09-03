    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(r1==0 and r2==0)return true;
        else if(r1==0 or r2==0)return false;
        
        else if(r1->data!=r2->data)return false;
        
        return isIdentical(r1->left,r2->left)and isIdentical(r1->right,r2->right);
    }