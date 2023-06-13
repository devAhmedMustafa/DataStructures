#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class linked_list{
    private:
        node* head;
        node* tail;
    public:

        linked_list(){
            head = NULL;
            tail = NULL;
        }

        void push(int val){

            node* current = new node;

            current->data = val;
            current->next = NULL;


            if ( head == NULL && tail == NULL ){
                head = current; tail = current;
            }
            else{
                tail->next = current;
                tail = current;
            }
            
        }

        void display(){
            
            node* current = head;

            while ( current != NULL ){

                cout<<current->data<<endl;
                current = current->next;

            }
            cout<<"------------------"<<endl;

        }

        void pop(){

            node* temp = tail;
            node* current = head; 
            while ( current->next != NULL )
            {
                tail = current;
                current = current->next;
            }
            
            tail->next = NULL;
            free(temp);

        }
};

int main(){

    linked_list l1;

    l1.push(4);
    l1.push(2);
    l1.push(7);
    

    l1.display();
    l1.pop();
    l1.display();
    
    return 0;
}