#include<stdio.h>
#include<pthread.h>

int thread_func(int y);

int main()
{
int res1;
pthread_t t1;
pthread_create(&t1,NULL,thread_func,10);
pthread_join(t1,&res1);
printf("%d\n",res1);
}

int thread_func(int y)
{
int x=y*y;
return x;
}
