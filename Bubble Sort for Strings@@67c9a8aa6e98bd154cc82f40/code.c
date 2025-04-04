int main() {
    int n;
    char arr[100][100];

    scanf("%d", &n); // Number of strings

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
