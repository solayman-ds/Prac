#include <stdio.h>
#include <stdlib.h>

double find_max(double *pntr, int size){
double max = *pntr;
//int size = sizeof(pntr)/sizeof(pntr[0]);
//printf("%d\n", size);
for(int i=0; i<size; i++){

if(*(pntr+i)> max) {
max = *(pntr+i);

}

}

return max;

}

int main(){

double arr[] = {2.3, -9.4, 4, 0, 12, 7, 8, 32, 21, 3.5};
int sz = sizeof(arr)/sizeof(arr[0]);
//double mx = find_max(&arr);

printf("Maximum: %lf\n", find_max(arr, sz));


return 0;

}
