
libft

    Projet du cursus de l'école 42 Málaga

Ce dépôt contient tous les fichiers du projet libft dans le cursus principal de l'école 42 Paris. C'est une bibliothèque personnalisée de fonctions utiles en langage C. Le dépôt inclut le Makefile et la bibliothèque libft.h.
À propos · Index · Exigences · Instructions · Tests
À propos

Ce projet est une bibliothèque C de fonctions utiles qui peuvent être utilisées dans les projets futurs du cursus de l'école 42. Avec l'accès à cette bibliothèque, le processus de codage dans les projets à venir sera plus efficace. L'objectif de réécrire ces fonctions est de mieux les comprendre et d'acquérir une large gamme d'outils pour les prochains projets. Tu peux trouver plus d'informations dans le sujet ici. Comme indiqué dans le sujet, tous les fichiers se trouvent dans le même dossier.

Le code dans ce dépôt suit les règles de la Norminette.
Index
Fonctions de la bibliothèque <ctype.h>

    ft_isascii - Vérifie si un caractère est un caractère ASCII 7 bits.
    ft_isalpha - Vérifie si un caractère est alphabétique.
    ft_isdigit - Vérifie si un caractère est un chiffre décimal.
    ft_isalnum - Vérifie si un caractère est alphanumérique.
    ft_isprint - Vérifie si un caractère est imprimable, y compris un espace.
    ft_tolower - Convertit un caractère en minuscule.
    ft_toupper - Convertit un caractère en majuscule.

Fonctions de la bibliothèque <stdlib.h>

    ft_atoi - Convertit une chaîne ASCII en entier.
    ft_calloc - Alloue de l'espace pour un tableau et l'initialise à 0.

Fonctions de la bibliothèque <strings.h>

    ft_bzero - Remplit les premiers octets d'un objet avec des zéros.
    ft_memset - Remplit la mémoire avec une valeur donnée.
    ft_memchr - Trouve la première occurrence d'un caractère dans un tampon.
    ft_memcmp - Compare les octets dans deux tampons.
    ft_memmove - Copie des octets d'un tampon à un autre, en gérant correctement la mémoire chevauchante.
    ft_memcpy - Copie des octets d'un tampon à un autre.

Fonctions de la bibliothèque <string.h>

    ft_strlen - Obtient la longueur d'une chaîne.
    ft_strchr - Trouve la première occurrence d'un caractère dans une chaîne.
    ft_strrchr - Trouve la dernière occurrence d'un caractère dans une chaîne.
    ft_strnstr - Localise une sous-chaîne dans une chaîne.
    ft_strncmp - Compare deux chaînes, jusqu'à une longueur donnée.
    ft_strdup - Crée un duplicata d'une chaîne avec malloc.
    ft_strlcpy - Copie une chaîne avec une taille maximale.
    ft_strlcat - Concatène une chaîne avec une taille maximale.

Fonctions non standard

    ft_itoa - Convertit un entier en chaîne ASCII.
    ft_substr - Obtient une sous-chaîne d'une chaîne.
    ft_strtrim - Supprime les caractères de début et de fin d'une chaîne.
    ft_strjoin - Concatène deux chaînes dans une nouvelle chaîne, en utilisant calloc.
    ft_split - Divise une chaîne avec un caractère spécifique comme délimiteur.
    ft_strmapi - Crée une nouvelle chaîne modifiée par une fonction donnée.
    ft_striteri - Modifie une chaîne avec une fonction donnée.
    ft_putchar_fd - Affiche un caractère dans un fichier donné.
    ft_putstr_fd - Affiche une chaîne dans un fichier donné.
    ft_putendl_fd - Affiche une chaîne dans un fichier donné avec un saut de ligne.
    ft_putnbr_fd - Affiche un entier dans un fichier donné.

Fonctions de liste chaînée (bonus)

    ft_lstnew - Crée une nouvelle liste.
    ft_lstsize - Compte les éléments d'une liste.
    ft_lstlast - Trouve le dernier élément d'une liste.
    ft_lstadd_back - Ajoute un nouvel élément à la fin de la liste.
    ft_lstadd_front - Ajoute un nouvel élément au début de la liste.
    ft_lstdelone - Supprime un élément de la liste.
    ft_lstclear - Supprime une séquence d'éléments d'une liste à partir d'un point de départ.
    ft_lstiter - Applique une fonction au contenu de tous les éléments d'une liste.
    ft_lstmap - Applique une fonction au contenu de tous
