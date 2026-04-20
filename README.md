# Arduino Noise Level Indicator 🔊💡

Prototipe Arduino untuk mendeteksi tingkat kebisingan ruangan menggunakan sensor suara (digital output) dan menampilkan status ruangan melalui LED sebagai indikator visual.

LED menyala saat ruangan berisik dan mati saat ruangan tenang.

---

## 🧠 Latar Belakang

Dalam beberapa situasi di lingkungan sekolah, kampus, atau perpustakaan, sering kali ruangan menjadi bising tanpa ada yang menegur. Hal ini bisa terjadi karena pengawas tidak selalu berada di tempat atau tidak menyadari tingkat kebisingan yang terjadi.

Kondisi tersebut dapat mengganggu konsentrasi belajar dan kenyamanan pengguna ruangan.

Prototipe ini dibuat sebagai alat penyadar (awareness tool) yang memberikan indikator visual ketika tingkat kebisingan ruangan melewati batas wajar, sehingga pengguna ruangan dapat langsung menyadari kondisi tersebut dan menurunkan tingkat suara secara mandiri.

---

## 🎯 Tujuan Proyek

- Memanfaatkan sensor suara sebagai input digital
- Menerapkan logika threshold kebisingan pada Arduino
- Mengontrol output LED sebagai indikator visual
- Membuat sistem monitoring kebisingan sederhana yang aplikatif

---

## 💡 Potensi Implementasi Nyata

Prototipe ini dapat dikembangkan menjadi:

- **Indikator kebisingan kelas** (jika terlalu ribut, lampu menyala)
- **Indikator ketenangan perpustakaan**
- **Monitoring ruang belajar / ruang kerja**
- **Peringatan dini lingkungan bising di kantor**
- **Sistem smart room berbasis kondisi suara**
- Integrasi dengan **buzzer**, **LCD**, atau **IoT dashboard**

---

## ⚙️ Komponen yang Digunakan

- Arduino Uno 
- Sound Sensor (VCC, GND, OUT)
- LED
- Resistor 220Ω
- Kabel jumper

---

## 🔌 Wiring

### Sound Sensor ke Arduino

| Sound Sensor | Arduino |
|--------------|---------|
| VCC          | 5V      |
| GND          | GND     |
| OUT          | Pin 2   |

### LED ke Arduino

| LED | Arduino |
|-----|---------|
| Anoda (+) | Pin 13 melalui resistor 220Ω |
| Katoda (-) | GND |

---

## 🧪 Cara Kerja Sistem

1. Sound sensor mendeteksi tingkat suara di ruangan.
2. Sensor memberikan sinyal HIGH ketika suara melewati ambang batas.
3. Arduino membaca sinyal tersebut.
4. Jika kondisi berisik terdeteksi → LED menyala.
5. Jika ruangan kembali tenang → LED mati.

---

## 📁 Struktur File

- `noise_indicator.ino` — Program utama Arduino
- `README.md` — Dokumentasi proyek

---

## 🖥️ Logika Program Singkat

Arduino membaca status pin digital dari sensor suara secara terus-menerus dan menentukan kondisi ruangan berdasarkan durasi sinyal HIGH yang terdeteksi.

---

## 🚀 Pengembangan Lanjutan

Beberapa pengembangan yang bisa dilakukan:

- Menambahkan LCD untuk menampilkan level kebisingan
- Mengirim data ke MQTT / IoT platform
- Menggunakan sensor analog untuk pembacaan lebih presisi
- Menambahkan buzzer sebagai alarm
- Menambahkan logging data kebisingan

---

## 🧩 Pembelajaran dari Proyek

Proyek ini melatih pemahaman tentang:

- Pembacaan input digital dari sensor
- Pengolahan sinyal sederhana berbasis durasi
- Pengendalian output digital (LED)
- Perancangan sistem berbasis kondisi lingkungan

---

Dibuat sebagai proyek pembelajaran Arduino dan pemanfaatan sensor suara untuk aplikasi nyata.
