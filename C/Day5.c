#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//random no genertor
int main()
{
int rand_num;
srand(time(0));
printf("The randomly generated number is");
rand_num = rand();
printf("%d\n", rand_num);
}