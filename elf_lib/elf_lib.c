#include "elf_lib/elf_lib.h"

void init_header(FILE *f, void * elf_h) {
    printf("init\n");
}
void write_elf (FILE *f, void * elf_h);

/* Etape 2 */
/* readelf -S */
void read_sections(FILE *f, void * elf_h, void ** arr_elf_SH);
void read_section(FILE *f, void * elf_h, void * elf_SH);
void print_sections_header(FILE *f, void ** arr_elf_SH);
void print_section_header(FILE *f, void * elf_SH);

/* Etape 3 */
/* readelf -x num */
void read_data_section(FILE *f, void * elf_SH);
void print_data_section(FILE *f, void * elf_SH);