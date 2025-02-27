#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"

void likeLinkedListCreator(struct usersLiked *head, char *name)
{
	struct usersLiked *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	struct usersLiked *newLike = (struct usersLiked *) malloc(sizeof(struct usersLiked));

	newLike->name = name;
	temp->next = newLike;
	newLike->next = NULL;
}