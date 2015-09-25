#include "../datastructure_common.h"
#include <assert.h>
#include <regex.h>

/*
  object_init object_getdata object_getdata_ext
 */
void test_object_init()
{
        //int
        object o;
        o = object_init(int, 10);
        printf("test object_init(int, ?) object_getdata(?, int): ");
        assert(object_getdata(o, int)==10);
        printf("ok!\n");
        // double
        o = object_init(double, 5.0);
        printf("test object_init(double, ?) object_getdata(?, double): ");
        assert(abs(object_getdata(o, double) - 5.0) < 1e9);
        printf("ok!\n");
        printf("test object_init(char_star, ?) object_getdata(?, char_star)");
        object o2 = object_init(char_star, "你好");

}


int test_function(f, args, val)
{
        /*
          所以单元测试总是一厢情愿 难以施展
          我们总是不得不面对这些令人烦恼的问题
        */
        /*
          我决定第一个参数选择字符串类型, 这样就可以确定是哪些参数了
          "int joie(int a, int b)" => 反省出函数原型 => 确定后面的参数 => 最后一个是预估的值

          首位是int, 第二位是函数名,
          然后是两个括号 括号里面是类型 变量名 类型 变量名 and so on!
          使用正则表达式进行模式匹配 然后就可以完成传说中的功能
        */

}
