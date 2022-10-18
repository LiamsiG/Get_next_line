#ifndef	get_next_line
#define	get_next_line

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*get_next_line(int fd);
size_t		ft_strlen(const char *str);
char	*ft_strjoin(char str1, char *str2);
