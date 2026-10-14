#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *start = NULL;
void insertBeginning()
{
int data;
struct Node *newNode;
printf("Enter data: ");
scanf("%d", &data);
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = start;
start = newNode;
printf("Node inserted at beginning.\n");
}
void insertEnd()
{
int data;
struct Node *newNode, *temp;
printf("Enter data: ");
scanf("%d", &data);
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;if (start == NULL)
{
start = newNode;
}
else
{
temp = start;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}
printf("Node inserted at end.\n");
}
void insertPosition()
{
int data, pos, i;
struct Node *newNode, *temp;
printf("Enter data: ");
scanf("%d", &data);
printf("Enter position: ");
scanf("%d", &pos);
if (pos == 1)
{
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = start;
start = newNode;
printf("Node inserted.\n");
return;
}temp = start;
for (i = 1; i < pos - 1 && temp != NULL; i++)
{
temp = temp->next;
}
if (temp == NULL)
{
printf("Invalid position.\n");
return;
}
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = temp->next;
temp->next = newNode;
printf("Node inserted.\n");
}
void deleteNode()
{
int data;
struct Node *temp, *hold;
printf("Enter data to delete: ");
scanf("%d", &data);
if (start == NULL)
{
printf("List is empty.\n");
return;
}
/* If first node is to be deleted */
if (start->data == data)
{
temp = start;start = start->next;
free(temp);
printf("Node deleted.\n");
return;
}
temp = start;
while (temp->next != NULL && temp->next->data != data)
{
temp = temp->next;
}
if (temp->next == NULL)
{
printf("Data not found.\n");
return;
}
hold = temp->next;
temp->next = hold->next;
free(hold);
printf("Node deleted.\n");
}
void search()
{
int data, pos = 1;
struct Node *temp;
printf("Enter data to search: ");
scanf("%d", &data);
temp = start;
while (temp != NULL)
{
if (temp->data == data)
{
printf("Data found at position %d.\n", pos);return;
}
temp = temp->next;
pos++;
}
printf("Data not found.\n");
}
void display()
{
struct Node *temp;
if (start == NULL)
{
printf("List is empty.\n");
return;
}
temp = start;
printf("Linked List: ");
while (temp != NULL)
{
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
int main()
{
int choice;
while (1)
{printf("\n--- Singly Linked List ---\n");
printf("1. Insert at Beginning\n");
printf("2. Insert at End\n");
printf("3. Insert at Position\n");
printf("4. Delete Node\n");
printf("5. Search Node\n");
printf("6. Display List\n");
printf("7. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
insertBeginning();
break;
case 2:
insertEnd();
break;
case 3:
insertPosition();
break;
case 4:
deleteNode();
break;
case 5:
search();break;
case 6:
display();
break;
case 7:
exit(0);
default:
printf("Invalid choice.\n");
}
}
return 0;
}
--- Single Linked List ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete Node
5. Search Node
6. Display List
7. Exit
Enter your choice: 1
Enter data: 10
Node inserted at beginning.
--- Singly Linked List ---
1. Insert at Beginning2. Insert at End
3. Insert at Position
4. Delete Node
5. Search Node
6. Display List
7. Exit
Enter your choice: 2
Enter data: 30
Node inserted at end.
--- Singly Linked List ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete Node
5. Search Node
6. Display List
7. Exit
Enter your choice: 2
Enter data: 20
Node inserted at end.
--- Singly Linked List ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete Node
5. Search Node
6. Display List
7. Exit
Enter your choice: 6
Linked List: 10 -> 30 -> 20 -> NULL--- Singly Linked List ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete Node
5. Search Node
6. Display List
7. Exit
Enter your choice: 5
Enter data to search: 30
Data found at position 2.
--- Singly Linked List ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete Node
5. Search Node
6. Display List
7. Exit
Enter your choice: 4
Enter data to delete: 30
Node deleted.
--- Singly Linked List ---
1. Insert at Beginning
2. Insert at End
3. Insert at Position
4. Delete Node
5. Search Node
6. Display List7. Exit
Enter your choice: 6
Linked List: 10 -> 20 -> NULL

