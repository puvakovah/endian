#include<stdio.h>

int main()
{
     unsigned int x = 1;
     char *endian = (char*) &x; 

     if(*endian)
     {
          printf(" Little endian\n ");
     }
     else
     {
          printf(" Big endian\n ");
     }
     
     return 0;
}