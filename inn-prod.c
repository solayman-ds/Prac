#include <stdio.h>
#include <time.h>


/* Calculates inner product WITHOUT any BLAS function and returns the expected answer and time taken to compute the inner product of 2 vectors of length N

Input: arg1 N
Output: inner product and time taken for calculation.

*/


float inner_product(float *vec1, float *vec2, int size) {

    float result = 0;

    for (int i = 0; i < size; i++) {

        result += vec1[i] * vec2[i]; 

    }

    return result;

}

int main(int argc, char* argv[]){

    clock_t begin, end;

    double time_taken;

    begin = clock();


    float vector1[] = {1, 2, 3};

    float vector2[] = {4, 5, 6};

    int vec_size = sizeof(vector1) / sizeof(vector1[0]);



    float product = inner_product(vector1, vector2, vec_size);

    printf("Inner product: %f\n", product);



    end = clock();



    time_taken = ((double) (end-begin))/CLOCKS_PER_SEC;

    printf("time taken for this code = %f seconds \n", time_taken);

    return 0;
}