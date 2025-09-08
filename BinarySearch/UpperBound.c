#include <stdio.h>

int UpperBound(int arr[], int n, int x)
{
    int l = 0, h = n - 1, ans = n;
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] > x)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    printf("Enter the no.of Elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Elements (sorted): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the Element to be searched: ");
    scanf("%d", &x);

    int index = UpperBound(arr, n, x);
    if (index == n)
        printf("No element greater than %d found (upper bound does not exist).\n", x);
    else
        printf("The Upper Bound of %d is at index %d (value = %d)\n", x, index, arr[index]);

    return 0;
}
