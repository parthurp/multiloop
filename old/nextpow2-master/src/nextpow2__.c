#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
float a = atof(argv[1]);
//printf("%d\n", a);
int p = 0;
if (a >= 0){
	while(a > 1){
		p = p + 1;
		a = a/2;
		//printf("%f\n",a);
	}
}
printf("%d\n", p);
return 0;
}
