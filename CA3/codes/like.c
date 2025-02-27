#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
int like(struct user *accountHead, struct post *postHead, char *name, int id, struct usersLiked *head, struct user *account)
{
	struct user *tempAccount = accountHead;
	struct post * tempPost;
	int status = 1;
	int Status = 1;
	int returnValue;
	while (tempAccount != NULL)
	{
		int status = 0;
		if ((status = strcmp(tempAccount->name, name)) == 0)
		{
			break;
		}

		tempAccount = tempAccount->next;
	}

	if (tempAccount == NULL)
	{
		printf("couldn't find the username\n");
		return -1;
	}
	else if ((status = strcmp(tempAccount->name, name)) == 0)
	{
		tempPost = tempAccount->HeadPost;
		tempPost = tempPost->next;
		while (tempPost != NULL && tempPost->postId != id)
		{
			tempPost = tempPost->next;
		}

		if (tempPost == NULL)
		{
			printf("coundn't find the post\n");
			return -1;
		}
		else if ((returnValue = CheckLikeLinkedList(head, account->name)) == 0)
		{
			printf("you can't like a post several times\n");
		}
		else if (tempPost->postId == id)
		{
			printf("post was liked\n");
			likeLinkedListCreator(head, account->name);
			(tempPost->likeCounter) ++;
		}
	}
}