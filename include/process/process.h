//Reaction.h

#ifndef _Reaction  
#define _Reaction

#include "product.h"
typedef struct 
{
    Reaction* reations;
    int total_price;
    int total_pollution;
}  Process;

typedef struct
{
    int id;
    char product[MAX_PRODUCT_NAME];
    int level;
    int count;
    int once_pollutant;
    int once_price;

    Material materials[MAX_MATERIAL_NUM];
    Process* processes;
} Reaction;

/**
*@brief input a Reaction 
*
**/
Reaction* RegistReaction(int, char[],int,int,int,int,Material*);

/**
*@brief output a Reaction message
*
**/
void  PrintReaction(Reaction*);

/**
*@brief Caculate once you want to react the Reaction ,
How many prereaction you need, and total price and pollutant you could get 
after the all those prereaction  including the Reaction.
*
**/
void CaculateReaction(Reaction*);


#endif