#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#define BUFSIZ 512
int main()
{
ssize_t nread;
char buffer[BUFSIZ];
int filedes;
filedes=open("/home/keanche/mcs32.c", O_RDONLY);
if (filedes<0)
{
printf("failure");
}
else
{
nread=read(filedes,buffer,600);
if(nread<0)
{
printf("read failed");
}
else
printf("reading successful");
{
printf("%s",buffer);
}}}
