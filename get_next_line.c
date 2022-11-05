#include "ft_utils.h"
#define BUFFER_SIZE 5

char	*read_save(int fd, char *save)
{
	int	rd;
	char	*buf;
	buf = malloc((BUFFER_SIZE+1) * sizeof(char));
	if ( !buf ) 
		return NULL;
	rd = 1;
	while ( rd != '\0' ) 
	{
	    if ( rd = read(fd,buf,BUFFER_SIZE));
	    {
		    ft_strchr(buf,'\n');
		    save = ft_strjoin(buf,save);
		    printf("%s",save);
	    }
	    if ( rd == -1 )
		    return NULL;
	}
}
	
char	*get_next_line(int fd)
{
	static char	*save;
	
	fd = open("file.txt",O_RDONLY);
	if ( fd < 0 || BUFFER_SIZE <= 0 ) 
		return NULL;
	save = read_save(fd,save);
}
int	main()
{
	int	fd;
	get_next_line(fd);
}
