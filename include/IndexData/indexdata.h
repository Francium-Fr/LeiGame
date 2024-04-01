#ifndef _INDEXDATA  
#define _INDEXDATA 

#include"linkedlist.h"
#include"product.h"
#include"process.h"

extern const IndexData Products;
extern const IndexData Reactions;

typedef struct
{
   char* name;
   Linkedlist _datas;
}IndexData;

Product* GetProduct(IndexData*,char[]);

Reaction* GetReaction(IndexData*,char[]);

#endif