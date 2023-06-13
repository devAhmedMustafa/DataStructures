#include <iostream>
#include <vector>
using namespace std;
#define size 10

class stack{

    private:
        int stack_[size];
        int top;

    public:

        stack(){
            top = -1;
        }

        void push(int val){
            if( top == size-1 ) cout<<"Stack is full";
            else{
                top++;
                stack_[top] = val;
            }

        }

        void pop(){
            if(top == -1) cout<< "Stack is empty";
            else{
                top--;
            }
        }

        void display(){
            int tmp = top;
            while ( tmp >= 0 ){
                cout<<stack_[tmp];
                tmp--;
            }
        }

        int peek(){
            return stack_[top];
        }


};


int main(){

    stack stk1;
    stk1.push(1);
    stk1.push(2);
    stk1.push(3);
    stk1.push(4);
    stk1.display();

    return 0;
}