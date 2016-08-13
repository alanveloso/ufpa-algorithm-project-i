int main() { 
setlocale (LC_ALL,"portuguese");
 
 
 int a = 500; 
 int *py; int **px; 
 py = &a; 
 px = &py; 
  
 
printf ("%i \n", *py); 
printf ("%i \n", **px); 
 
return 0; 
} 
