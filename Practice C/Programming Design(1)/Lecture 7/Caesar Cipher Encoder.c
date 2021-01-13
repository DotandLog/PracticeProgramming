#include<stdio.h>

int main(void) {
    int k, n;
    char c;
    scanf("%d\n", &k);

    if (k < 0)
    {
        k = -k;
        n = k % 26;

        for (int i = 1;; i++) {
            c = getchar();
            if ((c >= 'a') && (c <= 'z')) {
                c -= n;
                
                if (c < 'a')
                {
                    c = c + 26;
                }
                else
                    c = c;
            }
            else if ((c >= 'A') && (c <= 'Z')) {
                c -= n;
                if (c < 'A') {
                    c = c + 26;
                }
                else {
                    c = c;
                }
            }
            else if (c == '\n') {
                break;
            }
            else {
                c = c;
            }
            printf("%c", c);
        }
    }

    else
    {
        n = k % 26;
        for (int i = 1;; i++) {
            c = getchar();
            if ((c >= 'a') && (c <= 'z')) {
                c += n;
                if (c < 0)
                {
                    c -= n;
                    c = c + (n - 26);
                }
                else if (c > 'z')
                {
                    c = c - 26;
                }
                else
                    c = c;
            }
            else if ((c >= 'A') && (c <= 'Z')) {
                c += n;
                if (c > 'Z') {
                    c = c - 26;
                }
                else {
                    c = c;
                }
            }
            else if (c == '\n') {
                break;
            }
            else {
                c = c;
            }
            printf("%c", c);
        }
    }   
}