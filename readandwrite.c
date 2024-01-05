#include<stdio.h>
#include<stdlib.h>
int main() 
{
FILE *file_write = fopen("file.txt", "w");
if (file_write == NULL)
{ 
printf("Error opening file for writing");
return 0;
}
fprintf(file_write, "Hello, this is a notebook of C!\n");
fclose(file_write);
printf("Successfully wrote to the file.\n");
FILE *file_read = fopen("file.txt", "r");
if (file_read == NULL) 
{
printf("Error opening file for reading");
return 0;
}
else
{ 
printf("content read from the file.\n");
}
char ch;
while (fscanf(file_read, "%c", &ch) == 1) 
{
putchar(ch);
}
fclose(file_read);
return 0;
}
