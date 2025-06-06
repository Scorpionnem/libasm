/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbatty <mbatty@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:45:24 by mbatty            #+#    #+#             */
/*   Updated: 2025/06/06 19:22:35 by mbatty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define MAGENTA "\033[35m"
#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

extern size_t	ft_strlen(char * str);

#include <string.h>
#include <fcntl.h>
#include <stdlib.h>

void	test_strlen(void)
{
	printf(YELLOW"libc %zu\n"RESET, strlen(""));
	printf(GREEN"ft %zu\n"RESET, ft_strlen(""));

	printf(YELLOW"libc %zu\n"RESET, strlen("42"));
	printf(GREEN"ft %zu\n"RESET, ft_strlen("42"));

	printf(YELLOW"libc %zu\n"RESET, strlen("libasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasm"));
	printf(GREEN"ft %zu\n"RESET, ft_strlen("libasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasmlibasm"));
}

extern char	*ft_strcpy(char *dst, char *src);

void	test_strcpy(void)
{
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
}

extern int	ft_strcmp(char *s1, char *s2);

void	test_strcmp(void)
{
	
}

extern size_t	ft_write(int fd, void *buf, size_t size);

void	test_write(void)
{
	
}

extern size_t	ft_read(int fd, void *buf, size_t size);

void	test_read(void)
{
	
}

extern char	*ft_strdup(char *str);

void	test_strdup()
{
	
}

int	main(void)
{
	char	*str = ft_strdup("libasm");
	printf("%s\n", str);
	free(str);
}
