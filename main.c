#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int		fd;
	char	*line;
	
	if (ac != 2)
	{
		printf("Usage: %s <filename>\n", av[0]);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
/*	line = get_next_line(fd); // 한 줄 읽기
	if (line)
	{
		printf("%s", line);
		free(line); // 메모리 해제
	}*/
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
