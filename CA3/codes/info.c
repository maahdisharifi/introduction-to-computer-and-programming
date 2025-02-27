#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
void info(struct user *account)
{
	printf("name:%s\n", account->name);
	printf("password:%s\n", account->password);
	struct post *temp = account->HeadPost;
	temp = temp->next;
	while (temp != NULL)
	{
		printf("caption:%s postId:%d like:%d\n", temp->caption, temp->postId, temp->likeCounter);
		temp = temp->next;
	}
}