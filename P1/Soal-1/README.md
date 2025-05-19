# Soal 1 : Sistem poin pembalap F1

## JANGAN UBAH MAIN

## Deskripsi
Kalian adalah seorang race director di F1. Tugas kalian adalah menampilkan scoring di TV setelah race. Input dari marshall adalah jumlah pembalap dan posisi berapa mereka finish, dimana tugas kalian mengolah data tersebut agar media tidak bingung saat menampilkan scoring hasil balapan.

## Input
- Jumlah pembalap.
- Nama pembalap dan posisi finish mereka.

## Output
- Poin yang diperoleh setiap pembalap berdasarkan posisi finish.

## Expected Input
```
3
verstappen 6
russell 10
hulkenberg 1
```

## Expected Output
```
Point yang diperoleh verstappen adalah +8
Point yang diperoleh russell adalah +1
Point yang diperoleh hulkenberg adalah +25
```

## Catatan
- Lengkapi blok kode yang ada di `soal1.cpp`.
- Gunakan modul tentang constructor apabila belum paham, atau kalian bisa mencari referensi.
- Jangan gunakan AI karena akan menumpulkan dasar pemrogramanmu. Jika bingung, cari referensi di Stack Overflow.

## F1 Scoring System
Gunakan aturan poin F1 untuk menghitung poin berdasarkan posisi finish:
  - Posisi 1: +25 poin
  - Posisi 2: +18 poin
  - Posisi 3: +15 poin
  - Posisi 4: +12 poin
  - Posisi 5: +10 poin
  - Posisi 6: +8 poin
  - Posisi 7: +6 poin
  - Posisi 8: +4 poin
  - Posisi 9: +2 poin
  - Posisi 10: +1 poin
  - Posisi di luar 10: 0 poin

