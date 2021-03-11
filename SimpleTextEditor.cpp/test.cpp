#include <stdio.h>
#include <stdlib.h>

int write()
{
   char num[10000], fname[1000];
   FILE *fptr;
    printf("Give The File Name:\n");
    scanf("%s",fname);
   if ((fptr = fopen("fname","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       return 0;
   }

   fscanf(fptr,"%d", &num);

   printf("%s", num);
   fclose(fptr); 
  
   return 0;
}