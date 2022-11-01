#include <stdio.h>
#include <stdlib.h>
#define N 100

struct spotify{
    int codigo;
    char cancion[50];
    int interpretes;
    char nombre[50][2];
    int reproducciones
};

void captura_datos(struct spotify *s, int n);
void captura_cancion(struct spotify *s);
int mas_reproducciones(struct spotify *s, int n);

int main()
{
    struct spotify s[N];
    captura_cancion(&s);
    int x=mas_reproducciones(&s,N);
    printf("%d", x);
    return 0;
}

void captura_datos(struct spotify *s, int n){
    for(int i=0;i<n;i++){
        scanf("%d", &s[i].codigo);
        scanf("%[^\n]", s[i].cancion);
        scanf("%d", &s[i].interpretes);
        scanf("%[^\n]", s[i].nombre);
        scanf("%d", &s[i].reproducciones);
    }
}

void captura_cancion(struct spotify *s){
    int x;
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        captura_datos(s, x);
    }
}

int mas_reproducciones(struct spotify *s, int n){
    int mayor=0;
    for(int i=0;i<n;i++){
        if(s[i].reproducciones>mayor){
            mayor=s[i].reproducciones;
        }
    }

    for(int i=0;i<n;i++){
        if(mayor==s[i].reproducciones){
            return i;
        }
    }
}




