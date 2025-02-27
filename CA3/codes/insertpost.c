#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"

int insertPost(struct user *account, char *str, struct user *head)
{
	if (head->loginCounter == 1)
	{
		char *caption = strchr(str, ' ');	//find the first space in str;
		if (caption == NULL)
		{
			printf("incorrect command\n");
			return -1;
		}

		caption++;
		struct post *temp = account->HeadPost;

		struct post *newPost = (struct post *) malloc(sizeof(struct post));
		while (temp->next != NULL)
		{
			temp = temp->next;	//finding last post
		}

		newPost->caption = caption;
		newPost->postId = ++(account->HeadPost->postId);
		newPost->likeCounter = 0;
		temp->next = newPost;
		newPost->next = NULL;
		account->postStatus = 1;
	}
	else
	{
		printf("please login and try again\n");
	}
}