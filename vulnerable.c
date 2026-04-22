#include <stdio.h>
#include <string.h>

void secret_function() {
    printf("Bravo ! Vous avez détourné le flux d'exécution !\n");
}

void echo() {
    char buffer[64]; // Un petit espace mémoire
    printf("Entrez votre message : ");
    gets(buffer);    // DANGER : gets ne vérifie pas la taille !
    printf("Vous avez dit : %s\n", buffer);
}

int main() {
    echo();
    return 0;
}
