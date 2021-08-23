# Labo 03 - Equation

## Objectifs pédagogiques
-  Récupérer des valeurs saisies par l’utilisateur.
-  Faire un diagramme de flux.
-  Utilisation de l’instruction « if ».
-  Introduire la notion de test automatique.
-  Editer, corriger et déboguer un programme. 

## Cahier des charges
-  Il n'est pas autorisé de travailler en groupe, c'est un laboratoire individuel.
-  Créer un programme qui résout l’équation quadratique.
  ```
    A*x^2+B*x+C=0
  ```
-  Le programme doit demander d’entrer les paramètres de l’équation (A,B,C).
-  Le programme doit afficher la valeur des 3 paramètres passés en entrée.
-  Le programme doit afficher les solutions de l’équation ou un message.
-  Le programme ne contrôle pas si autre chose que des nombres sont entrés par l’utilisateur.
-  S’il n’y a pas de solution valide, le programme retourne 1 sinon 0.

## Aides
###	Affichage et formatage d’une chaîne de caractère
Une chaîne de caractère est représentée entre guillemet double.
```C
"Une chaîne de caractères"
```
 
Pour afficher une chaîne de caractères, nous allons utiliser `printf`. Cette fonction prend en entrée un format et les variables.

```C
    int ma_valeur = 4;
    double r = sqrt(ma_valeur);
    printf("La racine de %d est : %.3f\n", ma_valeur, r);
``` 

Après le signe `%`, on retrouve le type de format que l’on souhaite. Vous pouvez regarder sur la carte jaune pour trouver différentes manières de formatter une chaîne de caractères. Dans le cas ci-dessus, la deuxième valeur passée en paramètre sera interprétée comme un `float` avec trois chiffres après la virgule.

Vous remarquez dans cette exemple `sqrt` qui peut vous être utile pour la suite.

### Test d’une valeur
Il se peut que dans votre programme vous deviez faire des tests pour comparer une valeur à une autre.
L’instruction `if` vous permets de faire un test. 

Voici un exemple qui fait la valeur absolue de la variable `test`

```C
    double test = -1.23;
    double res = 0.0;
    
    if (test > 0) {
        // je fais quelque chose si test > 0
        res = test;
    }
    else {
        // sinon je fais autre chose
        res = -test;
    }
    
    printf("Le resultat est : %lf\n", res);
```
 
### Valeur de retour
C’est l’instruction `return` qui permet de choisir la valeur que le programme retourne à la fin de l’exécution.
Par exemple pour retourner `0` si tout se passe bien

```C
   return 0;
```

## Tâches à effectuer
- Exécuter VS Code
- Comme pour le laboratoire `#1` (voir document info-resume.pdf)
  - Cloner le répertoire du laboratoire sur votre ordinateur
  - Ouvrir le code dans un `container`
 
## Affichage du programme
Voici trois exemples d'execution du programme, vous pouvez modifier les textes.

```console
$ ./app
Entrer A : 1
Entrer B : 2
Entrer C : -3

La valeur de A = 1
La valeur de B = 2
La valeur de C = -3
Solution 1 = -3.0
Solution 2 = 1.0
```

```console
$ ./app
Entrer A : 1
Entrer B : 2
Entrer C : 3


La valeur de A = 1
La valeur de B = 2
La valeur de C = 3
Pas de solution
```

```console
$ ./app
Entrer A : -2
Entrer B : 4
Entrer C : -2


La valeur de A = -2
La valeur de B = 4
La valeur de C = -2
Solution = 1.0

```


## Tests
Votre programme doit fonctionner pour toutes les combinaisons de nombre possible.

## Travaux à rendre
Vous devez faire un `commit` de votre programme avec le fichier `main.c` à jour.

## Délai
- Voir sur `Cyberlearn`
