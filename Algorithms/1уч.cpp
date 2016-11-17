// PostOrder
void postOrder(node *root) {
     if (root!=NULL)  {
          
          postOrder(root->left);
         
          postOrder(root->right);
          cout<<root->data<<" ";
    }

}
// PreOrder
void preOrder(node *root) {
    if (root!=NULL)  {
          cout<<root->data<<" ";
          preOrder(root->left);
          preOrder(root->right);
    }

}
// InOrder
void Inorder(Node *root){
  if(root == NULL) return;
  Inorder(root->left);
  printf("%d ",root->data);
  Inorder(root->right);
}
// Find Maximum
void findMaximum(node *root) {
	while (root) {
		if (root->right == NULL) {
			return root;
		}
		root = root -> right;
	}
}
// Find Minimum
void findMaximum(node *root) {
	while (root) {
		if (root->left == NULL) {
			return root;
		}
		root = root -> left;
	}
}
// Delete
struct Node* Delete(struct Node *root, int data){
  if(root == NULL) return root;
  else if(data < root->data) root->left = Delete(root->left,data);
  else if(data > root->data) root->right = Delete(root->right, data);
  else {
    if(root->left == NULL && root->right == NULL){
      delete root;
      root = NULL;
    } else if(root->left == NULL){
      struct Node *temp = root;
      root = root->right;
      delete temp;
    } else if(root->right == NULL){
      struct Node *temp = root;
      root = root->left;
      delete temp;
    } else{
      struct Node *temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right, temp->data);
    }
  }
  return root;
}