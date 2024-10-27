#include <iostream>
using namespace std;

int main(){
    int i = 10; int j = 0;
    for(i = 10; i > 0; i--){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
