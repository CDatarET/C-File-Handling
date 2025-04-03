#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file1, *file2;
    char fileName1[100];
    char fileName2[100];
    int c;
    printf("Enter the filename to open for reading\n");
    scanf("%s", fileName1);

    file1 = fopen(fileName1, "r");
    if (file1 == NULL){
        printf("Unable to open file\n");
        return 1;
    }

    printf("Enter the filename to open for writing\n");
    scanf("%s", fileName2);
    file2 = fopen(fileName2, "w");

    do {
        char data[1];
        fscanf(file1, " %s", data);
        fprintf(file2," %s", data);
    }
    while(fgetc(file1) != EOF);
    return 0;
}