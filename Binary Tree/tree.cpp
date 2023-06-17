#include <iostream>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

class binaryTree{

    private:
        static node* root;

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

        node* search(int val, node* current){

            if(current->data < val){
                return current-> right;
            }
            if(current->data > val){
                return current-> left;
            }
            return nullptr;
        }

    public:

        binaryTree(){
            root = nullptr;
        }

        void add(int val){
            node* newnode = new node;
            newnode->data = val;
            newnode->right = nullptr; newnode->left = nullptr;
            if (root == nullptr){
                root = newnode;
            }
            else{
                node* current = root;
                move(newnode, current, val);
            }
        }

        

        void search(int val){
            node* current = search(val, root);

            if( current == nullptr ){
                cout<<"Found";
            }

            else{
                search(val, current);
            }
            
        }

        


};

int main(){

    binaryTree tree;
    tree.add(2);

    return 0;
}