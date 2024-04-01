#include <stdlib.h>
#include <string.h>
#include<stdio.h>

#include "indexdata.h"
#include "product.h"
Product* RegistProduct(char name[],int price)
{
    Product* product=(Product*) malloc (sizeof(Product));
    strcpy(product->name,name);
    product->price=price;
    return product;
}

void  PrintProduct(char name[])
{
    Product* product=GetProduct(&Products,name);
    printf('name:%s, price:%d \n',&name,product->price);
}

void  PrintMaterial(Material* material)
{
    printf('material:%s, count:%d \n',& material->name,material->name);
}
