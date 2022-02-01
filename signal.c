#include<signal.h>
#include<stdio.h>
#include<stddef.h>
int main()
{
static struct sigaction act;
void generateSequence(int);
act.sa_handler=SIG_IGN;
sigfillset(&(act.sa_mask));
sigaction(SIGINT,&act, NULL);
printf("sleep call #1\n");
sleep(1);
printf("sleep call #2\n");
sleep(1);
printf("sleep call #3\n");
sleep(1);
printf("sleep call #4\n");
sleep(1);
printf("Exiting\n");
}
generateSequence(int x)
{
printf("please enter the value to be iterated");
scanf("%d",&x);
for (int i=0;i<x;i++)
{
printf("%d\n",i);
}}
