#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#define BUFSIZ 1024
int main(){
ssize_t nread1,nread2;
int filedes1, filedes2;
char buffer[BUFSIZ];
filedes1=open("/home/keanche/mcs3.c", O_RDWR);
if (filedes1<0)
{
printf("file not found or unsuccessful opening");
}
else
{
nread1=read(filedes1,buffer,600);
if(nread1<0)
{
printf("reading failed");
}
else
{
filedes2=open("/home/keanche/mcs32.txt",O_WRONLY);
nread2=write(filedes2,buffer,200);
if (nread2<0)
{
printf("writing failed");
}
else
{
printf("writing successful");
}}}}
