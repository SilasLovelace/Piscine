/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopperma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:30:26 by sopperma          #+#    #+#             */
/*   Updated: 2024/03/04 15:30:28 by sopperma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
int main(int argc, char *argv[])
{
	int fd;
	long bytes_read;
	char buffer[100];
	int line_count;
	char empty_char, obstacle_char, full_char;

	if (argc < 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return 1;
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}
	bytes_read = read(fd, buffer, 14);
	if (bytes_read <= 0)
	{
		perror("Error reading file");
		close(fd);
		return 1;
	}
	buffer[bytes_read] = '\0'; // Null-terminate the string
	line_count = atoi(buffer);
	char *start = buffer;
	while (*start >= '0' && *start <= '9')
		start++;
	empty_char = *start++;
	obstacle_char = *start++;
	full_char = *start;
	
	printf("Line count: %d\nEmpty char: %c\nObstacle char: %c\nFull char: %c\n", line_count, empty_char, obstacle_char, full_char);
	
	char *map[line_count];
	
	close(fd);
    return 0;
}
