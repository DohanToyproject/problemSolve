# June 9 #Introduction & Examples

[Activity Planner.pdf](https://file.notion.so/f/s/082bd0c5-2cd7-4c72-8bb5-6c1c60e21921/DNP_%E1%84%92%E1%85%AA%E1%86%AF%E1%84%83%E1%85%A9%E1%86%BC_%E1%84%80%E1%85%A8%E1%84%92%E1%85%AC%E1%86%A8%E1%84%89%E1%85%A5.pdf?id=a1c683b4-f8e6-4d21-ac46-a3a2e383419f&table=block&spaceId=ef8e9098-6b13-428e-9683-fe47817d2d94&expirationTimestamp=1686941666214&signature=yBtrzdBPOqFUQlVQ-ri6mrlr0FgK2uxvVGbF62gpPrc&downloadName=DNP+%E1%84%92%E1%85%AA%E1%86%AF%E1%84%83%E1%85%A9%E1%86%BC+%E1%84%80%E1%85%A8%E1%84%92%E1%85%AC%E1%86%A8%E1%84%89%E1%85%A5.pdf)

[Example Problem that solved](https://www.acmicpc.net/problem/2439)


<img src="https://file.notion.so/f/s/371ed2ac-abc0-4392-9b4a-7a41235ae5a8/2439_Baekjoon.drawio.png?id=435e7e9e-778f-4a3d-9b91-0b4795ef0100&table=block&spaceId=ef8e9098-6b13-428e-9683-fe47817d2d94&expirationTimestamp=1686941912929&signature=a6zGX8JqkfipMIoUSndRO69VABhq5PXldQ0sH0P27Pc&downloadName=2439_Baekjoon.drawio.png" style="height:550px;" align="left" />

```c
// 2439Baekjoon.c

#include <stdio.h>

int main(void) {
   int lineNum = 0;
   scanf("%d", &lineNum);
   for(int i=0; i < lineNum; i++) {
      for(int k=0; k < lineNum - (i+1); k++) {
         printf(" ");
      }
      for(int j=0; j < i + 1; j++) {
         printf("*");
      }
      printf("\n");
   }
}
```

```py
# 2439Baekjoon.py

lineNum = int(input())
for i in range(lineNum):
   for k in range(lineNum-(i+1)):
      print(" ")
   for j in range(i+1):
      print("*")
   print("\n")
```
