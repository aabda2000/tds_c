#ifndef __JEU__H__
#define __JEU__H__

#define PG_MSG "> plus grand >>>"
#define PP_MSG "<<< plus petit <"
#define NB_MSG "Saisir un nb entier : "

extern int entrer_nombre(void);
extern int generer_hasard(void);
extern int afficher_comparaison(int proposition, int a_trouver);

#endif