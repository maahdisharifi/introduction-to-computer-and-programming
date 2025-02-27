struct post
{
	int postId;
	int likeCounter;
	char *caption;
	struct post * next;

};

struct user
{
	char *name;
	char *password;
	struct user * next;
	struct post * HeadPost;
	int loginCounter;
	int postStatus;

};

struct usersLiked
{
	char *name;
	struct usersLiked * next;
};

struct user* signup(struct user *head, char *name, char *password);
char *input();
int identify(char *str, struct user *head, struct usersLiked *Head);
struct user* login(char *name, char *password, struct user *head);
int insertPost(struct user *account, char *str, struct user *head);
void logout(struct user *account, struct user *head);
void deletePost(struct user *account, int postId);
int like(struct user *accountHead, struct post *postHead, char *name, int id, struct usersLiked *head, struct user *account);
void info(struct user *account);
int findUser(struct user *userHead, char *name);
void likeLinkedListCreator(struct usersLiked *head, char *name);
int CheckLikeLinkedList(struct usersLiked *head, char *name);