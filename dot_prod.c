#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cblas.h>



//~$ gcc -o dot.o dot_prod.c -lm -lblas
//~$ ./dot.o 5
//-----------------Dot-prod(lib): -5.000000
//Time (lib): 0.000019
//~$ nano dot_prod.c
//~$ gcc -o dot.o dot_prod.c -lm -lblas
//~$ ./dot.o 5
//-----------------
//Dot-prod(lib): -5.000000
//Time (lib): 0.000011
//-------------------
//Dot-prod(Manual): -5.000000
//Time (manual): 0.000004




int main(int argc, char* argv[])

{

int n = atoi(argv[1]);

double *x = malloc(sizeof(double)*n);
double *y = malloc(sizeof(double)*n);


for(int i=0; i<n; i++){
x[i] = pow(-1,i);
y[i] = pow(-1,i+1);
}

clock_t start, end;

start = clock();

double dot_prod_lib = cblas_ddot(n, x, 1, y, 1);

end = clock();

double time_lib = ((double)(end-start))/CLOCKS_PER_SEC;

clock_t strt, endd;

strt = clock();
double dot_prod_man = 0.0;
for(int j=0; j<n; j++){
dot_prod_man += x[j]*y[j];
}
endd = clock();

double time_man = ((double)(endd-strt))/CLOCKS_PER_SEC;

printf("-----------------\n");
printf("Dot-prod(lib): %lf\n", dot_prod_lib);
printf("Time (lib): %lf\n", time_lib);

printf("-------------------\n");
printf("Dot-prod(Manual): %lf\n", dot_prod_man);
printf("Time (manual): %lf\n", time_man);

return 0;
}
