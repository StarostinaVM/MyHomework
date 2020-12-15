#include <iostream>

int main()
{

int summa, srok, result, i;
i = 1;

while(i == 1){
std::cout << "Vvedite vashy symmy: ";
std::cin >> summa;
if(summa < 10000){
std::cout << "Vu vveli nedopystimyu symmy! " << std::endl;
}
else{
i = 0;
}
}
i = 1;
while(i == 1){
std::cout << "Vvedite vash srok vklada: ";
std::cin >> srok;
if((srok > 365) || (srok < 0)){
std::cout << "Vu vveli nedopystimuu srok vklada! " << std::endl;
}
else{
i = 0;
}
}
if(summa <= 100000){
if((srok >= 0) && (srok < 31)){
result = summa - (summa / 10);
}
if((srok >= 31) && (srok < 121)){
result = summa + (summa * 0.02);
}
if((srok >= 121) && (srok < 241)){
result = summa + (summa * 0.06);
}
if((srok >= 241) && (srok < 366)){
result = summa + (summa * 0.12);
}
}
if(summa > 100000){
if((srok >= 0) && (srok < 31)){
result = summa - (summa / 10);
}
if((srok >= 31) && (srok < 121)){
result = summa + (summa * 0.03);
}
if((srok >= 121) && (srok < 241)){
result = summa + (summa * 0.08);
}
if((srok >= 241) && (srok < 366)){
result = summa + (summa * 0.15);
} 
}
std::cout << "Vash kapital posle vashego sroka: " << result << std::endl;
}

