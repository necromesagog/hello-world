#include <stdio.h>

int main (int argc, char **argv)
{
	int i;
	if (argc == 1)
		printf("hello world\n");
	else if (argc == 2) 
		for (i=0; i<atoi(argv[1]); i++) 
			printf("hello world\n");
	else printf("Usage: %s [number]\n", argv[0]);
	
	return 0;
}
