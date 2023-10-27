#include "game.h"

int main(void)
{
	int input = 0;
	srand(time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 0)
		{
			puts("Bye!");
			break;
		}
		else
		{
			puts("Enter is error, re-enter please.");
			continue;
		}
	} while (input);

	return 0;
}