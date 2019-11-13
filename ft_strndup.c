#include "libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	unsigned int	i;
	char			*copy;

	if (!(s2 = malloc(sizeof(*copy) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}