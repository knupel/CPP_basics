## C++ basique

Vous trouverez ici les quelques lignes de code que j'écris pour m'aider dans mon exploration du c++. Exploration qui passe par la découverte des variables, des listes, des méthodes, des structures et bien entendu des classes. 
Cette collection de sketches s’enrichira au fur et à mesure de mon apprentissage.

J'espère que vous pourrez en profitez si vous aussi vous partez à la découverte de ce merveilleux univers qu'est la C++, né du C.

## basic C++
You will find here the few lines of code I write to help me in my exploration of C++. Exploration that involves the discovery of variables, lists, methods, structures and of course classes. 
This collection of sketches will be enriched as I learn more and more.

I hope that you will be able to take advantage of it if you too discover this wonderful universe that is C++, born from C.


## Créer votre librairie
[gabarit librairie](https://github.com/StanLepunK/CPP_basics/tree/master/LIBRARY/lib)

Vous trouverez également un gabarit pour réaliser votre librairie C++.
Pour cela éditer le `makefile` remplacez les `file.hpp`par celui souhaité, de même pour les `file.cpp` et `file.a`. 

Une fois fait ciblez votre dossier dans votre terminal et lancez une commande  `make` qui générera `file.a`. 

Vous pourrez ensuite déspoer ce fichier `.a` et votre fichier `.hpp` dans votre dossier de travail. 

Vous pouvez ensuite nettoyer votre dossier de librairie en utilisant la commande `make clean`ou `make fclean`


## Make your library
[library template](https://github.com/StanLepunK/CPP_basics/tree/master/LIBRARY/lib)

You will also find a template to build your own C++ library.
To do this, edit the `makefile` and replace the `file.hpp` with the desired one, the same goes for the `file.cpp` and `file.a`. 

Once you have targeted your directory in your terminal and run a `make` command which will generate `file.a`. 

You can then unpack this `.a` file and your `.hpp` file into your working directory.

You can then clean your library folder using the `make clean` or `make fclean` command.


## À partir de Xcode
Pour créer un projet C++ avec Xcode

1 > Créer un `new Xcode project`

2 > Sélectionnez `MacOs`

3 > Sélectionnez `Command Line Tool`

4 > Cliquer `Next`

5 > Nommez votre `Product Name`

6 > Nommez votre `Organization Identifier`

Et voilà

###	À noter que si vous souhaitez importer des fichiers depuis des dossiers :

1 > Dans votre dossier `src` faire `add files` dans le menu contextuel ou bien l'ajouter directement.
![add files](https://raw.githubusercontent.com/StanLepunK/CPP_basics/master/src_img/add_files.jpg)

2 > Puis dans la barre de réglages dans l'onglet `build phase` ajoutez les fichiers nécessaires à votre projet.
![link files](https://raw.githubusercontent.com/StanLepunK/CPP_basics/master/src_img/build_phase.jpg)


## From Xcode
To create a C++ project with Xcode

1 > Create a `new Xcode project`.

2 > Select `MacOs`.

3 > Select `Command Line Tool`.

4 > Click `Next`.

5 > Name your `Product Name`.

6 > Name your `Organization Identifier`.

### Please note that if you want to import files from :

either

1 > in your `src` folder do `add files` in the context menu.

2 > then in the settings bar in the `build phase` tab add the necessary files to your project.


