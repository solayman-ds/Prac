#include <stdio.h>
#include <stdlib.h>
#include <omp.h> 


//~$ export OMP_NUM_THREADS=5
//~$ gcc -fopenmp open_mp.c
//~$ ./a.out
//Hello from thread no. 0
//Hello from thread no. 4
//Hello from thread no. 1
//Hello from thread no. 3
//Hello from thread no. 2


int main()

{

#pragma omp parallel
{

int th_id = omp_get_thread_num();

printf("Hello from thread no. %d\n", th_id);

}

return 0;

}
