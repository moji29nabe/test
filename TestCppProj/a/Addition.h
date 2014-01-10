#ifndef ADDITION_H_
#define ADDITION_H_

typedef struct{
        int baseNum;
}Addition;

int getBase(Addition* obj);
void setBase(Addition* obj,int _base);
int calculate(Addition* obj, int param);

#endif /*ADDITION_H_*/ 