#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *left;
node *right;
};
node *create(int item)
{
node *r=new node;
r->data=item;
r->left=NULL;
r->right=NULL;
return r;
}
void add_left(node *note,node *child)
{
note->left=child;
}
void add_right(node *note,node *child)
{
note->right=child;
}
node *tree()
{
node *two=create(2);
node *seven=create(7);
node *nine=create(9);
node *one=create(1);
node *six=create(6);
node *five=create(5);
node *eight=create(8);
node *ten=create(10);
node *four=create(4);
node *three=create(3);
add_left(two,seven);
add_right(two,nine);
add_left(seven,one);
add_right(seven,six);
add_left(six,five);
add_right(six,ten);
add_right(nine,eight);
add_left(eight,three);
add_right(eight,four);
return two;
}
void preorder(node *note)
{
cout<<note->data<<endl;
if(note->left!=NULL)
{
preorder(note->left);
}
if(note->right!=NULL)
{
preorder(note->right);
}
}
void postorder(node *note)
{
if(note->left!=NULL)
{
postorder(note->left);
}
if(note->right!=NULL)
{
postorder(note->right);
}
cout<<note->data<<endl;
}
void inorder(node *note)
{
if(note->left!=NULL)
{
postorder(note->left);
}
cout<<note->data<<endl;

if(note->right!=NULL)
{
postorder(note->right);
}
}


int main()
{
node *create=tree();
//preorder(create);
//postorder(create);
inorder(create);
}