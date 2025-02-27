#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"

int findUser(struct user *userHead, char *Name)
{
	int status;
	struct user *temp = userHead;
	struct post * tempPost;
	while (temp != NULL)
	{
		if ((status = strcmp(Name, temp->name)) == 0)
		{
			break;
		}

		temp = temp->next;
	}

	if (temp == NULL)
	{
		printf("incorrect username\n");
		return -1;
	}
	else if ((status = strcmp(Name, temp->name)) == 0)
	{
		tempPost = temp->HeadPost;
		tempPost = tempPost->next;
		while (tempPost != NULL)
		{
			printf("name:%s\n", temp->name);
			printf("caption:%s postId:%d like:%d\n", tempPost->caption, tempPost->postId, tempPost->likeCounter);
			printf("\n");
			tempPost = tempPost->next;
		}
	}
}