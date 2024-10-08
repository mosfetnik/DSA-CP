#include <bits/stdc++.h>;
using namespace std;

class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack()
    {
        top = -1;
        size = 1000;
        arr = new int[size];
    }
    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    void pop()
    {
        int x = arr[top];
        top--;
    }

    void Top()
    {
        return arr[top];
    }
    int Size()
    {
        return top + 1;
    }
};
int main(){
    Stack s;
    s.push(6);
    s.push(7);
    s.push(68);
    s.push(6);
    s.push(89);
    cout << "toP of stack"<<s.Top() <<endl;
    cout<<"Size of the stack before deleting"
}