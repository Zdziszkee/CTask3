#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc != 2)return 69;
    long n = strtol(argv[1], NULL, 10);

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int index = 2; index * index <= n; index++) {
        if (prime[index] == true) {
            for (int i = index * index; i <= n; i += index) {
                prime[i] = false;
            }
        }
    }

    for (int index = 2; index <= n; index++) {
        if (prime[index])
            printf("%d ", index);
    }
    return 0;
}
