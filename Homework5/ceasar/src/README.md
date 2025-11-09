# Program: Szyfr Cezara

## Cel
Napisz program, który szyfruje linię tekstu z przesunięciem o k(0...25).
Litery zachowują wielkość, a białe znaki nie są uwzględniane.

## Pliki projektu
- `src/` – kod źródłowy w C (ceasar.c, ceasar.exe, def_klaw.h)
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie klucza k od użytkownika (liczba całkowita).
2. Normalizacja klucza:
   k = k % 26
   jeśli k < 0 → k += 26
3. Wczytywanie znaków od użytkownika za pomocą funkcji getchar().
4. Dla każdego znaku:
   -jeśli duża litera (UPPER_MIN–UPPER_MAX) → przesunięcie w cyklu A–Z
   -jeśli mała litera (LOWER_MIN–LOWER_MAX) → przesunięcie w cyklu a–z
   -w przeciwnym razie → znak pozostaje bez zmian

5. Zaszyfrowany znak jest od razu wypisywany na ekran.
6. Wczytywanie kończy się po naciśnięciu Enter ('\n').

## Instrukcja uruchomienia
1. Skompiluj program w terminalu: 
   ```powershell
   gcc -Wall -Wextra ceasar.c -o ceasar.exe
2. Uruchom program:
   .\ceasar.exe
3. Wprowadź tekst i naciśnij Enter.
4. Po naciśnięciu Enter program wypisze zaszyfrowany tekst znak po znaku.

## Przykład działania

Please insert value number for encryption:
12
Please insert your text:
ark PLO
mdw BXA

Please insert value number for encryption: 
24
Please insert your text: 
ark PLO
ypi NJM