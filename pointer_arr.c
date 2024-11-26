#include <stdio.h>


int main(){


int arr [] = {20, -90, 45};

int *ptr = arr;        // pointing the first element of the array

printf("%d\n", *ptr);

printf("%d\n", *(ptr+1)); // 2nd element of the array

printf("%ld\n", sizeof(ptr)); // should be %ld

printf("%ld\n", sizeof(arr));



return 0;

}
