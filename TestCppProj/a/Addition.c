/*
 * Addition.c
 */

#include <stdio.h>#include "Addition.h"int globBase = 10;int getBase(Addition* obj){        return obj->baseNum;}void setBase(Addition* obj,int _base){        obj->baseNum = _base;}int calculate(Addition* obj, int param){    return obj->baseNum + param;}int main(int argc, char** argv){        int value =0;        Addition obj;        setBase(&obj, globBase);        value = calculate(&obj,5);        printf("%d\n",value);        return 0;}
