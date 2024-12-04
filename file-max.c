
#include <stdio.h>
#include <stdlib.h>

int main() {

int loop, n;
printf("Enter the number of ramdomly generated numbers: \n");
scanf("%d", &n);

double x[n];

for(int i=0; i<n; ++i){
x[i] = (double)(rand())*1e-6;
printf("%lf\n", x[i]);
}

char *filename = "array-data.txt";

FILE *fp = fopen(filename, "w");

if (fp==NULL){

printf("Error opening the file:%s", filename);
return -1;
}

for(int i=0; i<n; i++){

fprintf(fp, "%lf\n", x[i]);
}

fclose(fp);

double largest;

largest = x[0];

for (int loop = 1; loop < n; loop++){

if(largest < x[loop]){

largest = x[loop];

printf("largest for loop\n: %d, %lf", loop, largest);

}

}

printf("Largest element: %lf\n", largest);

FILE *fp1;
char *filename1 = "array-data.txt";

fp1 = fopen(filename1, "r");

if(fp1==NULL){

printf("The erro in file:%s\n", filename);

return -1; 
}

int size = 0;
double  y[100];

// Use fscanf to read numbers from the file
    while (fscanf(fp1, "%lf", &y[size]) != EOF) {
        printf("Read from file: %lf\n", y[size]);
        size++;
    }


//while(fscanf(fp1,"%lf", &y[size] ==1){

//printf("Read from file: %lf\n", y[size]);
//size ++;
//}

fclose(fp1);

return 0;
}
