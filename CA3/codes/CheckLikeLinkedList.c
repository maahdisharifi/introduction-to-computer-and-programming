#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
int CheckLikeLinkedList(struct usersLiked *head, char *name)
{
	struct usersLiked *temp = head;
	temp = temp->next;
	int returnValue;
	while (temp != NULL)
	{
		returnValue = strcmp(temp->name, name);
		if (returnValue == 0)
		{
			return 0;
		}

		temp = temp->next;
	}

	return 1;
}