#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h> 

int factorize(char *n);
int main(int argc, char *argv[])
{   
    size_t len = 0;
    ssize_t read = 1;
    char *line;
    FILE *file;
	long long i, num = 0;
	int flag = 0;
    /*
    clock_t t; 

    t = clock();*/

    if (argc != 2)
    {
        printf("Usage: factor <filename>\n");
        exit(1);
    }
    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    while ((read = getline(&line, &len, file)) > 0)
	{
		num = atoll(line);
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				printf("%lld=%lld*%lld\n", num, num/i, i);
				break;
			}
		}
		
	}/*
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken); */
	free(line);
	fclose(file);
	exit(EXIT_SUCCESS);
}
