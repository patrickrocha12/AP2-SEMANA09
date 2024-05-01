// Ex 05

#include <stdio.h>

int reverseNumber(int num, int reverso) {
    if (num == 0) {
        return reverso;
    }
    return reverseNumber(num / 10, reverso * 10 + num % 10);
}

int main() {
    int num, reverso;
    printf("Digite um número inteiro para reverter: ");
    scanf("%d", &num);
    reverso = reverseNumber(num, 0);
    printf("O número reverso é: %d\n", reverso);
    return 0;
}