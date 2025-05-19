# Soal 2 : Simulasi Pertarungan Finn vs Ice King

## KERJAKAN MAIN SAJA

## Deskripsi
Pada soal ini, kalian diminta untuk melengkapi bagian `main` pada file `soal2.cpp` untuk mensimulasikan pertarungan antara dua karakter, yaitu Finn dan Ice King. Pertarungan dilakukan secara bergantian hingga salah satu karakter kalah (health = 0). Kalian juga diminta untuk menentukan siapa yang mendapat giliran pertama berdasarkan input.

## Input
- Health dan attack power untuk Finn.
- Health dan attack power untuk Ice King.
- Penentuan siapa yang mendapat giliran pertama.

## Output
- Status setiap karakter setelah setiap serangan.
- Nama pemenang setelah simulasi selesai.

## Expected Input
```
100 15
120 10
finn
```

## Expected Output
```
Finn has 100 health remaining.
Ice King has 120 health remaining.
Finn attacks Ice King!
Ice King has 105 health remaining.
Ice King attacks Finn!
Finn has 90 health remaining.
...
Ice King has 0 health remaining.
Finn wins the battle!
```

## Catatan
- Gunakan objek `Character` untuk kedua karakter.
- Pastikan simulasi berjalan hingga salah satu karakter kalah.
- Cetak status setiap karakter setelah setiap serangan.
- Cetak pemenang di akhir simulasi.
