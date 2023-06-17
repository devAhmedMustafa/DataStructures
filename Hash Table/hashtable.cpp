#include <iostream>
#include <vector>
using namespace std;
#define size 10
// Collision resolution by chaining.


class hashTable{

    private:
        vector<int> table_[size];

        int h(int n){
            int index = n % size;
            return index;
        }
    
    public:

        void insert(int arr[], int n){
            for(int x=0; x < n; x++){
                insert(arr[x]);
                cout<<arr[x];
            }
        }

        void insert(int val){

            int index = h(val);

            table_[index].push_back(val);
        }

        bool search(int val){

            for ( int i = 0; i < size; i++ ){
                vector<int>::iterator itr;
                int counter = 0;
                for(itr=table_[i].begin(); itr < table_[i].end(); itr++){
                    
                    if(*itr == val){
                        cout<<*itr<<" is Found at index"<<i<<"x"<<counter<<endl;
                        return true;
                    }
                    counter++;
                }
            }

            return false;

        }

};



int main(){

    hashTable t;
    t.insert(11);
    t.insert(1);
    t.insert(10);
    t.search(1);
    t.search(10);

    return 0;
}