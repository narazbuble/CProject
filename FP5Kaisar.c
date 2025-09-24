#include <stdio.h>

int main(void) {
    long long K;
    if (scanf("%lld", &K) != 1) return 0;

    // buang newline setelah angka
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}

    static char s[100005 + 5];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int k = (int)((K % 26 + 26) % 26);

    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            s[i] = (char)('A' + (c - 'A' + k) % 26);
        } else if (c >= 'a' && c <= 'z') {
            s[i] = (char)('a' + (c - 'a' + k) % 26);
        }
    }

    printf("%s", s);
    return 0;
}
