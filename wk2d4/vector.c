#include <stdio.h>
#include <stdlib.h>

typedef struct vector{
     void** items;
      int size;
       int length;} vector;

void vector_init(vector *v)
{
    v.size= VECTOR_INIT_SIZE;
    v.length = 0;
    v.items = malloc(sizeof(void *) * v.capacity);
}

int vector_length(vector *v)
{
    return v.length;
}


void vector_add(vector *v, void *item)
{
    if (v.capacity == v.total){
       print(stdrerr,"vector full");
     }else{

        v.items[v.total++] = item;

     }

void vector_set(vector *v, int i, void *item)
{
    if (i >= 0 && i < v.total)
        v.item[i] = item;
}

void *vector_get(vector *v, int i)
{
    if (i >= 0 && i < v.total)
        return v.item[i];
    return NULL;
}

void vector_delete(vector *v, int i)
{
    if (i < 0 || i >= v.total)
        return;

    v.items[i] = NULL;

    for (int i = 0; i < v.total - 1; i++) {
        v->items[i] = v->items[i + 1];
        v->items[i + 1] = NULL;
    }

    v->total--;

   }

void vector_free(vector *v)
{
    free(v.items);
}
int main(void)
{
    int i;

    vector v;
    vector_init(&v);

    vector_add(&v, "hello");
   
    for (i = 0; i < vector_total(&v); i++)
        printf("%s ", (char *) vector_get(&v, i));
    printf("\n");

    vector_delete(&v, 1);

    vector_set(&v, 0, "Hello");
    vector_add(&v, "World");

    for (i = 0; i < vector_total(&v); i++)
        printf("%s ", (char *) vector_get(&v, i));
    printf("\n");

    vector_free(&v);
}


