/* Data initializtion routines */

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
#include <unistd.h>


# include "global.h"
# include "rand.h"

/* Function to initialize a population randomly */
void initialize_pop (population *pop)
{
    int i;
    for (i=0; i<popsize; i++)
    {
        initialize_ind (&(pop->ind[i]));
    }
    return;
}

/* Function to initialize an individual randomly */
void initialize_ind (individual *ind)
{
	int i;
	for(i=0;i<AA;i++){
			ind->valor[i]=22;
	}
		generarRandom(ind->valor);
    return;
}

void mostrarVector(int v[])
{
     int i;

     printf("VECTOR\n");
     for (i = 0; i < AA; i++)
         printf("%d ", v[i]);
}
