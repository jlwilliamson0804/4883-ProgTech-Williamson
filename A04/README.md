## 2 Binary search tree problems on UVA


### 10821 Constructing a BST
  Wants the coder to construct a BST so that
  the tree is balanced.
  
  
  
### 12347 Create a BST
  Given a good input order for a BST
  Then print in Post-order traversal


#### A good example of a BST along with helpful information
https://www.softwaretestinghelp.com/binary-search-tree-in-cpp/

```cpp
//declaration for new bst node  
struct bstnode 
{ 
int data; 
struct bstnode *left, *right; 
}; 
  
// create a new BST node 
struct bstnode *newNode(int key) 
{ 
struct bstnode *temp =  new struct bstnode(); 
temp->data = key; 
temp->left = temp->right = NULL; 
return temp; 
} 
/* insert a new node in BST with given key  */
struct bstnode* insert(struct bstnode* node, int key) 
{ 
    //tree is empty;return a new node
if (node == NULL) return newNode(key); 
   
    //if tree is not empty find the proper place to insert new node
if (key < node->data) 
node->left  = insert(node->left, key); 
else
node->right = insert(node->right, key); 
   
    //return the node pointer
return node; 
```
