#include <stdlib.h>
#include <stdio.h>

main() {
    float a = 0.001;
    float b = 0.003;
    float c, *pa, *pb;
    pa = &a;
    pb = &b;
    c = 3 * (*pb - *pa);

    printf("%f",&a);
}
