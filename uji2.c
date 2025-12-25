#include <stdio.h>
#include <unistd.h>

int main()
{
    execlp("ls",   // program yang dimuat - dicari via PATH
           "ls",   // nama program yang dikirim ke argv[0]
           "-l",   // parameter pertama (argv[1])
           "-a",   // parameter kedua (argv[2])
           NULL);  // terminasi arg list

    printf("EXEC Failed\n");
    return 0;
}
