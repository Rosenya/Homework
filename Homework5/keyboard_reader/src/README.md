# Program: Duże/małe/cyfry/inne

## Cel
Napisz program w C, który czyta znaki z klawiatury do naciśnięcia Enter i zlicza:  
- dużą literę (Uppercase)  
- małą literę (Lowercase)  
- cyfrę (Numbers)  
- inne znaki (Other)
Enter nie wchodzi do statystyk.  

Program używa własnych stałych ASCII zdefiniowanych w pliku `def_klaw.h`.

## Pliki projektu
- `src/` – kod źródłowy w C (`count.c`, `def_klaw.h`)  
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie znaków od użytkownika w pętli aż do naciśnięcia Enter (`'\n'`) lub EOF.  
2. Dla każdego znaku sprawdzenie kategorii:
   - jeśli znak jest cyfrą (`ZERO`–`NINE`) → licznik cyfr (`number_counter++`)  
   - jeśli znak jest dużą literą (`UPPER_MIN`–`UPPER_MAX`) → licznik dużych liter (`uppercase_counter++`)  
   - jeśli znak jest małą literą (`LOWER_MIN`–`LOWER_MAX`) → licznik małych liter (`lowercase_counter++`)  
   - w przeciwnym razie → licznik innych znaków (`other_counter++`)  
3. Po zakończeniu wczytywania program wyświetla wyniki: 
   Uppercase = X, lowercase = Y, numbers = Z, other = W

## Instrukcja uruchomienia
1. Skompiluj program w terminalu: 
   ```powershell
   gcc -Wall -Wextra count.c -o count.exe
2. Uruchom program:
   .\count.exe
3. Wprowadź tekst i naciśnij Enter.
4. Odczytaj wyniki – program wypisze liczbę dużych liter, małych liter,
   cyfr i innych znaków.


## Przykład działania

Please insert your text:
ark PLO
Uppercase = 3, lowercase = 2, numbers = 0, other = 1

Please insert your text: 
ark PLO 123
Uppercase = 3, lowercase = 3, numbers = 3, other = 2