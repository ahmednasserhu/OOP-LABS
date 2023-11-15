#include <iostream>

using namespace std;


class Stack{
    private:
        int top;
        int Size;
        int *arr;
    public:
        Stack(int Size){
            this->Size = Size;
            this->top = -1;
            arr = new int[Size]{0};
        }
        void push(int item){
            if(top < Size-1){
                top++;
                arr[top] = item;
            }
            else{
                cout<<"Stack is full, you can't add another element";
            }
        }
        int pop(void){
            if(top > -1){
                top--;
                int x = 0;
                x = arr[top];
                return x;
            }
            else{
                cout<<"Stack is empty, you can't pop any element"<<endl;
            }
        }
        friend void viewStackContent(Stack s);
};//end class

void viewStackContent(Stack s){
    for(int i=0;i<=s.top;i++){
        cout<<s.pop()<<endl;
    }
}


int main(){
    Stack s1(4);
    s1.push(5);
    s1.push(7);
    s1.push(12);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    //int x = 0;
    //x = s1.pop();
    //cout<<x;

    //viewStackContent(s1);
    return 0;
}


