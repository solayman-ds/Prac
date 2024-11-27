#include <stdio.h>
#include <math.h>

#define MAX_SCORES 100 // Maximum number of scores that can be read

// calculate the mean
double calculate_mean(int scores[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum / size;
}  


// Function to calculate the mode
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
    int scores[MAX_SCORES];
    int size = 0;

    
    FILE *file = fopen("scores-data.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read scores from the file
    while (fscanf(file, "%d", &scores[size]) != EOF) {
        size++;
        if (size >= MAX_SCORES) break; 
    }

    fclose(file); 

    if (size == 0) {
        printf("No scores to process.\n");
        return 1;
    }

    // mean
    double mean = calculate_mean(scores, size);
    printf("Mean: %lf\n", mean);

    // mode
    int mode = calculate_mode(scores, size);
    printf("Mode: %d\n", mode);

    // standard deviation
    double std_dev = calculate_std_dev(scores, size, mean);
    printf("Standard Deviation: %lf\n", std_dev);

    return 0;
}