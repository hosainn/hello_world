#include<stdio.h>
#include<stdlib.h>
struct tree_el{
    int val;
    struct tree_el *right,*left;

};
typedef struct tree_el node;

void insert(node **tree,node *item){
    if(!(*tree)){
      *tree =item;
      return ;
    }
    if(item->val<(*tree)->val)
        insert(&(*tree)->left,item);
    else if((item->val)>(*tree)->val)
       insert(&(*tree)->right,item);

}
void printout(node * tree) {
   if(tree->left) 
      printout(tree->left);
   printf("%d\n",tree->val);
   
   if(tree->right) 
     printout(tree->right);
}

int main(){
node *curr,*root;
int i;
root=NULL;
printf("Enter 10 value\n");
for(i=0;i<10;i++){
curr=(node*)malloc(sizeof(node));
curr->left=curr->right=NULL;
scanf("%d",&curr->val);
insert(&root,curr);
}
 printout(root);
return 0;
}
