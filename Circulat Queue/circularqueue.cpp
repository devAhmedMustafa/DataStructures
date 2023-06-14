#include <iostream>
#define size 10
using namespace std;

class queue{

    private:
        int queue_[size];
        int front, rear;

    public:

        queue(){
            front = -1; rear = -1;
        }

        bool is_empty(){
            if(front==-1&&rear==-1){
                return true;
            }
            return false;
        }

        bool is_full(){
            if(front == 0 && rear == size - 1){
                cout<<rear;
                return true;
            }
            if(front == rear+1 && rear != -1){
                return true;
            }
            return false;
        }

        void enqueue(int val){
            if (is_empty()){
                front = rear = -1;
                front++;
            }
            if(is_full()){
                cout<<"Queue is full";
            }
            else{

                if (rear == size){
                    rear = -1;
                }

                rear++;
                queue_[rear] = val;
            }
        }

        void enqueue(int arr[], int n = size){
            if (is_empty()){
                front = rear = -1;
                front++;
            }
            if(is_full()){
                cout<<"Queue is full";
            }
            else{
                for ( int x=0; x < n; x++ ){
                    rear++;
                    queue_[rear] = arr[x];
                }
            }
        }

        void dequeue(){
            if(is_empty()){
                cout<<"Queue is empty";
            }
        
            else{
                front++;
                if ( front==rear+1 ){
                front = rear = -1;
                }
            }
             
        }

        void display(){
            for(int i = front; i<=rear; i++){
                cout<<queue_[i];
            }
        }

};



int main(){

    queue q1;
    int arr[10] = {1,2,3,4,5,6,7,8,9, 10};
    q1.enqueue(arr, 8);
    q1.display();


    return 0;
}