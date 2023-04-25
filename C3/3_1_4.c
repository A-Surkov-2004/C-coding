#include <stdio.h>
#include <stdlib.h>

struct date
{
    unsigned int day : 5, month : 4, year : 12;
};


int main()
{
    struct date birth = { 29,2,2004 };
    printf("day: %u \nMonth: %u \nYear: %u", birth.day, birth.month, birth.year);
    return 0;
}
