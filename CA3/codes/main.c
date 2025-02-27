#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "total.h"
int main()
{
	int len = 0;
	char *userInput;

	struct user *userHead = (struct user *) malloc(sizeof(struct user));
	userHead->next = NULL;
	struct usersLiked *head = (struct usersLiked *) malloc(sizeof(struct usersLiked));
	head->next = NULL;
	int i = 0;
	int true = 1;
	userHead->loginCounter = 0;
	while (true)
	{
		userInput = input();
		identify(userInput, userHead, head);
		FILE *accounts = fopen("accounts.txt", "w");
		FILE *post = fopen("posts.txt", "w");
		struct user *temp = userHead;
		struct post * postTemp;
		temp = temp->next;
		if (userHead->loginCounter == 1 && temp->loginCounter == 1 && temp->postStatus == 1)
		{
			while (temp != NULL)
			{
				fprintf(accounts, "%s %s %d\n", temp->name, temp->password, temp->HeadPost->postId);
				postTemp = temp->HeadPost;
				postTemp = postTemp->next;
				while (postTemp != NULL)
				{
					fprintf(post, "%s %s %d\n", postTemp->caption, temp->name, postTemp->likeCounter);
					postTemp = postTemp->next;
				}

				temp = temp->next;
			}

			fclose(accounts);
			fclose(post);
		}
	}

	return 0;

}