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
filedes1=open("/home/keanche/mcs2000.txt",O_WRONLY);
if(filedes1<0){
printf("opening of the file failed");
}
else{
offset=lseek(filedes1,(off_t)-1,2);
if(offset<0){
printf("file not found");
}
else{
filedes2=open("/home/keanche/mcs2001.txt", O_RDONLY);
if(filedes2<0){
printf("The opening of file failed");
}
else{
nread=read(filedes2,buffer,8);
if(nread<0){
printf("No reading was done");}
else{
write(filedes1,buffer,8);
}}}}}
