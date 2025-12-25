This project has been created as part of the 42 curriculum by yartym

Description:
libft is a project that recreates some functions from libc library and creates static library libft.a
  **Functions recreated**: isalpha, isdigit, isalnum, isascii, isprint, strlen, memset, bzero, memcpy, memmove,
strlcpy, strlcat, toupper, tolower, strchr, strrchr, strncmp, memchr, memcmp, strnstr, atoi, calloc, strdup,
  **Own functions**: 
ft_substr - Allocates memory and returns a substring from the string ’s’.
ft_strjoin - Allocates memory and returns a new string, which is the result of concatenating ’s1’ and ’s2’
ft_strtrim - Allocates memory and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end.
ft_split - Allocates memory and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
ft_itoa - Allocates memory and returns a string representing the integer received as an argument.
ft_strmapi - Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second.   
  A new string is created to store theresults from the successive applications of f.
ft_striteri - Applies the function ’f’ to each character of the string passed as argument, passing its index as the first argument. 
  Each character is passed by address to ’f’ so it can be modified if necessary.
ft_putchar_fd - Outputs the character ’c’ to the specified file descriptor.
ft_putstr_fd - Outputs the string ’s’ to the specified file descriptor.
ft_putendl_fd - Outputs the string ’s’ to the specified file descriptor followed by a newline.
ft_putnbr_fd - Outputs the integer ’n’ to the specified file descriptor.
  **Linked list**
Functions to work with linked list: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

Instruction

Resources
