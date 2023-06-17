#include <iostream>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
}

class binaryTree{

    private:
        node* root;

    public:

        binaryTree(){
            root = nullptr;
        }

        void add(int val, node* current = root){
            node* newnode = new node;
            newnode->data = val;
            newnode->right = nullptr; newnode->left = nullptr;
            if (root == nullptr){
                root = newnode;
            }
            else{
                move(newnode, current, val);
            }
        }

        void move(node* newnode, node* current, int val){
            if(newnode->data < current->data){
                    if(current->right == nullptr){
                        current->right = newnode;
                    }
                    else{
                        move(newnode, current->right, val);
                    }
                }
                else if(newnode->data > current->data){
                    if(current->left == nullptr){
                        current->left = newnode;
                    }
                    else{
                        move(newnode, current->left, val);
                    }
                }
        }

        node* search(int val, node* current = root){
            if(current->data == val){
                return current;
            }
            else if(current->data < val){
                search(int val, current-right,);
            }
            else if(current->data)
        }


}

int main(){



    return 0;
}