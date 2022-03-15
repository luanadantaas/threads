# threads
## README
## Explicação do código

>O código pede um imput da quantidade de números que será inserida na lista, depois ele pede para inserir os números e cria 3 threads, uma para pegar o valor maximo dos números inseridos, o segundo pega o valor minimo, e o utlimo pega a média entre os números inseridos, e printa o resultado de cada thread.

## Funções mínimas do makefile

### Make
> Compila o código e gera o binário
### Make run
> Compila o código
### Make clear
> apaga o binário gerado.

## Funções

### Função max

```c
void *average() {
  int sum=0;
  for(i = 1; i <= quant; i++){
    sum= sum + list[i];
 }
  av = sum / quant;
}
```
### Função min

```c
void *minNum() {
  min = lista_num[1];
  for(int i = 1; i < quant; i++)
  {
    if(min > listi])
    {
      min= list[i];
    }
  }
}
```
### Função max
```c
void *maxNum() {
  maximum = lista_num[1];
  for (int i = 1; i <= quant_num; i++)
  {
    if(maximum < lista_num[i])
    {
      maximum = lista_num[i];
    }
  }
}
```

## Threads

### Código
pthread_create cria a thread

pthread_join impede a execução de uma thread até a thread alvo acabar sua execução

### Declarando
```c
  pthread_t thread1;
  pthread_t thread2;
  pthread_t thread3;
```
### Chamando as threads
```c
  t = pthread_create(&thread1, NULL, &average, NULL);
  pthread_join(thread1,NULL);
 
  t = pthread_create(&thread2, NULL, &minNum, NULL);
  pthread_join(thread2,NULL);
 
  t = pthread_create(&thread3, NULL, &maxNum, NULL);
  pthread_join(thread3,NULL);
```
 
## Prints
```c
 printf("The average value is %d",av);  
 printf("\nThe minimum value is %d",min);
 printf("\nThe maximum value is %d",max);
```

