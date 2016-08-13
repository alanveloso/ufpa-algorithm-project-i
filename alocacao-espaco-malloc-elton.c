#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 
 
 
int main() { 
setlocale (LC_ALL,"portuguese");
 
 
int *p1, *p2; 
 
p1= malloc(sizeof (int)); 
p2= malloc(sizeof (int));
 
*p1 = 10; 
*p2 = 20; 
 
printf("%i  %i \n", *p1, *p2 ); 
p2 = p1;
 
printf("%i  %i \n ", *p1,*p2); 
 
return 0; 
} 
