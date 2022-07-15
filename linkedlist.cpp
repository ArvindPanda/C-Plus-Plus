#include <iostream>
using namespace std;

#include "node.cpp"

Node *takeInput()
{
   int num;
   Node *head = NULL;
   cin >> num;
   while (num != -1)
   {

      
      cout << "Enter the data for node: " << endl;
      Node *newNode = new Node(num);
      if (head == NULL)
      {
         head = newNode;
      }
      else
      {
         Node *temp = head;
         while (temp->next != NULL)
         {
            temp = temp->next;
         }
         temp->next = newNode;
      }

      cin >> num;
   }
   return head;
}
void print(Node *head)
{
   Node *temp = head;
   int i = 1;
   do
   {
      
      cout << "The " << i << "st "
           << "node is: " << temp->data << endl;
      temp = (temp->next);
      i++;
   } while (temp != NULL);
}

int main()
{
 Node* head = takeInput();
 print(head);
   // Statically

   // Node n1(1);
   // Node *head = &n1;
   // Node n2(2);
   // n1.next = &n2;

   //  cout << n1.data << " " << n2.data << endl;
   //  cout << head -> data << endl;
   // Node n3(3);

   // Node n4(4);

   // Node n5(5);

   // n1.next = &n2;
   // n2.next = &n3;
   // n3.next = &n4;
   // n4.next = &n5;
   // print(head);
   // print(head);

   // Dynamically
   /* Node  *n3 = new Node(30);

      Node *head = n3;
    Node *n4 = new Node(40);
    n3 -> next = n4;  */
}