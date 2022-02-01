#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
pid_t i=fork();
if(i>0)
{
for(int i=0; i<10;i++);
{
printf("%d\n",i);
}}
else
{
for(int i=0; i<10;i++);
int multiple=i*i;
{
printf("%d\n",multiple);
}
return 0;
}}
