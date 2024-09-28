#include <stdio.h>

void print_bytes(void* data, size_t data_len)
{
    char delim = ' ';
    unsigned char*  c_ptr = data;

    for(size_t idx = 0; idx < data_len; ++idx)
    {
        printf("%c 0x%x", delim, *c_ptr);
        delim = ',';
        ++c_ptr;
    }

    printf("\n");
}

void print_sizeof(char* _data)
{
    printf("Passed %s\n", *_data);
//    sizeof(char*)
}

struct sample_t
{
    short   fourth;
    char    first;
    char    second;
    char    third;
};

void print_size(struct sample_t* var)
{
    printf("Size: %lu bytes\n", sizeof(*var));
}

void print_struct_bytes(struct sample_t* var)
{
    unsigned char* ptr = (unsigned char*)var;
    for(size_t idx = 0; idx < sizeof(*var); ++idx, ++ptr)
    {
        printf("idx:%lu %d ,",idx, (unsigned char)*ptr);
        printf("Value: %d, size: %d\n", *ptr, sizeof(*ptr));
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    /*
    printf("Extreme C\n");

    int a = 12;
    double b = 123.56;

    print_bytes(&a, sizeof(int));
    print_bytes(&b, sizeof(double));

    char* value = "123";
    print_sizeof(value);
    */
   struct sample_t var;
   var.first = 'A';
   var.second = 'B';
   var.third = 'C';
   var.fourth = 765;
   print_size(&var);
   print_struct_bytes(&var);
   printf("%d\n",sizeof(short));

    

    return 0;
}