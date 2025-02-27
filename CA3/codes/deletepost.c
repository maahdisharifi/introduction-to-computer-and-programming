#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
void deletePost(struct user *account, int Num)
{
	struct post *temp = account->HeadPost;
	struct post *previous = account->HeadPost;
	temp = temp->next;
	while (temp != NULL && temp->postId != Num)
	{
		previous = temp;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		printf("couldn't find the post with this post id\n");
	}
	else if (temp->postId == Num)
	{
		previous->next = temp->next;
		free(temp);
		printf("post deleted\n");
	}
}