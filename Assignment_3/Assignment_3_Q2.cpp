#include <iostream>
using namespace std;
class Stack {
private:
    int *arr; 
    int top;  
    int cap; 

public:
    
    Stack(int size = 5) 
    {
        cap= size;
        arr = new int[cap];
        top = -1;
    }

    ~Stack() 
    {
        delete[] arr;
    }

    void push(int value) 
    {
        if (isFull()) 
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into stack\n";
    }

    int pop() 
    {
        if (isEmpty()) 
        {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() 
    {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() 
    {
        return top == -1;
    }

    bool isFull() 
    {
        return top == cap - 1;
    }

    void print() 
    {
        if (isEmpty()) 
        {
           cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; ++i) 
        {
            cout << arr[i] << " ";
        }
      cout << endl;
    }
};

int main() 
{
    Stack stack(4);

    stack.push(11);
    stack.push(12);
    stack.push(13);
    stack.push(14);


    stack.push(6);

    stack.print();

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    stack.print();

    cout << "Top element: " << stack.peek() << endl;

    return 0;
}
