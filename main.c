#include <stdio.h>

int main() {
//    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//    int (*pInt)[4];
//    int hang, lie;
//    while (1) {
//        printf("hang =");
//        scanf("%d", &hang);
//        if (hang >= 0 && hang < 3) {
//            break;
//        }
//    }
//    while (1) {
//        printf("lie =");
//        scanf("%d", &lie);
//        if (lie >= 0 && lie < 4) {
//            break;
//        }
//    }
//    pInt = a;
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            if (i == hang && j == lie) {
//                printf("a[%d][%d]=%d", i, j, *(*(pInt + i) + j));
//            }
//        }
//    }

    char *string = "hello world.";
    printf("%s\n", string);
    printf("%c", string[11]);

    return 0;
}