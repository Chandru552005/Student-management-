#include "stud.h"

void stud_save(ST *ptr)
{
    FILE *fp;

    fp = fopen("stud.dat","w");

    if(fp == NULL)
    {
        printf("File Cannot Open\n");
        return;
    }

    while(ptr)
    {
        fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->per);

        ptr = ptr->next;
    }

    fclose(fp);

    printf("Records Saved Successfully\n");
}


