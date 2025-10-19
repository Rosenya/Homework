# Program „Marża” (cena sprzedaży)

## Opis (kontekst biznesowy): 
Jesteś sprzedawcą i ustalasz cenę katalogową produktu. Masz cenę zakupu (netto) 
oraz założoną marżę w procentach. Program wczytuje te dwie wartości, oblicza cenę 
sprzedaży i wyświetla wynik w czytelnej formie — szybka weryfikacja, czy cena pasuje 
do strategii i oczekiwanej rentowności.

## Pliki projektu
- `src/` – kod źródłowy w C (`Margin.c`)  
- `flow/` – schemat blokowy programu (`Margin.png`)  
- `mermaid/` – diagram w Mermaid (`Margin.mmd`)  
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie ceny zakupu od użytkownika  
2. Wczytanie marży procentowej  
3. Sprawdzenie, czy marża ≠ 0 (jeśli 0 → ponowne wczytanie)  
4. Obliczenie ceny sprzedaży:
   sellingPrice = purchaseNet + (purchaseNet*(marginPercent/100)); 
5. Wyświetlenie wyniku

## Instrukcja uruchomienia
1. Skompiluj program w terminalu
   Bash:
   gcc -Wall src/Margin.c -o Margin.exe
   PowerShell:
   gcc Margin.c -o Margin.exe
2. Uruchom program:
   ./Margin.exe
3. Wprowadź cenę zakupu i marżę procentową  
4. Odczytaj wynik

## Przykład działania
Insert price:
348
Insert current margin: 
27
Your selling price amount for 27.00% margin equals 441.96