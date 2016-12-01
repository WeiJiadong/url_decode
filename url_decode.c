/*************************************************************************
	> File Name:    url_decode.c
	> Author:       vividwei
	> Mail:         353470469@qq.com
	> Created Time: 2016年12月01日 星期四 13时28分46秒
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include "url_decode.h"

// eg: 
//     https://www.baidu.com/?%E5%9F%8E%E5%B8%821=%E6%B7%B1%E5%9C%B3h

static inline char hextochar(char ch)
{
    char retval = 0;

    if (isdigit(ch))
    {
        retval = ch - '0';
    }
    else
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        
        retval = ch - 'A' + 10;
    }

    return retval;
}

void url_decode(char *src, int len, char *dest)
{
    int loop  = 0;
    int index = 0;

    if (!src || len <= 0 || !dest)
    {
        return ;
    }

    for (loop = 0; loop <= len; ++loop)
    {
        if ('%' == src[loop] && isxdigit(src[loop + 1]) 
            && isxdigit(src[loop + 2]))
        {
            dest[index++] = (hextochar(src[++loop]) << 4) 
            + hextochar(src[++loop]);
        }
        else
        {
            dest[index++] = src[loop];
        }
    }
}
