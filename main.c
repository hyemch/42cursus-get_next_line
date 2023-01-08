#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
//#include <stdlib.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while (fd > 0)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
	}
	close(fd);
	return (0);
}
