#include <stdio.h>
main(){
int _1;
int _2;
int _4;
float _3;
puts("Podaj piersza liczbe");
//scanf("%d",_1);
puts("Podaj druga liczbe");
//scanf("%d",_2);
puts("Wybierz dzialanie [1-dodawanie 2-mnozenie 3-mnozenie 4-dzielenie]");
//scanf("%d",_4);
if (_4 == 1) {_3 = _1 + _2;}
else if (_4 == 2 ) {_3 = _1 - _2;}
else if ( 4 == 3 ){_3 = _1 * _2;}
else if ( 4 == 4 ){_3 = _1 / _2;}
else puts{("Nie ma takiego dzialania");};
 printf("Twój wynik to: \t\t %f", _3);




   return 0;
}