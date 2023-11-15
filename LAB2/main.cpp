#include <iostream>

using namespace std;

class Queue{
    private:
        int top;
        int bottom;
        int *arr;
        int Size;
    public:
        Queue(int Size){
            this->Size = Size;
            this->top = -1;
            this->bottom = -1;
            arr = new int[Size]{0};
        }

        void enqueue(int item){
            if(bottom < Size-1){
                bottom++;
                arr[bottom] = item;
            }
            else{
                cout<<"Queue is full, you can't add another element";
            }
        }
        int dequeue(void){
            if(top == -1 && bottom == -1){
               cout<<"Queue is empty, you can't pop any element";
            }
            else if(bottom == -1 ){
               cout<<"Queue is empty, you have popped all the elements";
            }
            else{
                int x = 0;
                top++;
                bottom--;
                cout<<bottom<<endl;
                x = arr[top];
                return x;
            }
        }
        friend void viewContent(Queue q);
};//end class

void viewContent(Queue q){
    for(int i=q.top; i<=q.bottom;i++){
        cout<<q.dequeue()<<endl;
    }
}
int main(){

    Queue q1(5);
    q1.enqueue(1);
    q1.enqueue(32);
    q1.dequeue();
    q1.dequeue();

    //viewContent(q1);
    /*
    int x = 0;
    x = q1.dequeue();
    cout<<x<<endl;
    int y = 0;
    y = q1.dequeue();
    cout<<y<<endl;
    q1.dequeue();*/
    return 0;
}
