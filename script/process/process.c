#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "process.h"

Reaction* RegistReaction(int id, char product[],int level,int count,int pollutant,int price,Material* materials)
{
    Reaction * reaction=(Reaction *)malloc(sizeof(Reaction));
    reaction->id=id;
    strcpy (reaction->product,product);
    reaction->level=level;
    reaction->count=count;
    reaction->once_pollutant=pollutant;
    reaction->once_price=price;

    int index=0;
    Material*cursor=materials;
    while (cursor!=NULL)
    {
        memcpy((void*)reaction->materials+index,cursor,sizeof(Material));
        index++;
    }
    
}

void  PrintReaction(Reaction* reaction)
{
    printf("id:%d, production:%s \n level:%d,count:%d,pollutan:%d, price:%d",reaction->id,&reaction->product,reaction->level,reaction->count,
    reaction->once_pollutant,reaction->once_price);
    for (Material* i =reaction->materials ; i !=NULL; i++)
    {
        PrintMaterial(i);
    }
    
}
