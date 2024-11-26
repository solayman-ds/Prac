#include <stdio.h>


//~$ gcc -o arg arg.c
//~$ ./arg 2 4 5 76
//The number of arguments: 5
//The argument: 0  ./arg
//The argument: 1  2
//The argument: 2  4
//The argument: 3  5
//The argument: 4  76

int main(int argc, char *argv[])

{

printf("The number of arguments: %d\n", argc);

for(int i=0; i< argc; i++){

printf("The argument: %d  %s\n", i, argv[i]);
}


return 0;

}
