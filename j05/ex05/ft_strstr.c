#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    long i;
    long j;

    i = 0;
    j = 0;
    while(str[i]!='\0')
    {
    	printf("condition 1 \n");
        while(str[i + j] == to_find[j] && str[i + j])
        {
    	printf("condition 2 \n");
            i++;
        }
        if(to_find[j] != '\0')
        {              
    	printf("condition 3 \n");
        	return (str + i);
    	}
    j++;
    }
    if(str[0] =='\0' && to_find[0] =='\0')
    {
    	printf("condition 4 \n");
    	return (str);
    }
return ((void*) 0);
}
