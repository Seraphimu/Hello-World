//17.2.Films2.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include "17.2.films2.h"

//The structure of the film:
struct film {
	//Film's title:
	char title[SIZE];
	int rating;
	struct film* next;
};

int main(void)
{
	//The head pointer is NULL;
	struct film* head = NULL;
	struct film* prev, * current;
	char input[SIZE];

	puts("Enter first movie title:");
	//The pointer is not a null and the array is not empty while the loop is running:
	while (s_gets(input, SIZE) != NULL && input[0] != '\0')
	{
		//Allocate memory for the current pointer:
		current = (struct film*)malloc(sizeof(struct film));
		if (head == NULL)
			head = current;
		else
			prev->next = current;
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>:");
		scanf("%d", &current->rating);
		while (getchar() != '\n')
			continue;
		puts("Enter next movie title (empty line to stop):");
		prev = current;
	}
	if (head == NULL)
		puts("No data enterd.");
	else
		puts("Here is the movie list:");
	current = head;
	while (current != NULL)
	{
		printf("Movie: %s Rating: %d\n",
			current->title, current->rating);
		current = current->next;
	}
	current = head;

	//Free the rescource:
	while (current != NULL)
	{
		head = current->next;
		free(current);
		current = head;
	}
	puts("Bye!");

	return 0;
}
