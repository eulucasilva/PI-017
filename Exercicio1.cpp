#include <iostream>
#include <math.h>

using namespace std;

class Ponto {
    public:
        int x;
        int y;

        Ponto (int _x, int _y){
            x = _x;
            y = _y;
        }

        int getX(){
            return x;
        }

        void setX(int _x){
            x = _x;
        }

        int getY(){
            return y;
        }

        void setY(int _y){
            y = _y;
        }

        double distanciaOrigem(){
            double distancia = sqrt((x * x) + (y * y));

            return distancia;
        }
};

int main (){

    Ponto p(5,3);

    cout << "Distancia dos pontos até a origem: " << p.distanciaOrigem();

    



    return 0;
}