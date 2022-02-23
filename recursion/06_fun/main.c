#include<stdio.h>

    int ReverseprintFun(int test)

    {

        if (test < 1)

            return 0;

        else {

            printf(" %d ",test);
            ReverseprintFun(test - 1);
            printf(" %d ",test);
        }

    }
    int main(){
      int test = 3;
      ReverseprintFun(test);

    }
