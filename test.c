/*************************************************************************
	> File Name:    test.c
	> Author:       vividwei
	> Mail:         353470469@qq.com
	> Created Time: 2016年12月01日 星期四 14时35分37秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include "url_decode.h"

int main()
{
    char src[] = "https://www.baidu.com/?%E5%9F%8E%E5%B8%821=%E6%B7%B1%E5%9C%B3h";
    char dest[100];
    int  len;
    
    memset(dest, 0x0, sizeof(dest));
    
    len = strlen(src);
    
    url_decode(src, len, dest);
    
    printf("<1>\n");
    printf(src);
    printf(dest);

    return 0;
}
