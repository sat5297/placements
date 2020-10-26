//Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree
void topView(struct Node *root)
{
    queue <Node* > q1;
   q1.push(root);
   int hd = 0;
   queue <int> q2;
   q2.push(hd);
   map <int, int> mp1;
   
   while(!q1.empty())
   {
       int c = q1.size();
       for(int i = 0; i < c; i++)
       {
           Node* curr = q1.front();
           q1.pop();
           int hd1 = q2.front();
           q2.pop();
           
           mp1.insert({hd1, curr->data});
           
           if(curr->left != NULL)
           {
               q1.push(curr->left);
               q2.push(hd1-1);
           }
           if(curr->right != NULL)
           {
               q1.push(curr->right);
               q2.push(hd1+1);
           }
       }
   }
   for(auto it = mp1.begin(); it != mp1.end(); ++it)
        cout << it->second << " ";

}
