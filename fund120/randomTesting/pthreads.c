#include <stdio.h>
#include <pthread.h>
#define NUM_THREADS 4

void * hello(void *arg){
	int *p = (int*)arg;
	int val = *p;
	printf("[%d]Hello World!\n", val);
	return 0;
}

int main (void){
	int i;
	pthread_t tid[NUM_THREADS];
	for (i = 0; i < NUM_THREADS; i++) { 	//create for threads
		pthread_create(&tid[i],NULL,hello,&i);
	}
	for (i = 0; i < NUM_THREADS; i++) {
		pthread_join(tid[i], NULL);
	}
	return 0;
}


