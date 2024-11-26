#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cblas.h>
#include <time.h>

int main(int argc, char *argv[])


{

int n = atoi(argv[1]);

double  *x = malloc(sizeof(double)*n);
double  *y = malloc(sizeof(double)*n);

clock_t start_1 = clock();

double inner_prod = 0.0;
for(int i=0; i<n; i++){

x[i] = pow(-1, i);
y[i] = pow(-1, i+1);
inner_prod += x[i]*y[i];
}

clock_t end_1 = clock();

double t = (double)(end_1 - start_1)/CLOCKS_PER_SEC;

printf("time: %lf\n", t);
double inner_cblas = cblas_ddot(n,x,1,y,1);

//printf("%lf", inner_cblas);

//for (int j=0; j<5; j++){
//printf("%f", x[j]);
//}
return 0;

}
