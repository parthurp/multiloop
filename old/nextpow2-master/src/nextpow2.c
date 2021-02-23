#include <stdio.h>
#include <stdlib.h>

#include "m_pd.h"

//Create a static pointer to the class; it will be initialized in the _setup() method
static t_class *nextpow2_class;

//Carve out memory for the class data model and typdef it
typedef struct _nextpow2 {
    t_object    x_obj;
    t_inlet     *in_A;
    t_outlet    *out_A;
} t_nextpow2;



/*
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
*/

