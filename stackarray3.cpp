#include <iostream>
using namespace std;
int stack[100], ch, n, top, x, i, val;
void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack is Overflow" << endl;
    }
    else
    {
       
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if (top <= -1)
    {
        cout << "Stack is Underflow" << endl;
    }
    else
    {
        cout << "The popped elements is" << endl;
        cout << stack[top] << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout <<"The elements in STACK are : " << endl;
        for (i = top; i >= 0; i--){
		
            cout << "\t |"<<stack[i]<<"|" << endl;
            cout << "\t ---"<<endl;
        }
        cout << "\n"
             << endl;
        cout << "Press Next choice \n"
             << endl;
    }
    else
    {
        cout << "The STACK is empty \n"
             << endl;
    }
}
void Top()
{
    cout << "The top element is " << stack[top] << "\n";
}
void IsEmpty()
{
    if (top == -1)
    {
        cout << "The top element is Empty\n";
    }
    else
    {
        cout << "The top element is NOT Empty\n";
    }
}
void countElements()
{
    cout << "The total count of elements in stack are : " << top + 1 << "\n";
}
int main()
{
    top = -1;
    cout << "Enter the size of STACK[Max=100]:" << endl;
    cin >> n;
    do
    {
    cout << "\n STACK OPERATIONS USING ARRAY" << endl;
   
    cout << "\n 1.Push \n 2.Pop \n 3.Display \n 4.Top \n 5.IsEmpty \n 6.Count \n 7.EXIT" << endl;
    
        cout << "Enter the choice :" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be pushed :" << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            Top();
            break;
        }
        case 5:
        {
            IsEmpty();
            break;
        }
        case 6:
        {
            countElements();
            break;
        }
        case 7:
        {
            cout << "Exit \n"
                 << endl;
            break;
        }
        default:
        {
            cout << "Invalid Input!, Please Enter a Valid ch(1/2/3/4/5/6/7)" << endl;
        }
        }
    } while (ch != 7);
    return 0;
}


