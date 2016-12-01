/*************************************************************************
	> File Name:    test.cpp
	> Author:       vividwei
	> Mail:         353470469@qq.com
	> Created Time: 2016年12月01日 星期四 14时12分53秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include "url_decode.h"

using namespace std;

int main()
{
    char src[1000];
    char dest[1000];
    int  len;

    memset(dest, 0x0, sizeof(dest));

    cin >> src;

    len = strlen(src);

    url_decode(src, len, dest);


    cout << src  << endl;
    cout << dest << endl;
    
    return 0;
}
