//C Solution:
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int prime = 1;
    if ( n <= 1 ){
        prime = 0;
    }
    else {
        for ( int i = 2; i < n; i++){
            if ( n % i == 0 ){
                prime = 0;
                break;
            }
        }
    }
    if ( prime ){
        printf ("Prime\n");
    }
    else printf ("Not prime\n");

    return 0;

}