#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(){
int truncate(filedes,(off_t)-1,75);
int ret;
ret = truncate("/home/keanche/pirate.txt", 45);
if (ret <−1){
perror("truncate");
return −1;
}
return 0;
}
