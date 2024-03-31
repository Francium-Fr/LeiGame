//product.h

#ifndef _PRODUCT   
#define _PRODUCT  

#include "config.h"

typedef struct
{
    char name [MAX_PRODUCT_NAME];
    int price;
} Product;

/**
*@brief input a Product 
*
**/
Product* RegistProduct(char[],int);

/**
*@brief output a Product message
*
**/
void  PrintProduct(char []);

typedef struct
{
   char name [MAX_PRODUCT_NAME];
   int count;
}Material;

/**
*@brief output a Material message
*
**/
void  PrintMaterial(Material*);

#endif
