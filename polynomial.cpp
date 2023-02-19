#include <bits/stdc++.h>
using namespace std;

// Represents the single polynomial
class Node
{
public:
    int x;
    int y;
    Node *next;

    Node(int x, int y, Node *next)
    {
        this->x = x;
        this->y = y;
        this->next = next;
    }
};

// Simply Prints the List to the Screen
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->x << "x"
             << "^" << head->y << " ";
        head = head->next;
    }
    cout << endl;
}

// Creates a new node and inserts it into the end
// of the head node
void insertNode(Node *head, int x, int y)
{
    Node *newNode = new Node(x, y, nullptr);
    while (head->next != nullptr)
    {
        head = head->next;
    }

    head->next = newNode;
}

// Function to add both list.
void add(Node *first, Node *second)
{

    // Resultant list
    Node *result = nullptr;

    // Loop to add both the list
    // until one of the list reaches to its end
    while (first && second)
    {

        // saves current result
        int x, y;

        // if power of both the polynomial is same
        // we simply add their coefficient and increment the
        // pointer to next node
        if (first->y == second->y)
        {
            x = first->x + second->x;
            y = first->y;
            first = first->next;
            second = second->next;
        }

        // if power of first polynomial is greater than
        // the second one then save its coefficient and power
        // into the result and increment its pointer
        else if (first->y > second->y)
        {
            x = first->x;
            y = first->y;
            first = first->next;
        }

        // if power of second polynomial is greater than
        // the first one. then save its coefficient and power
        // into the result and increment its pointer
        else
        {
            x = second->x;
            y = second->y;
            second = second->next;
        }

        // if resultant list is empty we create a new node
        // else we simply add the value at the end of our resultant list
        if (result == nullptr)
            result = new Node(x, y, nullptr);
        else
            insertNode(result, x, y);
    }

    // After completion of the above loop there might be a possibility
    // that one of the two polynomial lists have some unchecked data
    // below two loops are just adding the remaining data into our
    // resultant list
    while (first)
    {
        if (result == nullptr)
            result = new Node(first->x, first->y, nullptr);
        else
            insertNode(result, first->x, first->y);
        first = first->next;
    }

    while (second)
    {
        if (result == nullptr)
            result = new Node(second->x, second->y, nullptr);
        else
            insertNode(result, second->x, second->y);
        second = second->next;
    }

    // printing the resultant list
    printList(result);
}

int main()
{

    // First polynomial
    Node *head = new Node(5, 2, nullptr);
    insertNode(head, 4, 1);

    // second polynomial
    Node *head2 = new Node(5, 2, nullptr);
    insertNode(head2, 2, 1);

    // our algorithm
    add(head, head2);

    return 0;
}