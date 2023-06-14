#include <iostream>
using namespace std;
#define size 10

class queue{

    private:
        int arr[size];
        int front, rear;

    public:
        
        queue(){
            front = -1;
            rear = -1;
        }

        bool is_empty(){
            if(front==(rear+1) || rear == -1 ){
                return true;
            }
            return false;
        }
        bool is_full(){
            if(rear == size-1){
                return true;
            }
            return false;
        }

        void enqueue(int val){
            if (is_empty()){
                front= -1; rear= -1;
                front++;
            }
            if( is_full() ){
                cout<<"Queue is full";
            }
            else{
                rear++;
                arr[rear] = val;
            }

        }

        void enqueue(int arr[], int n){

            if (is_empty()){
                front= -1; rear= -1;
                front++;
            }
            if( is_full() ){
                cout<<"Queue is full";
            }
            else{
                for ( int x=0; x < n; x++ ){
                    rear++;
                    queue::arr[rear] = arr[x];
                }
            }

        }

        void dequeue(){
            if(is_empty()) cout<<"Queue is empty";

            else front++;
        }

        void dequeue_all(){
            if(is_empty())
                cout<<"Queue is empty";

            else{
                for(int i = front; i <= rear; i++){
                    cout<<arr[i]<<"\t";
                }
            }
        }

        int peek(){
            return arr[front];
        }
        

};

int main(){

    queue q;
    int arr[5] = {1,3,432,56,7};

    q.enqueue( arr, 5);
    
    q.dequeue();
    cout<<q.peek();

    return 0;
}