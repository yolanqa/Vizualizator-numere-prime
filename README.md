
## Vizualizator-numere-prime
sita lui Eratostene, conjectura lui Goldbach

Proiectul vizeaza implementarea sitei lui Eratostene prin care se afiseaza in terminal numerele compuse care "cad".

Explicatia culorilor:
- galben: numarul care "cade" in momentul executiei
- cyan: numerele care raman, numar prim
- rosu: numerele care au fost taiate inainte, numar compus


Sita lui Eratostene este un algoritm antic care vizeaza gasirea numerelor prime pana intr-o limita N. Se listeaza numerele de la 2 la N si se taie succesiv multiplii fiecarui numar prim gasit. 


## Compilare si rulare
g++ -std=c++17 -o math math.cpp && ./math


## Structura proiectului
- feature/sieve-core: logica de baza a sitei, matematica
- feature/display: animatie si culori ANSI



## In dezvoltare
-conjectura lui Goldbach



 

