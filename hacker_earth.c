#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
struct node
{
    struct node *left,*right;
    int data;
};

struct node* createnode(int data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    return temp;

}
static int level=1;
static int i;
struct node* create_bintree(struct node* root,int data,int* level_arr)
{
    if(root==NULL)
      {   level_arr[i++]=level;
          //printf("%d",level);
          level=1;
          root=createnode(data);
          return root;
      }

     else if(root->data>data)
      {++level;
     // printf("inside left sub tree %d\n",root->data);
      root->left=create_bintree(root->left,data,level_arr);}

     else
      {++level;
     // printf("inside right sub tree %d\n",root->data);

      root->right=create_bintree(root->right,data,level_arr);}

}
int* solve (int* A , int N) {
    // Return an array of N elements, ith element representing level of A[i]
    // Write your code here
    struct node* root=NULL;
    int arr[N],i;
    root=create_bintree(root,A[0],arr);
    for(i=1;i<N;i++)
     create_bintree(root,A[i],arr);
     for(i=0;i<N;i++)
        printf("arr =%d",arr[i]);
    printf("root->left %d",root->left->data);
}

int main() {
    int out_n;
    int N;
    scanf("%d", &N);
    int i_A;
    int *A = (int *)malloc(N*sizeof(int));
    for(i_A=0; i_A<N; i_A++)
    	scanf("%d", &A[i_A]);

    solve(A, N);

    //printf("%d", out_[0]);
    //for(int i_out_=1; i_out_<N; i_out_++)
    	//printf(" %d", out_[i_out_]);
}
