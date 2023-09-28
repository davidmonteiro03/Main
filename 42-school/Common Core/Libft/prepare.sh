make
find . -name "*.o" -type f -delete
cc -Wall -Werror -Wextra main.c libft.a
