#include <stdio.h> 

void find_modes(int data[], int n) 

{ 
    
int frequency[1000] = {0}; 

// Assuming values are within 0-999 range int max_freq = 0; // Count frequencies of each element 
for (int i = 0; i < n; i++) 
{ 
    frequency[data[i]]++; 

if (frequency[data[i]] > max_freq) 
{ 
    max_freq = frequency[data[i]]; 
    
    } 
    
} // Print the modes printf("Mode(s): "); 

for (int i = 0; i < 1000; i++) 

{ 
    
    if (frequency[i] == max_freq && max_freq > 1) 

{ 
    
    printf("%d ", i); } } 
    
    if (max_freq == 1) 
    
    { printf("No mode (each value appears only once)."); 
    
    } 
    
}    




int main() { 
    
    int data[] = {1, 2, 2, 3, 3, 4, 5}; // Example data 
    int n = sizeof(data) / sizeof(data[0]); 
    
    find_modes(data, n); 
    
    return 0; 
    
    } 