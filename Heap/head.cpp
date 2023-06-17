#include <iostream>

void swap(int &x, int &y){
    int temp = &x;
    x = y;
    y = temp;
}

struct node{
    int data;
    node* right;
    node* left;
}

class heap{

    private:
        node* root;
    
    public{

        heap(){
            root = nullptr;
            root-> right = nullptr;
            root-> left = nullptr;
        }

    }

}

int main(){
    return 0;
}