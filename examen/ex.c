#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main() {
    char s[100];
    int len;
    int a2b;
    int b2a;

    printf("a1\n");
    a2b = open("a2b", O_WRONLY);
    printf("a2\n");
    b2a = open("b2a", O_RDONLY);
    printf("a3\n");

    while(1) {
        printf("a4\n");
        printf("a says: ");
        fgets(s, 100, stdin);
        len = strlen(s);

        write(a2b, &len, sizeof(int));
        write(a2b, s, len);

        read(b2a, &len, sizeof(int));
        if(len > 100) {
            len = 100; 
        }
        read(b2a, s, len);

        printf("b said: %s\n", s);
    }

    close(a2b);
    close(b2a);

    return 0;
}
