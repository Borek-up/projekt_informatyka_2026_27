Gra typu Arkanoid

Arkanoid to gra w której użytkownik odbija piłeczkę od swojej paletki tak aby rozbiła wszystkie bloki które znajdują się na górze planszy. Każde rozbicie przyznaje graczu punkty, a każdy wypadek za pole gry odbiera użytkownikowi życie, których ma trzy.

**KLASY:**

1. **PILKA**

Odpowiada za fizykę piłki.

Zna pozycje x i y piłki, jej prędkości vx oraz vy, promień.

Metody: OdbijX, OdbijY, przesuń, konstruktor z pozycją i prędkością początkową, pozycja oraz rysuj(okno).

1. **PALETKA**

Odpowiada za ruch paletki.

Zna pozycje x i y paletki, szerokość, wysokość oraz prędkość ruchu.

Metody: PrzesunLewo(), PrzesunPrawo(), konstruktor z początkowym rozmiarem i prędkością, rysuj(okno), zwracanie pozycji i rozmiaru.

1. **BLOCZEK**

Odpowiada za jeden bloczek.

Zna pozycje x i y bloczka, szerokość, długość.

Metody: Zwraca pozycje i rozmiar bloczka, konstruktor, rozbij, czy rozbity

1. **PLANSZA**

Odpowiada za wygląd poziomu.

Zna szerokość i wysokość pola gry, listę bloczków.

Metody: Czy wszystkie rozbite, rysuj okno, konstruktor który tworzy bloczki, dostęp do bloczków.

1. **PUNKTY**

Odpowiada za liczbę punktów gracza.

Zna liczbę punktów, pozycję napisu na ekranie

Metody: dodaj(), getliczba, rysuj(okno)

1. **ŻYCIA**

Odpowiada za liczbę żyć gracza

Zna liczbę żyć na start

Metody: Odejmij(), czyKoniec(), rysuj(okno)

1. **GRA**

ma w sobie obiekty: okno, piłkę, paletkę, planszę, punkty, życia i zegar. Nie przechowuje kopii pozycji, tylko pyta o nie obiekty.

Metody: Uruchom(pętla gry), czytanie inputów gracza i wywoływanie ruchu paletki, pilnowanie żeby paletka nie wyjechała za pole gry, sprawdzanie wszystkich kolizji piłki, wysyłanie poleceń do punkty i życia, rysowanie wszystkiego.

1. **Kto wie, gdzie jest piłka, a kto wie, gdzie są ściany?** 

Piłka wie, gdzie jest, bo ma pola x i y. Granice zna Plansza, bo przechowuje wymiary pola gry.

1. **Kto decyduje, że klocek znika?** 

wykrywa Gra, bo tylko ona ma dostęp jednocześnie do piłki i do klocków. Klocek sam zmienia swój stan w metodzie rozbij(). Gra stwierdza, że trafienie nastąpiło, a bloczek pamięta, że jest rozbity.

1. **Kto liczy punkty i życia? Czy to ta sama klasa, która rysuje?** 

Punkty liczy klasa Punkty, życia klasa Zycia. Te klasy również same się rysują, ale ich logika (dodaj, odejmij) nie potrzebuje okna, więc da się ją testować osobno. **Kiedy** dodać punkty, decyduje Gra, a **jak** je zapisać, decyduje Punkty.

1. **Kto zauważa, że piłka spadła?** 

Gra porównuje pozycję piłki z dolną krawędzią planszy. To zdarzenie, więc sprawdza je metoda zwracająca bool, a nie pole. Gdy piłka spadnie, Gra wywołuje zycia.odejmij() i ustawia piłkę z powrotem na start.

1. **Gdzie są klocki i kto je tworzy?** 

Plansza przechowuje je w liście i tworzy w swoim konstruktorze, czyli raz, na początku poziomu.


