#include <stdio.h>
int main(int argc, char **argv)
{
	static int frame_count = 0;
	printf("%d\n", frame_count++);
	main(argc, argv);
	return 0;
}
