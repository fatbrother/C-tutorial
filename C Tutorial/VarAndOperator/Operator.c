#include <stdio.h>

int main()
{
    int a = 1, b = 2, c;
    c = a + b; // 數字：+ - * / >> << & | ^
    c = c + b; //
    c += b;    // 這是 c = c + b 的縮寫 
               // 中間的加號可以換成基本上所有
               // opertor
    c++; //c = c + 1 的特殊寫法
    ++c; //這兩個寫法有一點差別 之後會介紹
    return 0;
}