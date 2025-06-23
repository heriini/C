# 📟 Simple Calculator in C

Proyek ini adalah kalkulator sederhana berbasis terminal yang ditulis dalam bahasa C. Program ini memungkinkan pengguna melakukan operasi aritmatika dasar:

- Penjumlahan (`+`)
- Pengurangan (`-`)
- Perkalian   (`x`)
- Pembagian   (`/`)

Program akan meminta input dari pengguna dan dapat digunakan berulang kali dalam satu sesi.

---

## 🗂 Struktur Direktori

Proyek ini berada di dalam folder `C/01_simple_calculator/`, dengan struktur sebagai berikut:

C/
└── 01_simple_calculator/
├── src/ # Source code utama (.c)
├── inc/ # Header files (.h)
├── obj/ # File object hasil kompilasi (*.o)
├── bin/ # File executable hasil build
├── Makefile # File build otomatis
└── README.md # Dokumentasi proyek ini


---

## 🚀 Cara Menjalankan Program

### 1. Clone Repository

``` bash
git clone https://github.com/heriini/C.git

```

### 2. Pindah ke direktori proyek

```bash
cd C/01_simple_calculator
```

### 3. Build program menggunakan Makefile 
#### Pastikan sudah install gcc dan make.

```bash
make
```

### 4. Jalankan program

``` bash
./bin/app.out
```

### 5. Bersihkan file hasil kompilasi (opsional)

```bash
make clean
```

---

## 🧰 Ketergantungan

GNU Compiler Collection (gcc) & Make utility (make)

Keduanya biasanya sudah tersedia di sistem Linux/Unix.
Untuk Windows, disarankan menggunakan WSL atau MinGW.

## 👨‍💻 Kontribusi

Kontribusi sangat diterima!
Silakan fork repositori ini, buat branch baru, dan kirimkan Pull Request.

## 📄 Lisensi

Proyek ini menggunakan lisensi MIT — silakan gunakan, ubah, dan distribusikan dengan atribusi yang sesuai.

