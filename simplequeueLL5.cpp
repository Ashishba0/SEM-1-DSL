#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
 node *front = NULL;
 node *rear = NULL;
node *temp;
void Insert(int val)
{
    if (rear == NULL)
    {
        rear = new node;
        rear->next = NULL;
        rear->data = val;
        front = rear;
    }
    else
    {
        temp = new node;
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;
    }
}
void Delete()
{
    temp = front;
    if (front == NULL)
    {
        cout << "Underflow ! \n"
             << endl;
        return;
    }
    else
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
            cout << front->data << endl;
            free(front);
            front = temp;
        }
        else
        {
            cout << front->data  << endl;
            free(front);
            front = NULL;
            rear = NULL;
        }
    }
}
void Display()
{
    temp = front;
    if ((front == NULL) && (rear == NULL))
    {
        cout << "Queue is Empty ! " << endl;
        return;
    }
    cout << "Simple Queue Elements are : \n";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        cout << "\n";
    }
}
int main()
{
    int choice;
    int val;
      do
    {
    cout << "\nSimple Queue implementation using Linked List" << endl;
    cout << " 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n 4.EXIT" << endl;
  
        cout << "Enter the Choice : "   << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter value to be ENQUEUE : " << endl;
            cin >> val;
            Insert(val);
            break;
        }
        case 2:
        {
        	cout << "Elements to be deleted is : " <<endl;
            Delete();
            break;
        }
        case 3:
        {
            Display();
            break;
        }
        case 4:
        {
            cout << "Exit \n"<< endl;
            break;
        }
        default:
        {
            cout << "Invalid Input!, Please Enter a Valid Choice(1/2/3/4) "  << endl;
        }
        }
    } while (choice != 4);
    return 0;
}
