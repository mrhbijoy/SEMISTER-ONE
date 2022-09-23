#include <stdio.h>
int main() {
    int count = 0;
    int a, b, c, d, e, f, g, h, i, j;
    printf("RUNS BY BAN ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    int sumb = a+b+c+d+e+f+g+h+i+j;
   
   if(a>=50){
    count++;
   }
    if(b>=50){
     count++;
    }
    if(c>=50){
     count++;
    }
    if(d>=50){
     count++;
    }
    if(e>=50){
     count++;
    }
    if(f>=50){
     count++;
    }
    if(g>=50){
     count++;
    }
    if(h>=50){
     count++;
    }
    if(i>=50){
     count++;
    }
    if(j>=50){
     count++;
    }
   int k, l, m, n, o, p, q, r, s, t;
    printf("RUNS BY SRI ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &k, &l, &m, &n, &o, &p, &q, &r, &s, &t);
    int sums = k+l+m+n+o+p+q+r+s+t;
    if(k>=50){
     count++;
    }
    if(l>=50){
     count++;
    }
    if(m>=50){
     count++;
    }
    if(n>=50){
     count++;
    }

    if(o>=50){
     count++;
    }
    if(p>=50){
     count++;
    }
    if(q>=50){
     count++;
    }
    if(r>=50){
     count++;
    }
    if(s>=50){
     count++;
    }
    if(t>=50){
     count++;
    }
    if (sumb > sums) {
        printf("BAN WON\n");
        printf("Total half centuary %d\n", count);
    }
    else if (sumb < sums) {
        printf("SRI WON\n");
           printf("Total half centuary %d\n", count);

    }
    

}