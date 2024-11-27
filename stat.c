#include <stdio.h>
#include <math.h>

#define N 5 // number of students

// calculate the mean
double calculate_mean(int scores[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum / size;
}



// calculate the mode
int calculate_mode(int scores[], int size) {
    int mode = scores[0];
    int max_count = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (scores[j] == scores[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = scores[i];
        }
    }
    return mode;
}

// standard deviation
double calculate_std_dev(int scores[], int size, double mean) {
    double variance = 0.0;
    for (int i = 0; i < size; i++) {
        variance += pow(scores[i] - mean, 2);
    }
    variance /= size;
    return sqrt(variance);
}

int main() {
    int scores[N] = {10, 7, 5, 9, 10};

    //  mean
    double mean = calculate_mean(scores, N);
    printf("Mean: %lf\n", mean);

    
    // mode
    int mode = calculate_mode(scores, N);
    printf("Mode: %d\n", mode);

    // standard deviation
    double std_dev = calculate_std_dev(scores, N, mean);
    printf("Standard Deviation: %lf\n", std_dev);

    return 0;
}