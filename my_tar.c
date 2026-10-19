#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int create_archive(char *nom_archive, char **fichiers, int nb_fichiers) {
    printf("Création de l'archive : %s\n", nom_archive);
    return 0;
}

int list_archives(char *nom_archive) {
    printf("Liste du contenu de l'archive : %s\n", nom_archive);
    return 0;
}

int extract_archives(char *nom_archive) {
    printf("extact: de l'archive : %s\n", nom_archive);
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Erreur : arguments insuffisants\n");
        return 1;
    }

    char *options = argv[1];
    char *nom_archive = argv[2];

    if (strchr(options, 'c') != NULL) {
        return create_archive(nom_archive, argv + 3, argc - 3);
    }
    else if (strchr(options, 't') != NULL) {
        return list_archives(nom_archive);
    }
    else if (strchr(options, 'x') != NULL) {
        return extract_archives(nom_archive);
    }
    else {
        fprintf(stderr, "Option non reconnue\n")
        return 1;
    }
}