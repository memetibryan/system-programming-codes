#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
pid_t x;
x=fork ();
if(x>0)
{
printf("I am the Parent\n");
printf("My pid is %d",x);
}
else
{
printf("I am the child\n");
printf("My pid is %d",x);
return 0;
}}
