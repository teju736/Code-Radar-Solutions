#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            switch (j) {
                case 1: printf("A "); break;
                case 2: printf("B "); break;
                case 3: printf("C "); break;
                case 4: printf("D "); break;
                case 5: printf("E "); break;
                case 6: printf("F "); break;
                case 7: printf("G "); break;
                case 8: printf("H "); break;
                case 9: printf("I "); break;
                case 10: printf("J "); break;
                case 11: printf("K "); break;
                case 12: printf("L "); break;
                case 13: printf("M "); break;
                case 14: printf("N "); break;
                case 15: printf("O "); break;
                case 16: printf("P "); break;
                case 17: printf("Q "); break;
                case 18: printf("R "); break;
                case 19: printf("S "); break;
                case 20: printf("T "); break;
                case 21: printf("U "); break;
                case 22: printf("V "); break;
                case 23: printf("W "); break;
                case 24: printf("X "); break;
                case 25: printf("Y "); break;
                case 26: printf("Z "); break;
            }
        }
        printf("\n");
    }
}