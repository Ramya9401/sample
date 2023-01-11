#include<stdio.h>
#include<pthread.h>

void thread_fun(void);

int main()
{
pthread_t t1;
printf("process id:%d\n",getpid());
printf("thread id:%d\n",pthread_self());
pthread_create(&t1,NULL,thread_fun,NULL);
pthread_join(t1,NULL);
}

void thread_fun(void)
{
printf("process1 id:%d\n",getpid());
printf("thread1 id:%d\n",pthread_self());

}
