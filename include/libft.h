/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:28:38 by ipersids          #+#    #+#             */
/*   Updated: 2024/10/30 14:54:10 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* ---------------------- Memory Management Functions ---------------------- */

/*
 * NOTE: If passing a null pointer to memchr 
 * 		 (or any other memory-related function) results in 
 * 		 a segmentation fault, that's expected behavior, 
 * 		 because function tries to access an invalid memory location,
 * 		 causing the program to crash.
 * 		 This is the way.
*/

void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_calloc(size_t num, size_t size);
void	*ft_memchr(const void *ptr, int value, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	ft_bzero(void *s, size_t n);

/* --------------------- String Manipulation Functions --------------------- */

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *big, const char *little, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// using memory allocation:

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* ------------------- Character Classification Functions ------------------ */

int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);

/* ------------------------ Other Utility Functions ------------------------ */

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* ------------------------- Linked List Functions ------------------------- */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));

/* ---------------------- Additional Custom Functions ----------------------- */

#endif
