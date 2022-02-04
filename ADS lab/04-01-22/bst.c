#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;

struct node *getNewNode(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->key   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node *insert(struct node *root, int val)
{
    if(root == NULL)
  	return getNewNode(val);
    if(root->key <= val)
        root->right = insert(root->right,val);
    else if(root->key > val)
        root->left = insert(root->left,val);

    return root;
}
void display(struct node *temp,int level)
{
	int i;
	if ( temp!=NULL )
	{
		display(temp->right, level+1);
		printf("\n");
		for (i = 0; i < level; i++)
			printf("    ");
		printf("%d", temp->key);
		display(temp->left, level+1);
	}
}
int getRightMin(struct node *root)
{
    struct node *temp = root;

    while(temp->left != NULL){
    	temp = temp->left;}

    return temp->key;
}
void search (struct node *temp,int item)
{
if(item==temp->key)
{
printf("element found");
return;
}
else if((item<temp->key)&&(temp->left==NULL))
{
printf("element not found");
return;
}
else if((item<temp->key)&&(temp->left!=NULL))
{
search(temp->left,item);
}
else if((item>temp->key)&&(temp->right==NULL))
{
printf("element not found");
return;
}
else if((item>=temp->key)&&(temp->right!=NULL))
{
search(temp->right,item);
}
}
struct node *removeNode(struct node *root, int val)
{

    if(root == NULL){
        return NULL;
       }

    if(root->key < val)
        root->right = removeNode(root->right,val);

    else if(root->key > val)
        root->left = removeNode(root->left,val);

    else
    {

        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        else if(root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }

        else if(root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        else
        {
            int rightMin = getRightMin(root->right);
            root->key = rightMin;
            root->right = removeNode(root->right,rightMin);
        }

    }

    return root;
}


void inorder(struct node *root)
{
    if(root == NULL){
        return;
      }
    inorder(root->left);
    printf("%d ",root->key);
    inorder(root->right);
}

int main()
{

int item;
     int c;
while(1)
{
printf("\n1.insert\n2.delete\n3.inordertraversal\n4.search\n5.display\n6.exit\n");
printf("enter the case number:");
scanf("%d",&c);
switch(c)
{
case 1:printf("\n Enter the data to be inserted: ");
    	scanf("%d",&item);
    	root = insert(root,item);
    	break;
case 2: printf("\n Enter the data to be deleted: ");
   	 scanf("%d",&item);
    	root = removeNode(root,item);
	break;
case 3:inorder(root);
	break;
case 4:printf("\n enter the Key to be searched: ");
	scanf("%d",&item);
	search(root,item);
	break;
case 5:display(root,1);
	break;
case 6:exit(0);
	break;
}
}

    printf("\n");

    return 0;
}
