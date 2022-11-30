 #include<stdio.h>
    int main() {
        int a[100], n;
        scanf("%d", &n);
        for (int i = 0; i < n;i++){
            scanf("%d", &a[i]);
        }
        int *p = &a[n - 1];
        for (int i = 0; i < n;i++){
            printf("%d ", *p);
            p--;
        }
        return 0;
    }