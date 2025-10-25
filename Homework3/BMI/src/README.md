# Program: BMI: klasyfikacja wyniku 

Cel: wylicz BMI i zaklasyfikuj wynik. 

## Pliki projektu
- `src/` – kod źródłowy w C (`BMI.c`)
- `mermaid/` – diagram w Mermaid (`BMI.mmd`)  
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie wysokości (w metrach) i wagi (w kilogramach) od użytkownika.  
2. Sprawdzenie, czy wprowadzone wartości są dodatnie.  
   - Jeśli wartość ≤ 0 → program prosi o ponowne wprowadzenie liczby.  
3. Obliczenie BMI według wzoru:
   bmi = kg / (m * m)
4. Określenie kategorii BMI
5. Wyświetlenie wyniku BMI oraz odpowiedniej kategorii.

## Instrukcja uruchomienia
1. Skompiluj program w terminalu:  
   ```powershell
   gcc -Wall BMI.c -o BMI.exe
2. Uruchom program:
   .\BMI.exe
3. Wprowadź wysokość w metrach i wagę w kilogramach.
4. Odczytaj wynik: wartość BMI i odpowiadającą kategorię.

## Przykład działania
Insert your height in meters:
1.6
Insert your weight in kilograms:
61
Your BMI is equal to: 23.8 
Correct

Insert your height in meters:
-1.7
Insert your weight in kilograms:
80
BMI can't be less than 0. Please insert again 
1.7
-80
BMI can't be less than 0. Please insert again 
1.7
80
Your BMI is equal to: 27.7 
Overweight