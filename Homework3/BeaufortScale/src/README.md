# Program: Skala Beauforta

Cel: mając prędkość wiatru w m/s, wyznacz siłę wiatru w skali Beauforta (B 0–12) oraz 
podaj klasę opisową. 

## Pliki projektu
- `src/` – kod źródłowy w C (`BeaufortScale.c`)
- `mermaid/` – diagram w Mermaid (`BeaufortScale.mmd`)  
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie prędkości wiatru w metrach na sekundę od użytkownika.  
2. Konwersja prędkości na węzły (knots): 
   kn = v_ms * 1.94384;
3. Sprawdzenie, czy wartość prędkości nie jest ujemna.  
   - Jeśli wartość < 0 → program prosi o ponowne wprowadzenie liczby.  
4. Określenie kategorii w skali Beauforta w zależności od wartości węzłów.  
5. Wyświetlenie prędkości węzłach oraz odpowiadającej kategorii Beauforta.

## Instrukcja uruchomienia
1. Skompiluj program w terminalu
   ```powershell
   gcc  BeaufortScale.c -o BeaufortScale.exe
2. Uruchom program
   ./BeaufortScale.exe
3. Wprowadź prędkość wiatru w metrach na sekundę.
4. Odczytaj wynik: prędkość węzłach oraz kategorię w skali Beauforta.

## Przykład działania
Insert wind speed in meters per second:
17
Wind Speed in knots is equal to: 33.05
Near Gale

Insert wind speed in meters per second:
-5
Wind speed can't be less than 0. Please insert again 
5
Wind Speed in knots is equal to: 9.72 
Gentle Breeze