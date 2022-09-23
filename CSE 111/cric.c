#include <stdio.h>
int main() {
    //take 10 int inputs 
    int a, b, c, d, e, f, g, h, i, j;
    printf("Enter 10 integers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    int sumb = a+b+c+d+e+f+g+h+i+j;
    //count how many numbers are greater than 50

    for (int count = 0;a||b||c||d||e||f||g||h||i||j >50 ;count++) {
        count++;
        printf("The number of integers greater than 50 is %d", count);
    }

        int k, l, m, n, o, p, q, r, s, t;
    printf("Enter 10 integers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &k, &l, &m, &n, &o, &p, &q, &r, &s, &t);
    int sums = k+l+m+n+o+p+q+r+s+t;
    //
    if (sumb > sums) {
        printf("BAN WON");

    }
    
    else {
        printf("SRI WON");
    }
}