#include <stdio.h>
#include <stdlib.h>

double mult(double *a, double *b){

return (*a)*(*b);
}

void swap(double  *a, double *b){

double temp = *a;
*a = *b;
*b = temp;
}

int main(int argc, char* argv[]){

double  num1  = atoi(argv[1]);
double num2 = atoi(argv[2]);

double res = mult(&num1, &num2);

swap(&num1, &num2);

printf("Multiplication result: %lf\n", res);

printf("%lf %lf", num1, num2);

return 0;

}
