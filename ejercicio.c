
//PROYECTO : bit.ly/39GTgzE



#include <stdio.h>
#include<assert.h> 
#define N 5

void pedirArreglo(int a[], int l){

    int i=0;
    while (i<l){
	printf("ingrese el elemento %d del arreglo:\n",i);
	scanf("%d",&a[i]);
	i=i+1;
    }
}
struct max_min_result {
int max_value;
int min_value;
int max_position;
int min_position;
};



struct max_min_result compute_max_min(int a[], int l){
 struct max_min_result res;
  int i=0;
  assert(l > 0);
  res.max_value = a[0];
  res.min_value = a[0];
  res.max_position =0;
  res.min_position =0;
  while (i<l){

    if (a[i]<res.min_value){
    res.min_value = a[i];
    res.min_position = i;
    }
    else if (a[i]>=res.max_value){
    res.max_value = a[i];
    res.max_position= i;
    }

    i= i+1;


   }
 return res;
}

void imprimir (struct max_min_result res){
printf ("el minimo es %d", res.min_value);
printf ("el maximo es %d", res.max_value);
printf("la posicion maxima es %d", res.max_position);
printf("la minima posicion es %d", res.min_position);
}

int main (){
int a[N];
struct max_min_result f;

pedirArreglo(a, N);
f = compute_max_min(a, N);
imprimir(f);

return 0;
}




