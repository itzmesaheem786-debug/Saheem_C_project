#include <stdio.h>


void main()
{
    FILE *fp;
    char name[300];

    //clrscr();

    // 1. Writing data into file
    fp = fopen("prem.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
    
        return;
    }

    fprintf(fp,"On Starting of the C language class for 3days a faculty came and for another 3 days a faculty came it is very difficult to prepare for notes and very difficult to understand the concept some of the concepts only i could understand ");

    fclose(fp);

    printf("Data written successfully\n");


    // 2. Appending data into file
    fp = fopen("student.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        
        return;
    }

    fprintf(fp, "\nAfter a month A new faculty came and told i will come for all classes after he comes he teach the program practically it is very understandable i am very useful from this class thankyou for this oppurtunity");

    fclose(fp);

    printf("Data appended successfully\n");


    // 3. Reading data from file
    fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        
        return;
    }

    printf("\nFile Contents:\n");

    while (fgets(name, sizeof(name), fp) != NULL)
    {
        printf("%s", name);
    }

    fclose(fp);


}
