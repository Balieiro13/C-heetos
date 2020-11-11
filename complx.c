#include <stdio.h>
#include <stdlib.h>

struct complx {
    int r;
    int i;
};

struct complx *Complexo(int real, int img)
{
    struct complx *pt = (struct complx*)malloc(sizeof(struct complx));

    pt->r = real;
    pt->i = img;

    return pt;
}

struct complx *add (struct complx *p, struct complx *q)
{
    struct complx *cu = Complexo(0, 0);

    cu->r = (p->r) + (q->r);
    cu->i = (p->i) + (q->i);

    return cu;
}


int main()
{
    struct complx *x = Complexo(2, 7);
    struct complx *y = Complexo(1, 3);

    return 0;
}
