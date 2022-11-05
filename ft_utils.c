#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_utils.h"
#include <stddef.h>

char    *ft_strchr(const char *s, int c)
{
        int     i = 0;

        while ( s[i] )
        {
                if ( s[i] == c )
                {
                        return ((char *)(s + i));
                        i++;
                }
                i++;
        }
                if (!c)
                {
                return ((char *)(s + i));
                }
                return 0;

}

size_t      ft_strlen(char *str)
{
    size_t  i;
    i = 0;

    while ( str[i] != '\0' ) 
    {
        i++;
    }

    return i;
}

char    *ft_strjoin(char *str1, char *str2)
{
    if ( str1 && str2 == NULL ) 
    {
        return NULL;
    }
    size_t  i;
    size_t  j;
    size_t      len;
    char    *allocate;
    len = ft_strlen(str1) + ft_strlen(str2);
    allocate = malloc((len+1) * sizeof(char));
    i = 0;

    // COPY THE STR1 TO ALLOCATE STRING
    while ( str1[i] != '\0' ) 
    {
        allocate[i] = str1[i];
        i++;
    }
    j = 0;
    // ALLOCATE THE SECOND STRING
    
    while ( str2[j] != '\0' ) 
    {
        allocate[i] = str2[j];
        i++;
        j++;       
    }
    allocate[i] = '\0';
    free(allocate);
    return allocate;
}
