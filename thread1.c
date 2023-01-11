#include<stdio.h>
#include<pthread.h>

void thread_fun1(void);
void thread_fun2(void);

int main()
{
pthread_t t1,t2;
printf("process id for thread1:%d\n",getpid());
  printf("Process id for thread2:%d\n",getpid());
printf("thread id for t1:%d\n",pthread_self());
  printf("thread id for t2:%d\n",pthread_self());
  
pthread_create(&t1,NULL,thread_fun1,NULL);
  pthread_create(&t2,NULL,thread_fun2,NULL);
pthread_join(t1,NULL);
  pthread_join(t2,NULL);
}

void thread_fun1(void)
{
printf("process 1 id:%d\n",getpid());
printf("thread 1 id:%d\n",pthread_self());

}
void thread_fun1(void)
{
  printf("process 2 id:%d\n",getpid());
  printf("thread 2 id:%d\n",pthread_self());
}
