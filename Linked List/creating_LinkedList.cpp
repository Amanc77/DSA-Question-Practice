#include<iostream>
using namespace std;

void create();
void display();

struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;

// main
int main()
{
    int choice;

    while (1)
    {
        cout << "1. For create" << endl;
        cout << "2. For Display" << endl;
        cout << "3. For exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            cout << "Exiting program" << endl;
            return 0;
        default:
            cout << "Wrong input " << endl;
            break;
        }
    }

    return 0;
}

// creating of linked list
void create()
{
    struct node *temp, *ptr;
    temp = new node;
    cout << "Enter value to store in linked list: ";
    cin >> temp->info;
    temp->next = NULL;

    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

// display
void display()
{
    struct node *ptr;
    cout << "Elements in the list are: ";
    for (ptr = start; ptr != NULL; ptr = ptr->next)
    {
        cout << ptr->info << " ";
    }
    cout << endl;
}
