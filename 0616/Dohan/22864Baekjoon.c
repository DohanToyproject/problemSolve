#include <stdio.h>

int main(void) {
    int fatigue, work, rest, max;
    scanf("%d %d %d %d", &fatigue, &work, &rest, &max);

    int nowF = 0;
    int nowW = 0;

    for(int i=0; i<24; i++) {
        if( (nowF+fatigue) <= max ) {
            nowF += fatigue;
            nowW += work;
        } else {
            nowF -= rest;
            if(nowF < 0)
                nowF = 0;
        }
    }

    printf("%d\n", nowW);
}