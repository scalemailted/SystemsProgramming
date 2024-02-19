#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main()
{
    int i_val = 12345;
    float f_val = 12345.0;
    int *p_val = &i_val;

    printf("Showing byte ordering of int (%d):\n",i_val);
    show_int(i_val);

    printf("Showing byte ordering of float (%f):\n",f_val);
    show_float(f_val);

    printf("Showing byte ordering of pointer (%p):\n", (void*)p_val);
    show_pointer(p_val);

    return 0;
}
