#ifndef __JEU__H__
#define __JEU__H__

#define PG_MSG "> proposer un plus grand >>>"
#define PP_MSG "<<< proposer un plus petit <"
#define ENTRER_NB_MSG "Proposer un nb entier : "
#define SUCCES_MSG ">game over<"
enum Reponse_Type
{
    REPONSE_JUSTE = 1,
    REPONSE_SINCERE = 0,
    REPONSE_MENSONGERE = -1
};
enum ETAT
{
    BOURRE,
    SOBRE
};
extern int entrer_nombre(void);
extern int generer_hasard(void);
extern int afficher_comparaison(int proposition, int a_trouver, float alcoolemie);

#endif