// C Program to create a file
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    // file pointer
    // FILE* fptr;
 
    // creating file using fopen() access mode "w"
    FILE *fptr = fopen("file100000.txt", "w");
 
    // checking if the file is created
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
    else {
        printf("The file is created Successfully.");
    }

        for (int i = 0; i < 100000; i++) { 
        // Generate a random number between 0 and N using 
        // the rand() function 
        int value = rand(); 
        // Print the generated random value 
        printf("%d ", value); 
        fprintf(fptr,"%d\n",value);
    }
   
    return 0;
}
