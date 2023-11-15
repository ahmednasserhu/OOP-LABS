#include <iostream>

using namespace std;


class Stack
{
private:
    int top;
    int Size;
    int *arr;
public:
    Stack(int Size)
    {
        this->Size = Size;
        this->top = -1;
        arr = new int[Size] {0};
    }
    // deep copy
     Stack(Stack s){
        Size = s.Size;
        top = s.top;
        arr = new int[Size]{0};
        for(int i=0;i<=top;i++){
            arr[i] = s.arr[i];
        }
      }

    void push(int item)
    {
        if(top < Size-1)
        {
            top++;
            arr[top] = item;
        }
        else
        {
            cout<<"Stack is full, you can't add another element";
        }
    }
    int pop(void)
    {
        if(top > -1)
        {
            int x = 0;
            x = arr[top];
            top--;
            cout<<x<<endl;
            return x;
        }
        else
        {
            cout<<"Stack is empty, you can't pop any element"<<endl;
        }
    }
    friend void viewStackContent(Stack s);
};//end class

void viewStackContent(Stack s)
{
    for(int i=0; i<=s.top; i++)
    {
        cout<<s.pop()<<endl;
    }
}

void copyFunction(Stack s)
{
    s.pop();
    s.pop();
    s.pop();
}


int main()
{
    Stack s1(4);
    s1.push(5);
    s1.push(7);
    s1.push(12);
    copyFunction(s1);
    s1.push(33);
    cout<<endl;
    s1.pop();

    //s1.pop();
    //int x = 0;
    //x = s1.pop();
    //cout<<x;

    //viewStackContent(s1);
    return 0;
}


