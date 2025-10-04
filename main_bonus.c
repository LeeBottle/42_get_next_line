#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd1;
	int		fd2;
//	char	*line;

	fd1 = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	if (fd1 < 0)
	{
		perror("Error opening file");
		return (1);
	}
	
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd2));
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd2));
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd2));
/*	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	while ((line = get_next_line(fd2)) != NULL)
	{
		printf("%s", line);
		free(line);
	}*/
	close(fd1);
	close(fd2);
	return (0);
}