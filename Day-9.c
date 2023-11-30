
//Unit-3 stack push pop concepts unable find in unit-3
/*
#include <stdio.h>

int stack[100], choice, n, top, x, i; // global declarations

void push(void);
void pop(void);
void display(void);

int main()
{
    top = -1; // Initialize the top of the stack to -1
    printf("\n enter the size of the stack:");
    scanf("%d", &n); // Read the size of the stack from the user
    printf("\n\t stack operations using Array");
    printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");
    do
    {
        printf("\n enter the choice:");
        scanf("%d", &choice); // Read the user's choice
        switch (choice)
        {
            case 1:
            {
                push(); // Call the push function
                break;
            }

            case 2:
            {
                pop(); // Call the pop function
                break;
            }
            case 3:
            {
                display(); // Call the display function
                break;
            }

            case 4:
            {
                printf("\n\t Exit POINT");
                break;
            }
            default:
            {
                printf("\n\t please enter valid choice(1/2/3/4)");
                break;
            }
        }
    } while (choice != 4); // Continue until the user chooses to exit

    return 0;
}

void push()
{
    if (top >= n - 1)
    {
        printf("\n\t stack is overflow"); // Check if the stack is full
    }
    else
    {
        printf("\n\t enter the element to push:");
        scanf("%d", &x); // Read the element to push from the user
        top++;
        stack[top] = x; // Push the element onto the stack
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("\n\t stack is underflow"); // Check if the stack is empty
    }
    else
    {
        printf("\n\t the popped element is %d", stack[top]); // Print the top element of the stack
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        printf("\n\t the stack elements are:"); // Check if the stack is not empty
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]); // Print the elements of the stack in reverse order
            printf("\n press Next Choice");
        }
    }
    else
    {
        printf("\n\t the stack is empty"); // Print if the stack is empty
    }
}
*/

//2. Application of stacks

/*
// 1.expame of presedence chart
Here is a table that shows the precedence of all of the operators in C:

|Operator|Precedence|
|:-|:-|
|()|High|
|^ (exponentiation)|High|
|* (multiplication)|Medium|
|/ (division)|Medium|
|% (modulus)|Medium|
|+ (addition)|Low|
|- (subtraction)|Low|
|= (assignment)|Low|

*/
/*
// Example 1:
int main() {
  int a = 5, b = 3, c = 10;
  int result;

  // Multiplication and division have higher precedence than addition and subtraction.
  result = a + b * c; // result will be 35

  printf("The result is %d\n", result);

  return 0;
}
// Example 2:
int main() {
  int a = 5, b = 3, c = 10;
  int result;

  // Parentheses have the highest precedence.
  result = (a + b) * c; // result will be 20

  printf("The result is %d\n", result);

  return 0;
}
// Example 3:
int main() {
  int a = 5, b = 3, c = 10;
  int result;

  // Exponentiation has the highest precedence.
  result = a ^ b * c; // result will be 125

  printf("The result is %d\n", result);

  return 0;
}

*/


