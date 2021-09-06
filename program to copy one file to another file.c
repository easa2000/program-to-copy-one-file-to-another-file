// write a program to copy one file to another file
#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *fp1, *fp2;
    char ch;
    system("cls");
    if(fp1 = fopen("file_ex4.txt","r") == 0)
    {
        printf("\n Error opening the first file");
        exit(1);
    }

    if(fp2 = fopen("file_ex5.txt","w") == 0)
    {
        printf("\n Error opening the second file");
        exit(1);
    }

    ch = fgetc(fp1);
    while(ch != EOF)
    {
        putc(ch, fp2);
        ch = fgetc(fp1);
    }
    printf("\n FILE COPIED");
    fclose(fp1);
    fclose(fp2);
    return 0;
}
