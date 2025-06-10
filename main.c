/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:45:24 by mbatty            #+#    #+#             */
/*   Updated: 2025/06/10 15:44:02 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define MAGENTA "\033[35m"
#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

extern size_t	ft_strlen(char * str);

#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

void	test_strlen(void)
{
	printf("Testing strlen\n");

	printf(YELLOW"libc %zu\n"RESET, strlen(""));
	printf(GREEN"ft %zu\n"RESET, ft_strlen(""));

	printf(YELLOW"libc %zu\n"RESET, strlen("42"));
	printf(GREEN"ft %zu\n"RESET, ft_strlen("42"));

	printf(YELLOW"libc %zu\n"RESET, strlen("libasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasm"));
	printf(GREEN"ft %zu\n"RESET, ft_strlen("libasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasm"));

	printf("\n");
}

extern char	*ft_strcpy(char *dst, char *src);

void	test_strcpy(void)
{
	printf("Testing strcpy\n");

	char	libc_buf[2000];
	char	ft_buf[2000];

	strcpy(libc_buf, "");
	ft_strcpy(ft_buf, "");

	printf(YELLOW"libc %s\n"RESET, libc_buf);
	printf(GREEN"ft %s\n"RESET, ft_buf);

	strcpy(libc_buf, "42");
	ft_strcpy(ft_buf, "42");

	printf(YELLOW"libc %s\n"RESET, libc_buf);
	printf(GREEN"ft %s\n"RESET, ft_buf);

	strcpy(libc_buf, "libasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasm");
	ft_strcpy(ft_buf, "libasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasm");

	printf(YELLOW"libc %s\n"RESET, libc_buf);
	printf(GREEN"ft %s\n"RESET, ft_buf);

	printf("\n");
}

extern int	ft_strcmp(char *s1, char *s2);

void	test_strcmp(void)
{
	printf("Testing strcmp\n");

	printf(YELLOW"libc %d\n"RESET, strcmp("", ""));
	printf(GREEN"ft %d\n"RESET, ft_strcmp("", ""));

	printf(YELLOW"libc %d\n"RESET, strcmp("yes", "no"));
	printf(GREEN"ft %d\n"RESET, ft_strcmp("yes", "no"));

	printf(YELLOW"libc %d\n"RESET, strcmp("no", "yes"));
	printf(GREEN"ft %d\n"RESET, ft_strcmp("no", "yes"));

	printf("\n");
}

extern size_t	ft_write(int fd, void *buf, size_t size);

void	test_write(void)
{
	printf("Testing write\n");

	int	libc_fd = open("libc_file", O_RDONLY | O_WRONLY | O_CREAT | O_EXCL, 0644);
	int	ft_fd = open("ft_file", O_RDONLY | O_WRONLY | O_CREAT | O_EXCL, 0644);

	printf(YELLOW"%zu\n"GREEN, write(libc_fd, "", 0));
	printf(GREEN"%zu\n"RESET, ft_write(ft_fd, "", 0));

	printf(YELLOW"%zu\n"GREEN, write(libc_fd, "Hello World\n", 12));
	printf(GREEN"%zu\n"RESET, ft_write(ft_fd, "Hello World\n", 12));

	printf(YELLOW"%zu\n"GREEN, write(libc_fd, "byebye", 3));
	printf(GREEN"%zu\n"RESET, ft_write(ft_fd, "byebye", 3));

	close(libc_fd);
	close(ft_fd);

	printf("\n");
}

extern size_t	ft_read(int fd, void *buf, size_t size);

void	test_read(void)
{
	printf("Testing read\n");

	int	libc_fd = open("libc_file", O_RDONLY);
	int	ft_fd = open("ft_file", O_RDONLY);

	{
		char	libc_str[4096] = {0};
		char	ft_str[4096] = {0};
		
		printf(YELLOW"%zu\n"RESET, read(libc_fd, libc_str, 0));
		printf(YELLOW"%s\n"RESET, libc_str);
		printf(GREEN"%zu\n"RESET, ft_read(ft_fd, ft_str, 0));
		printf(GREEN"%s\n"RESET, ft_str);
	}

	{
		char	libc_str[4096] = {0};
		char	ft_str[4096] = {0};
		
		printf(YELLOW"%zu\n"RESET, read(libc_fd, libc_str, 12));
		printf(YELLOW"%s\n"RESET, libc_str);
		printf(GREEN"%zu\n"RESET, ft_read(ft_fd, ft_str, 12));
		printf(GREEN"%s\n"RESET, ft_str);
	}

	{
		char	libc_str[4096] = {0};
		char	ft_str[4096] = {0};
	
		printf(YELLOW"%zu\n"RESET, read(libc_fd, libc_str, 3));
		printf(YELLOW"%s\n"RESET, libc_str);
		printf(GREEN"%zu\n"RESET, ft_read(ft_fd, ft_str, 3));
		printf(GREEN"%s\n"RESET, ft_str);
	}

	close(libc_fd);
	close(ft_fd);

	printf("\n");
}

extern char	*ft_strdup(char *str);

void	test_strdup()
{
	printf("Testing strdup\n");

	char	*libc_str = {0};
	char	*ft_str = {0};

	libc_str = strdup("Duping the strings!");
	printf(YELLOW"%s\n"RESET, libc_str);
	ft_str = ft_strdup("Duping the strings!");
	printf(GREEN"%s\n"RESET, ft_str);

	free(libc_str);
	free(ft_str);

	libc_str = strdup("");
	printf(YELLOW"%s\n"RESET, libc_str);
	ft_str = ft_strdup("");
	printf(GREEN"%s\n"RESET, ft_str);

	free(libc_str);
	free(ft_str);

	libc_str = strdup("Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!");
	printf(YELLOW"%s\n"RESET, libc_str);
	ft_str = ft_strdup("Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!Duping the strings!");
	printf(GREEN"%s\n"RESET, ft_str);

	free(libc_str);
	free(ft_str);
}

int	main(void)
{
	test_strlen();
	test_strcpy();
	test_strcmp();
	test_write();
	test_read();
	test_strdup();
}
