#include <stido.h>
main () {
    int *p;
    int a;
    scanf("%d",&a);
    p=&a;
    printf("%d\n", *p);
    return 0;
}