#include "libft.h"

char*   ft_strdup(const char *s)
{
        int     i;
        char    *p;

        i = 0;
        while (s[i++])
        p = (char *)malloc(i + 1);
        if (!p)
                return (0);
        i = 0;
        while (s[i])
        {
                p[i] = s[i];
                i++;
        }
        p[i] = '\0';
        return (p);
}

