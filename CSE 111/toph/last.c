#include<stdio.h>
int main() {
    int n, count = 0,over,ball;
    char c;
        scanf("%d", &n);
   for(int i = 0 ; i <= n*2 ; i++) {
   
    scanf("%c", &c);
    if( c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c=='O') {
        count++;
    }

}
if(count < 6)  {
    if(count == 1 || count == 0) {
        printf("%d BALL", count);
    }
    else {
        printf("%d BALLS", count);
    }
}
else {
over = count / 6;
ball = count % 6;

 if(over == 0 && ball > 1) {
    printf("%d BALLS", ball);
}
else if(over == 1 && ball == 0) {
    printf("%d OVER", over);
}
else if(over == 1 && ball == 1) {
    printf("%d OVER %d BALL", over, ball);
}
else if(over == 1 && ball > 1) {
    printf("%d OVER %d BALLS", over, ball);
}
else if(over > 1 && ball == 0) {
    printf("%d OVERS", over);
}
else if(over > 1 && ball == 1) {
    printf("%d OVERS %d BALL", over, ball);
}
else if(over > 1 && ball > 1) {
    printf("%d OVERS %d BALLS", over, ball);
}
}
}