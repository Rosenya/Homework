# Program: Divider 

Cel: Napisz program, który wyświetli wszystkie liczby z przedziału od 50 do 100, podzielne przez liczbę k, którą podaje użytkownik.

## Pliki projektu
- `src/` – kod źródłowy w C (`Divider.c`)
- `mermaid/` – diagram w Mermaid (`Divider.mmd`)  
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie liczby całkowitej k od użytkownika.
2. Sprawdzenie, czy k jest większe od zera.
3. Jeśli k ≤ 0 → program prosi o ponowne wprowadzenie liczby.
4. Iteracja po liczbach od 50 do 100.
5. Dla każdej liczby i sprawdzenie, czy i jest podzielne przez k 
   (i % k   == 0).
6. Wypisanie wszystkich liczb spełniających warunek podzielności.

## Instrukcja uruchomienia
1. Skompiluj program w terminalu:  
   ```powershell
   gcc -Wall Divider.c -o Divider.exe
2. Uruchom program:
   .\Divider.exe
3. Wprowadź liczbę.
4. Odczytaj wynik.

## Przykład działania

Insert your number:
0
Your number cannot be smaller than 1. Please insert again 
20
60 
80
100

Insert your number:
5
50 
60
65
70
75
85
90
95
100