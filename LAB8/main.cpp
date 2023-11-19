#include <iostream>

using namespace std;

template <class H>
class Stack{
    private:
        int top;
        H *arr;
        int Size;
    public:
        Stack(int Size){
            this->Size = Size;
            this->top = -1;
            arr = new H[Size]{0};
        }

        void push(H item){
            if(top == Size-1){
                extend();
                top++;
                arr[top] = item;
            }
            else{
                top++;
                arr[top] = item;
            }
        }

        int pop(void){
            if(top > -1){
                H x;
                x = arr[top];
                top--;
                cout<<x<<endl;
                return x;
            }
            else{
                cout<<"Stack is empty, you can't pop any element"<<endl;
            }
        }

        void extend(){
            int *temp = new int[Size*2];
            for(int i = 0;i<Size;i++){
                temp[i] = arr[i];
            }
            delete arr;
            arr = temp;
            Size = Size*2;
        }

        void printSize()
        {
            cout<<Size<<endl;
        }

        //friend void viewStackContent(Stack s);
};//end class
/*
void viewStackContent(Stack s){
    for(int i=0;i<=s.top;i++){
        cout<<s.pop()<<endl;
    }
}
*/

int main(){


    Stack<int> s1(2);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    //s1.pop();
    //s1.pop();

    return 0;
}


