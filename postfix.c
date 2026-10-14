#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int val) {
if (top == MAX - 1) {
printf("Stack Overflow\n");
exit(1);
}
stack[++top] = val;
}
int pop() {
if (top == -1) {
printf("Invalid postfix expression (stack underflow)\n");
exit(1);
}
return stack[top--];
}
int evaluatepostfix(const char *exp) {
for (int i = 0; exp[i] != '\0'; i++) {
char ch = exp[i];
// Skip whitespace
if (isspace(ch))
continue;
// If operand (single digit), push to stack
if (isdigit(ch)) {
push(ch - '0');
}
// If operator, pop two elements and evaluate
else {
int val2 = pop();
int val1 = pop();
switch (ch) {
case '+':
push(val1 + val2);
break;
case '-':
push(val1 - val2);
break;
case '*':
push(val1 * val2);
break;
case '/':
push(val1 / val2);
break;
default:
printf("Invalid operator: %c\n", ch);
exit(1);
}
}
}
return pop();
}
int main() {
char postfix[] = "53+82/*";
// Represents: (5 + 3) * (8 / 2)
int result = evaluatepostfix(postfix);
printf("Postfix Expression: %s\n", postfix);
printf("Evaluation Result: %d\n", result);
return 0;
}

