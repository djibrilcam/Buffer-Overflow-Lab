BUffer Overflow Lab (C & ASM)

 Présentation
Ce projet est un laboratoire d'étude réalisé en autodidacte pour comprendre la gestion de la mémoire par le processeur et les vulnérabilités liées aux débordements de tampon.

 Compétences démontrées
- Programmation C : Manipulation de buffers et fonctions non sécurisées.
- Assembleur: Compréhension de la structure de la Pile (Stack), des registres (EIP/EBP) et des adresses de retour.
- Cybersécurité : Analyse de vulnérabilité et principes d'exploitation éthique.

 Contenu
- `vulnerable.c` : Programme contenant une faille de type stack overflow via la fonction `gets()`.
- `exploit_test.py` : Script Python pour générer un payload de test.

Concepts abordés
1. Organisation de la pile lors de l'appel d'une fonction.
2. Écrasement de la "Return Address" dans le cadre d'un détournement de flux.
