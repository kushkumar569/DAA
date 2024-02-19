#include <stdio.h>
#include<stdlib.h>
int main() {
    // Open the file for reading
    FILE * fptr;
    fptr = fopen("filenum.txt", "r");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        return 1; // Return an error code
    }

    // Read and print each number from the file
    int number;
    while (fscanf(fptr, "%d", &number) == 1) {
        printf("%d\n", number);
    }

    // Close the file
    fclose(fptr);

    return 0; // Return success
}
