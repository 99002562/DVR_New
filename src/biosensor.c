#include "biosensor.h"
#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
typedef struct
{
    int V[20];
    int rp;
    int fp;
    int counter;
}QUE;
QUE p1,p2,p3,p4,p5;

int v,i,p,f,z,j,k;
int checkv(int t);
int checkv(int t)
{
    in(&p1,t);
    if(t==230)
        {
            i=1;
        return(0);
        }
    else if(t>230)
    {
        j=1;
        return(1);
    }
    else if(t<230)
    {
        k=1;
        return(-1);
    }
}
