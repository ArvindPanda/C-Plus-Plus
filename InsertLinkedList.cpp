#include <iostream>

using namespace std;

#include "node.cpp"

 void insertNode(Node* head, int i , int data){
     Node* newNode = new Node(data);
     Node* temp1 = head;
     Node* temp2 = head;
     for (int k =0; k <i-1 ;k++){
         temp1 = temp1 -> next;
     }
    
     for (int k =0; k <i;k++){
        temp2= temp2 -> next;
     }
     temp1 -> next = newNode;
     newNode -> next = temp2;
    


 }

















Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;

    while (data != -1)
    {

        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {

            Node *temp = head;
            while (temp -> next != NULL)
            {
              temp= temp ->next;
            }
            temp ->next = newNode;
        }

        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    // Node n1(10);
    // Node n2(20);
    // Node n3(30);
    // Node n4(40);
    // Node n5(50);

    // Node *head = &n1;

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    Node *head = takeInput();
    insertNode(head, 2 , 99);

    // cout << &n1 << endl;
    print(head);
    // cout << head << endl;
    return 0;
}