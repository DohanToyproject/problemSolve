#include <stdio.h>

int main(void) {
    int caseNum = 0;
    scanf("%d", &caseNum);

    for(int i=0; i<caseNum; i++) {
        int repeat = 1;
        char phrase[20];        
        scanf("%d %s", &repeat, phrase);

        int idx=0;
        while(phrase[idx] != '\0') {
            for(int j=0; j<repeat; j++) {
                printf("%c", phrase[idx]);
            }
            idx++;
        }
        printf("\n");
    }
}