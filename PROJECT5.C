#include<stdio.h>
int main()
{
 char ch;
 FILE*fp;
 fp=fopen("feedback.txt","w");
 if(fp==NULL)
 {
  printf("file opening failed\n");
  return 0;
 }
  fprintf(fp,"feedback about the c programming\n");
  fprintf(fp,"1.c is little hard to learn\n");
  fprintf(fp,"2.but it is also useful for us\n");
  fprintf(fp,"3.c is fundamental to learn any programming language\n");
  fprintf(fp,"4.c is faster one\n");
  fprintf(fp,"5.c is helpful to improve logic sense\n");
  fclose(fp);

  fp=fopen("feedback.txt","a");
  if(fp==NULL)
 {
  printf("file opening is failed\n");
  return 0;
 }
  fprintf(fp,"feedback about about the c sir");
  fprintf(fp,"1.c sir is very supportive");
  fprintf(fp,"2.c sir explains in funny and friendly way");
  fprintf(fp,"3.c sir does'nt get angry even when did anything wrong");
  fprintf(fp,"4.c sir is very punctual");
  fprintf(fp,"5.c sir clarifies our doubt whenever we ask");
  fclose(fp);

  fp=fopen("feedback.txt","r");
  if(fp==NULL)
 {
  printf("file opening failed\n");
  return 0;
 }
  while((ch=fgetc(fp))!=EOF)
 {
  printf("%c",ch);
 }
  fclose(fp);
  return 0;
}