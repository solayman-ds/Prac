#include <stdio.h>

int main()

{

int var = 10;

int *ptr; //( * ) dereferencing operator, unary operator

ptr = &var;

printf("Pointer Address: %p\n", ptr);
printf("The Value: %d\n", *ptr);


return 0;

}
