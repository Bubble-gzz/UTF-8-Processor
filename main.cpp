#include <cstdio>
#include "utf8.h"
const int maxBuff = 100000;
char buff[maxBuff];
int res_L,res[maxBuff];;
int debugMode;
using namespace std;

FILE *fin,*fout;

int main()
{
    debugMode = RESULT;
    fin = fopen("input.txt","r");
    fout = fopen("result.txt","w");
    while (fgets(buff,maxBuff,fin) != NULL)
    {
        res_L = utf_8::decode(buff,res);
        utf_8::encode(fout,res,res_L);
    }
    return 0;
}
