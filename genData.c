#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char ** argv){

	FILE * file = NULL;
	int i ;
	int n = atoi(argv[1]);
	int *original_array = malloc(n * sizeof(int));
	
	srand(time(NULL));
	for(int c = 0; c < n; c++) {
		original_array[c] = rand() % 1024;
	}

	file = fopen(argv[2], "w");
	fprintf(file,"%d\n",n);
    for (i = 0; i < n; i++)
      fprintf(file, "%d\n", original_array[i]);
    fclose(file);

    return 0;
}