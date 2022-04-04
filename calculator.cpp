#include <iostream>
#include "calculator.h"
#include <cstring>

using namespace std;
float add(float x, float y)
{
    return x+y;
}

float subtract(float x, float y)
{
    return x-y;
}
float multiply(float x, float y)
{
    return x*y;
}
float divide(float x, float y)
{ 
    if(y==0) cout<<"Debilu nie przez 0"<<endl;
    else 
    return x/y;
}
float calculate(float x, float y, char * operations[],  unsigned int size)
{ float wynik=0;  float tab[100];int licznik =0;
for (int i=1;i<(int)size;i++)//w petli porownujemy wszytskie argumenty z operations
{   
    if((string)operations[i]=="add")
    {
    tab[licznik] = add(x,y);
    }
    if((string)operations[i]=="sub")
    {
    tab[licznik] = subtract(x,y);
    }
    if((string)operations[i]=="mul")
    {
    tab[licznik] = multiply( x,  y);
    }
    if((string)operations[i]=="div")
    {
    tab[licznik] = divide(x,y);
    }
    licznik++;
}
 for(int i = 0;i<licznik;i++)
 {
      wynik= wynik+tab[i];//na koncu wszystko sumujemy
 }
    return wynik;
}