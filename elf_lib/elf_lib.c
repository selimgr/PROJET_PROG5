#include "elf_lib/elf_lib.h"

/* Étape 1 */
void init_header(FILE *f, void * elf_h) {
    printf("init\n");
    
    elf_h = ((Elf32 *) elf_h);

    fread(&((Elf32 *) elf_h)->e_ident, 16, 1, f);
    fread(&((Elf32 *) elf_h)->e_type, 2, 1, f);
    fread(&((Elf32 *) elf_h)->e_machine, 2, 1, f);
}

void write_elf (FILE *f, void * elf_h) {
    fprintf(f, ((Elf32 *) elf_h)->e_type);
} 

/* Étape 2 */
void read_sections(FILE *f, void * elf_h, void ** arr_elf_SH) {

}  

void read_section(FILE *f, void * elf_h, void * elf_SH) {

}

void print_sections_header(FILE *f, void ** arr_elf_SH) {

}

void print_section_header(FILE *f, void * elf_SH) {

}

/* Étape 3 */
/* readelf -x num */
void read_data_section(FILE *f, void * elf_SH) {

}

void print_data_section(FILE *f, void * elf_SH) {

}