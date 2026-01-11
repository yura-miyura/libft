# This project has been created as part of the 42 curriculum by yartym

## libft is a static library of some libc, custom and linked list functions

This project is created to have a library of functions that can be reused in future projects 
and is the first project in 42 curicculum. 
There are three groups of functions that have been recreated:

* Libc functions (isalpha, isdigit, isalnum, isascii, isprint, strlen, memset, bzero, memcpy, memmove, 
strlcpy, strlcat, toupper, tolower, strchr, strrchr, strncmp, memchr, memcmp, strnstr, atoi, calloc, strdup)

* Additional functions (ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa,
ft_strmapi, ft_striteri, ft_putchar_fd, ft_putstr_fd,ft_putendl_fd, ft_putnbr_fd)

* Linked list (ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap)

Instruction
1) To create static library
make

2) Use it with your own program
cc <file_name>.c -L. -lft -o <file_name>


Resources
