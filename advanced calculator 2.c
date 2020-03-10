#include <stdio.h>
#include <stdlib.h>
void add(int num1, int num2);
void subtract(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);

int main()
{
  int x, y;
  char choice;
  void (*op[4])(int, int);


  printf("Select two numbers: \n");
  scanf(" %d %d", &x, &y);
  printf("Select an operator: \n");
  scanf(" %c", &choice);

  if(choice == '+' || choice == '-' || choice == '*' || choice == '/')
  {
    op['+'] = add;
    op['-'] = subtract;
    op['*'] = multiply;
    op['/'] = divide;
    op[choice](x, y);
  }
  else
  {
      printf("Invalid operator");
  }


/*    switch(choice)
    {
        case '+':
            choice = 0;
            break;
        case '-':
            choice = 1;
            break;
        case '*':
            choice = 2;
            break;
        case '/':
            choice = 3;
            break;
        default:{
            printf("Invalid operator\n");
        }

    }
*/


  return 0;
}

void add (int x, int y) {
    printf("The result is %d", x + y);
}

void subtract (int x, int y) {
    printf("The result is %d", x - y);
}

void multiply (int x, int y) {
    printf("The result is %d", x * y);
}

void divide (int x, int y) {
  if(x == 0 && y == 0)
    {
        printf("Undefined");
    }
  else if (y == 0)
    {
        printf("%d cannot be divided by 0", x);
    }
  else
        printf("The result is %d", x / y);
}


