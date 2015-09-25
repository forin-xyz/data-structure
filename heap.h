typedef Array Heap

/*
  就这样实现之
 */

Heap_init = Array_init;

void Heap_push(Heap *h, obj)
{
        Array_append(h, obj);
        /*
          从h->size-1 -> 0
          idx = h->size-1;
          parent = (idx-1)>>1;
          tmp = l[idx]
          while(parent >= 0 and l[idx] < l[parent]):
               l[idx] = l[parent]
               idx = parent
               parent = (parent-1)>>1
          l[idx] = tmp
         */
}

void uptodown(obj* obitem, i, key)
{

}

void uptotop(obj* obitem, i, key)
{

}
Heap* Heapify(Array *a)
{
        /*
          从第一个非叶节点开始进行调整向前调整, 插入排序的另内版本
         */
        return a;
}

object Heap_pop(Heap *h)
{
        ret = h->obitem[0];
        h->obitem[0] = h->obitem[h->size-1];
        Array_del(h->size-1);
        tmp = h->obitem[0];
        /* parent = 0; */
        /* lchild = 2*parent + 1; */
        /* rchild = 2*parent + 2; */
        /* c = min(lchild, rchild); */
        /* do
        /* { */
        /*         l[parent] = l[c]; */
        /*         parent = c; */
        /*         lchild = 2 * parent + 1; */
        /*         rchild = 2 * parent + 2; */
        /*         c = lchild if l[lchild] < l[rchild] else rchild; */

        /* } while( l[c] < l[parent] ) */
        /* 也是插入函数 */

}
