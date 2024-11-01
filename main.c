#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
    int fd = open("asd.txt", O_CREAT |O_RDWR ,0777);
    ft_putendl_fd( NULL, fd);
}
