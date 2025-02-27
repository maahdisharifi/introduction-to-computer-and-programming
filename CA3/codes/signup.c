#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
struct user* signup(struct user *head, char *name, char *password)
{
	struct user *newUser = (struct user *) malloc(sizeof(struct user));
	struct user *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;	//finding the last user
	}

	newUser->name = name;
	newUser->password = password;
	temp->next = newUser;
	newUser->next = NULL;

	return newUser;
}