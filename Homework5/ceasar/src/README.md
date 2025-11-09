# Program: Szyfr Cezara

## Cel
Napisz program, który szyfruje linię tekstu z przesunięciem o k(0...25).
Litery zachowują wielkość, a białe znaki nie są uwzględniane.

## Pliki projektu
- `src/` – kod źródłowy w C (ceasar.c, ceasar.exe, def_klaw.h)
- `README.md` – opis projektu

## Struktura programu

Wczytanie klucza k od użytkownika (liczba całkowita).

Normalizacja klucza:

k = k % 26

jeśli k < 0 → k += 26

Wczytywanie znaków od użytkownika za pomocą funkcji getchar() lub def_klaw().

Dla każdego znaku:

jeśli duża litera (UPPER_MIN–UPPER_MAX) → przesunięcie w cyklu A–Z

jeśli mała litera (LOWER_MIN–LOWER_MAX) → przesunięcie w cyklu a–z

w przeciwnym razie → znak pozostaje bez zmian

Zaszyfrowany znak jest od razu wypisywany na ekran.

Wczytywanie kończy się po naciśnięciu Enter ('\n').