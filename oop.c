#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct array{
    struct array* self;
    int* data;
    size_t size;
    void (*pfnSet)(struct array*, size_t, int);
    int  (*pfnGet)(struct array*,size_t);

}array_t;

int Get_array_t(array_t* self,size_t index)
{
    return self->data[index];
}

void Set_array_t(array_t* self, size_t index, int value)
{
    if (self == NULL)
    {
        return ;
    }
    if (index >=0 && index < self->size)
    {
        self->data[index] = value;
    }
}

array_t* make_array(size_t capacity)
{
    array_t* newArr = (array_t*)malloc(sizeof(array_t));
    newArr->self = newArr ;
    newArr->data = (int*)malloc(sizeof(int) * capacity);
    newArr->size = capacity ;
    newArr->pfnSet = Set_array_t;
    newArr->pfnGet = Get_array_t;
    return newArr;
}


void destory_array(array_t* self)
{
    free(self->data);
    free(self);
}
int main()
{
     array_t* test = make_array(10);
     for (int i=0; i <test->size; i++)
     {
        test->pfnSet(test->self,i,i);
     }
     for (int i=0; i <test->size; i++)
     {
        printf("%d\n", test->pfnGet(test->self,i));
     }
     destory_array(test);
}