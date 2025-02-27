#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
struct user* login(char *name, char *password, struct user *head)
{
	struct user *temp = head;
	temp = temp->next;
	while (temp != NULL)
	{
		int statusName = strcmp(temp->name, name);
		int statusPassword = strcmp(temp->password, password);
		// check to see if the username and possword are true or not
		if (statusName == 0 && statusPassword == 0)
		{
			printf("successful login\n");
			temp->HeadPost = (struct post *) malloc(sizeof(struct post));	// assigning a post for the correspoding account
			temp->HeadPost->next = NULL;
			temp->HeadPost->postId = 0;
			temp->loginCounter = 1;
			head->loginCounter = 1;
			return temp;
		}

		temp = temp->next;
	}

	printf("we can't login try again\n");

}
