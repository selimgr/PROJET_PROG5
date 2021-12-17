#include "elf_lib/elf_lib.h"

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        printf("Spécifiez un fichier ELF\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");

    if (f == NULL) {
        printf("Erreur lecture fichier\n");
        return 1;
    }

    Elf32 test;
    init_header(f, &test);
    printf("ident: %d\n", test.e_ident[0]);
    printf("ident: %c\n", test.e_ident[1]);
    printf("type: %d\n", test.e_type);
    printf("machine: %d\n", test.e_machine);

    return 0;
}