#include <stdio.h>
int main()
{

    int n = 200, count;
    int first = 2;

    printf(" %d\n", first);

    for (int i = 3; i <= n; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf(" %d\n", i);
        }
    }

    return 0;
}

// output:
// 2
//  3
//  5
//  7
//  11
//  13
//  17
//  19
//  23
//  29
//  31
//  37
//  41
//  43
//  47
//  53
//  59
//  61
//  67
//  71
//  73
//  79
//  83
//  89
//  97
//  101
//  103
//  107
//  109
//  113
//  127
//  131
//  137
//  139
//  149
//  151
//  157
//  163
//  167
//  173
//  179
//  181
//  191
//  193
//  197
//  199