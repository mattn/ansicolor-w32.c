#include <stdio.h>
#ifdef _WIN32
# include "ansicolor-w32.h"
#endif

int
main(int argc, char* argv[])
{
	printf("\x1b[22;31mhello world\n");
	return 0;
}

