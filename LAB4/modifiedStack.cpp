#include <iostream>

using namespace std;


class Stack
{
private:
    int top;
    int Size;
    int *arr;
public:
    Stack(int Size=0)
    {
        this->Size = Size;
        this->top = -1;
        arr = new int[Size] {0};
    }
    // deep copy
     Stack(Stack& s){
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
            //cout<<x<<endl;
            return x;
        }
        else
        {
            cout<<"Stack is empty, you can't pop any element"<<endl;
        }
    }

    Stack operator = (Stack& s){
        if(this->Size == s.Size){
            this->top = s.top;
            for(int i=0; i<=top; i++){
                arr[i]=s.arr[i];
            }
        }
        else{
            this->top = s.top;
            this->Size = s.Size;
            delete []arr;
            arr = new int[s.Size];
            for(int i=0; i<=top; i++){
                arr[i]=s.arr[i];
            }
        }
    }


    Stack operator + (Stack& s){
        int newSize = this->Size + s.Size;

    }

    friend void viewStackContent(Stack s);
};//end class

void viewStackContent(Stack s)
{
    int temp = s.top;
    for(int i=0; i<=temp; i++)
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
    Stack s2(5);

    s1.push(5);
    s1.push(7);
    s1.push(12);
    s1.push(15);

    s2 = s1;
    s2.push(32);
    viewStackContent(s2);
    //s1.pop();
    //int x = 0;
    //x = s1.pop();
    //cout<<x;

    //viewStackContent(s1);
    return 0;
}


