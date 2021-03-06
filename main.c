#include <stdio.h>

int main(){

int i, j, array[4][6];

printf("Enter Numbers");

for ( i = 0; i < 4; i++)
{
 for ( j = 0; j < 6; j++){
  scanf("%d", &array[i][j]);
 }
 
}

printf("even numbers are:\t");

for ( i = 0; i < 4; i++){
 for ( j = 0; j < 6; j++){
  if (array[i][j] % 2 == 0){
   printf("%d\t", array[i][j]);
 
  }
  
 }
 
}

printf("\n odd numbers are:\t");
for ( i = 0; i < 4; i++){
 for ( j = 0; j < 6; j++){
  if (array[i][j] % 2 != 0){
   printf("%d\t", array[i][j]);
  }
  
 }
 
}

return 0;
}