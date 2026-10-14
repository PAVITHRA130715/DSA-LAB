#include <stdio.h>
#include <stdlib.h>
// Structure for a node
struct Node {
int data;
struct Node *prev;
struct Node *next;
};
struct Node *head = NULL;
// Insert a node at the end
void insert(int data) {
struct Node *newNode, *temp;
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = data;
newNode->prev = NULL;
newNode->next = NULL;
if (head == NULL) {
head = newNode;
} else {
temp = head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
newNode->prev = temp;
}
printf("%d inserted successfully.\n", data);
}
// Delete a node
void deleteNode(int data) {
struct Node *temp = head;
if (head == NULL) {
printf("List is empty.\n");
return;
}
while (temp != NULL && temp->data != data) {
temp = temp->next;
}
if (temp == NULL) {
printf("%d not found.\n", data);
return;
}
// If node is the first node
if (temp == head) {
head = temp->next;
if (head != NULL)
head->prev = NULL;
} else {
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
}
free(temp);
printf("%d deleted successfully.\n", data);
}
// Display from beginning to end
void displayForward() {
struct Node *temp = head;
if (head == NULL) {
printf("List is empty.\n");
return;
}
printf("Forward: ");
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}

printf("\n");
}
// Display from end to beginning
void displayBackward() {
struct Node *temp = head;
if (head == NULL) {
printf("List is empty.\n");
return;
}
// Move to the last node
while (temp->next != NULL) {
temp = temp->next;
}
printf("Backward: ");
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->prev;
}
printf("\n");
}
// Main function
int main() {
int choice, data;
while (1) {
printf("\n--- DOUBLY LINKED LIST ---\n");
printf("1. Insert\n");
printf("2. Delete\n");
printf("3. Display Forward\n");
printf("4. Display Backward\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter data: ");
scanf("%d", &data);
insert(data);
break;
case 2:
printf("Enter data to delete: ");
scanf("%d", &data);
deleteNode(data);
break;
case 3:
displayForward();
break;
case 4:
displayBackward();
break;
case 5:
printf("Program terminated.\n");
exit(0);
default:
printf("Invalid choice.\n");
}
}
return 0;
}
