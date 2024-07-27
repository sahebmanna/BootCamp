//Write a program to print Hello in the first line and Students in the second line.
#include<stdio.h>
//enum colors{CYAN,BLUE,BLACK};

    //printf("hello\nstudents");


#include<stdlib.h>
void set(int *to) {
    to = (int*)malloc(5 * sizeof(int));
}
void solve() {
    int *ptr;
    set(ptr);
    //*ptr = 10;
    printf("%d", *ptr);
}
int main() {
    solve();
	return 0;
}








   // printf("%d..%d..%d",BLACK,BLUE,CYAN);


