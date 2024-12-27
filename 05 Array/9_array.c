#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n];
    scanf("%s", arr);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        char c = tolower(arr[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }

    printf("Count: %d\n", count);

    return 0;
}