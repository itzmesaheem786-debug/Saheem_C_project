/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char name[300];


    // 1. Writing data into file
    fp = fopen("hello.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
    
        return;
    }

    fprintf(fp,"feed back previous class of C program");
   
    fprintf(fp,"The c program class session are very usefull and informative");
    fclose(fp);

    printf("written successfully bhaiya\n");


    // 2. Appending data into file
    fp = fopen("hello.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened");
    
        return;
    }

    fprintf(fp, "the teaching method are clear and easy to understand  by the current class  ");

    fclose(fp);

    printf("Data appended successfully\n");


    // 3. Reading data from file
    fp = fopen("hello.txt", "r");

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
