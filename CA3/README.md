# UT TOTI - Social Network Command Line

UT-TOTI is a command-line-based social networking platform implemented in C. This project simulates key features of a social media application, including user sign-up, login, posting, liking, deleting posts, and viewing user profiles. It uses dynamic arrays, linked lists, structs, and memory management techniques in C. The system stores user and post information in a memory-efficient manner using dynamic arrays, linked lists, and structs.

## Features

- **User Registration:** Users can create an account with a unique username and password.
- **Login System:** Registered users can log into their accounts using their username and password.
- **Post Creation:** Users can create posts with custom text content.
- **Post Liking:** Users can like posts made by others.
- **Post Deletion:** Users can delete their own posts.
- **Viewing User Info:** Users can view their account details, including their posts and the number of likes.
- **User Search:** Users can search for other users by their username.
- **Saving Data to Files:** The data, including user information and posts, is saved in files for persistent storage across program runs.

## Command-Line Instructions

Below are the supported commands and their descriptions for interacting with the social network.







### Sign Up

Creates a new user account with a username and password.

```bash
signup <username> <password>
```

### Login

Logs a user into their account using the username and password.

```bash
login <username> <password>
```

### Post

Allows the logged-in user to post content.

```bash
post <text>
```

### Like

Allows a user to like a specific post by another user.

```bash
like <username> <post_id>
```

### Logout

Logs the user out of their account.

```bash
logout
```

### Delete Post

Allows a user to delete one of their own posts.

```bash
delete <post_id>
```

### Info

Displays the user's account details, including their posts and the number of likes.

```bash
info
```

### Find User

Searches for a user by their username.

```bash
find_user <username>
```

## Data Structures

The project uses several data structures to manage users and posts efficiently.

### Dynamic Arrays

Used to store the text of posts with dynamically allocated memory.

### Linked Lists

Used to manage users and their posts, with each user represented as a node.

### Structs

Defines the data structures for users and posts, holding relevant data like usernames, passwords, post IDs, and content.
```
