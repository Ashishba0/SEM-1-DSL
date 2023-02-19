#include <iostream>
#include <cstdlib>
using namespace std;
struct Node
{
   int data;
   struct Node *link;
};
struct Node *top;
void push(int data)
{
   struct Node *temp;
   temp = new Node();
   if (!temp)
   {
      cout << "\n Heap Overflow";
      exit(1);
   }
   temp->data = data;
   temp->link = top;
   top = temp;
}
void IsEmpty()
{
   if (top == NULL)
   {
      cout << "STACK IS EMPTY" << endl;
   }
   else
   {
      cout << "STACK IS NOT EMPTY" << endl;
   }
}

int topElement()
{
   if (top != NULL)
   {
      cout << "Top Element is " << top->data << " \n"
           << endl;
   }
   else
   {
      cout << "Not found / nulled" << endl;
   }
}
void countElements()
{
   int count = 0;
   Node *temp = top;
   while (temp != NULL)
   {
      count++;
      temp = temp->link;
   }
   cout << "TOTAL COUNT IS " << count << "\n"
        << endl;
}
void pop()
{
   struct Node *temp;
   if (top == NULL)
   {
      cout << "\nStack Underflow" << endl;
   }
   else
   {
      temp = top;
      top = top->link;
      temp->link = NULL;
      free(temp);
      cout << "\n Element is popped out from stack" << endl;
   }
}
void display()
{
   struct Node *temp;
   if (top == NULL)
   {
      cout << "\n Stack Underflow";
      exit(1);
   }
   else
   {
      temp = top;
      cout << "Elements in stack are \n" << endl;
      while (temp != NULL)
      {
         cout << "\t |"<<temp->data<<"|" << "\n";
         cout << "\t ---"<<endl;
         temp = temp->link;
      }
   }
}
int main()
{
	int ch;
	do
   {
    
   int val;
   cout << "\n STACK OPERATIONS USING LINKED LIST" << endl;
   
   cout << " 1.Push \n 2.Pop \n 3.Display \n 4.Top \n 5.IsEmpty \n 6.Count \n 7.EXIT" << endl;
     cout << "\n Enter the Choice :" << endl;
      cin >> ch;
      switch (ch)
      {
      case 1:
      {
         cout << "Enter value to be pushed in stack :" << endl;
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
         topElement();
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
         cout << "Invalid Input ! Enter a Valid ch(1/2/3/4/5/6/7)" << endl;
      }
      }
   } while (ch != 7);
   return 0;
}


