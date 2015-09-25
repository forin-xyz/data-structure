#include "../datastructure_common.h"

int main()
{
        object o = object_init(double, 1.0);
        object o2 = object_init(void_star, &o);
        object o3 = *object_getdata_ext(o2, object*);
        /*
          object 确实是一个不错的主义,既可以保存
         */
        printf("%f\n", object_getdata(o3, double));

        /*

         */
}
