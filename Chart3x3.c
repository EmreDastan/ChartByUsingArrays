#include <stdio.h>
void chart();
int main() {
    chart();
}
void chart() {
    int graph[3][3];
    int mainloopkey,loopkey;
    for (mainloopkey = 0; mainloopkey < 3; mainloopkey++) {
        for (loopkey = 0; loopkey < 3; loopkey++) {
            printf("Please enter a number : ");
            scanf("%d" , &graph[mainloopkey][loopkey]);
        }
        printf("\n");
    }
    printf("Your chart is :\n");
    for (mainloopkey = 0; mainloopkey < 3; mainloopkey++) {
        for (loopkey = 0; loopkey < 3; loopkey++) {
            printf("%d " , graph[mainloopkey][loopkey]);
        }
        printf("\n");
    }
}