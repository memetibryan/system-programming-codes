#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<fcntl.h>
#define BUFSIZE 1024
int main()
{
int filedes1,filedes2;
char buffer[BUFSIZE];
off_t offset;
ssize_t nread;
filedes1=open("/home/keanche/mcs100.txt", O_RDONLY);
if(filedes1<0)
{
printf("The opening of file failed, check directory");
}
else
{
offset=lseek(filedes1,(off_t)2, 1);
if(offset<0)
{
printf("lseek failed");
}
else
{
nread=read(filedes1,buffer,20);
if(nread<0)
{
printf("reading failed");
}
else
{
filedes2=open("/home/keanche/mcs101.txt", O_WRONLY);
if(filedes2<0)
{
printf("The opening of file2 failed");
}
else
{
write(filedes2,buffer,20);
}}}}}
