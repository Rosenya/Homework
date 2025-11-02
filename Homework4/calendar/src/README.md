# Program: Calendar

Cel: Napisz program, który drukuje prosty kalendarz miesiąca w układzie tygodniowym.

## Pliki projektu
- `src/` – kod źródłowy w C (`Calendar.c`)
- `mermaid/` – diagram w Mermaid (`Calendar.mmd`)  
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie liczby dni w miesiącu od użytkownika.
2. Wczytanie pierwszego dnia miesiąca (1 = niedziela, 7 = sobota).
3. Walidacja danych wejściowych:
   - jeśli `days_in_month ≤ 0` lub `> 31` → program prosi o ponowne wprowadzenie liczby.
   - jeśli `first_day < 1` lub `> 7` → program prosi o ponowne wprowadzenie liczby.
4. Przekształcenie `first_day` na `column_start`, tak aby: 
   poniedziałek = 1, niedziela

## Instrukcja uruchomienia
1. Skompiluj program w terminalu:  
   ```powershell
   gcc -Wall Calendar.c -o Calendar.exe
2. Uruchom program:
   .\Calendar.exe
3. Wprowadź liczbę dni w miesiącu.
4. Wprowadź liczbę dni w tygodniu.
5. Odczytaj wynik.

## Przykład działania
Insert number of days in month:
31
Insert number of first day in a month(1-Sunday, 7-Saturday):
3
Su Mo Tu We Th Fr Sa
       1  2  3  4  5
 6  7  8  9 10 11 12
13 14 15 16 17 18 19
20 21 22 23 24 25 26
27 28 29 30 31

Insert number of days in month:
32
Insert number of first day in a month(1-Sunday, 7-Saturday):
8
There is only 28-31 days in a months. Please insert correct number 
0
There is only 28-31 days in a months. Please insert correct number 
31
There is 7 days in a week. Please insert again 
5
Su Mo Tu We Th Fr Sa
             1  2  3
 4  5  6  7  8  9 10
11 12 13 14 15 16 17
18 19 20 21 22 23 24
25 26 27 28 29 30 31 