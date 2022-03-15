#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int list[100], count;
int quant;
int av;
int max;
int min;

void *average(){
	int sum = 0;
	count = 0;
	while (count < quant) {
		sum = sum + list[count];
		count++;
	}
	av = sum/quant;
}

void *minNum() {
	min = list[1];
	count = 0;
	while(count < quant) {
		if (min > list[count]){
			min = list[count];
		}
		count ++;
	}
}

void *maxNum(){
      	max = list[1];
	count = 0;
  	while( count < quant) {
    		if(max < list[count]){
      		max = list[count];
    		}
  		count ++;
	}
}

int main() {
	int input;
  	scanf("%d", &quant);
	int i = 0;
	while(i < quant)
  	{
    		input = 0;
    		scanf("%d", &input);
    		list[i] = input;
    		i++;
  	}

  	int t;
 	 pthread_t thread1;
 	 pthread_t thread2;
	 pthread_t thread3;
 
  	t = pthread_create(&thread1, NULL, &average, NULL);
  	pthread_join(thread1,NULL);
 
  	t = pthread_create(&thread2, NULL, &minNum, NULL);
  	pthread_join(thread2,NULL);
 
  	t = pthread_create(&thread3, NULL, &maxNum, NULL);
  	pthread_join(thread3,NULL);
 
  	printf("The average value is %d",av);  
  	printf("\nThe minimum value is %d",min);
  	printf("\nThe maximum value is %d",max);
 	 return 0;
}


	
