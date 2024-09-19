//Write a program to read a file character by character and display its content on screen.

#include<stdio.h>

int main (void)
{
char ch;
FILE *fp=fopen("file1.txt","r");
while((ch=fgetc(fp))!=EOF);
printf("%c",ch);
fclose (fp);
return 0;
}

