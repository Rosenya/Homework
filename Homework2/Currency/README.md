# Konwerter PLN → USD

## Opis (kontekst „turysta z Polski do USA”): 
Planujesz wyjazd z Polski do Stanów Zjednoczonych. Masz budżet w złotówkach i 
chcesz szybko sprawdzić, ile to będzie w dolarach, żeby łatwiej porównać ceny 
hoteli, wynajmu auta, biletów wstępu czy napiwków na miejscu. Program wczytuje Twoją 
kwotę w PLN oraz kurs USD/PLN z danego dnia (z tabeli NBP wpisujesz ręcznie), 
a następnie wyświetla wynik w USD w czytelnej formie. Dzięki temu od razu wiesz, 
czy planowany wydatek „spina się” z budżetem na wyjazd.

## Pliki projektu
- `src/` – kod źródłowy w C (`Currency.c`)  
- `flow/` – schemat blokowy (`Currency.png`)  
- `mermaid/` – diagram Mermaid (`Currency.mmd`)  
- `README.md` – opis projektu

## Struktura programu
1. Wczytanie kwoty w PLN  
2. Wczytanie kursu USD  
3. Sprawdzenie, czy kurs ≠ 0 (jeśli 0 → ponowne wczytanie)  
4. Obliczenie kwoty w USD:  
   amountUSD = amountPLN/rate;
5. Wyświetlenie wyniku

## Instrukcja uruchomienia
1. Skompiluj program:
   Bash:
   gcc -Wall src/Currency.c -o Currency.exe
   Powershell:
   gcc Currency.c -o Currency.exe
2. Uruchom:
   ./Currency.exe
3. Wprowadź kwotę w PLN i kurs USD
4. Odczytaj wynik

## Przykład działania
Insert PLN amount:
123    
Insert current rate: 
3.6388
Your USD amount for 123.00 PLN equals 33.80
