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
This command creates a new user account.
```
signup <username> <password>
```
**Example:**
```
signup hamid 12#t
```

- The username and password are separated by a space.
- Usernames and passwords can include letters, numbers, and special characters.

### Login
This command allows a user to log in to their account.
```
login <username> <password>
```
**Example:**
```
login erfan pnh2880
```

- Username and password must match the details provided during registration.

### Post
This command allows the logged-in user to post content.
```
post <text>
```
**Example:**
```
post world cup!! The Argentina team is the winner of the 2022 World Cup.
```

- The post content is provided as text and can be of any length.

### Like
This command allows a user to like a specific post.
```
like <username> <post_id>
```
**Example:**
```
like Navid 7
```

- The `post_id` refers to the unique identifier of the post being liked.
- Users can like other users' posts by specifying the `username` and `post_id`.

### Logout
This command logs the user out of their account.
```
logout
```
**Example:**
```
logout
```

- The user will be logged out of the current session.

### Delete Post
This command allows a user to delete one of their own posts.
```
delete <post_id>
```
**Example:**
```
delete 3
```

- Only the user who created the post can delete it.

### Info
This command displays user information, including the list of posts and their respective likes.
```
info
```
**Example:**
```
info
```

- The system will display the user's posts and the number of likes each post has received.

### Find User
This command searches for a user by their username.
```
find_user <username>
```
**Example:**
```
find_user darya23
```

- The system will search for the user and display their posts and the number of likes.

## Data Structures

The project uses several data structures to manage users and posts efficiently.

### Dynamic Arrays

Used to store the text of posts with dynamically allocated memory.

### Linked Lists

Used to manage users and their posts, with each user represented as a node.

### Structs

Defines the data structures for users and posts, holding relevant data like usernames, passwords, post IDs, and content.

