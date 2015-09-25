#ifndef _DATASTRUCTURE_COMMON_H
#define _DATASTRUCTURE_COMMON_H
#ifdef __cplusplus
extern "C" {
#endif
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
/*
     宏
     #define test(a, b) #a""#b  // test(x, y) => "xy" 强制字符数组转换
     #define test2(a, b, c) a##b##_c   //test(x, y, z) => xy_c 强制连接
*/
#define char_star char*
#define void_star void*
/*
  typ 只接收char_star, int, double, size_t, void_star五种类型,
  其他扩展类型需要使用void_star进行转换(地址)
*/
#define object_getdata(o, typ) (o.data._##typ)
#define object_getdata_ext(o, typ) ((typ)(o.data._void_star))
#define object_init(typ, val) (                    \
                {                                  \
                        object __o_;               \
                        __o_.data._##typ = val;    \
                                __o_;              \
                })
/* 变量值交换 */
#define $swap(a, b, typ)                                                \
        typ t0x = a;                                                    \
        a = b;                                                          \
        a = t0x


/*
  返回状态
*/
#ifndef OVERFLOW
#define OVERFLOW 3
#endif
#define ERROR 1 // the return value when error happens executing some functions
#define SUCESS 0
/*
     别名
*/
typedef struct
{
        union
        {
                int _int;
                size_t _size_t; /* unsigned int */
                double _double;
                char_star _char_star;
                void_star _void_star;
        }data;
}object;
#ifdef __cplusplus
}
#endif
#endif /* datastructure_common.h */
