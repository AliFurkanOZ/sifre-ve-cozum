# Caesar Cipher Encoder & Decoder

Bu proje, Sezar Şifreleme yöntemini kullanarak metinleri şifreleyen ve çözen iki ayrı C programından oluşmaktadır.

## Açıklama

- **encoder.c**: Bir metin dosyasını okuyarak Sezar Şifreleme algoritması ile şifreler ve yeni bir dosyaya kaydeder.
- **decoder.c**: Şifrelenmiş dosyayı okuyarak orijinal metni geri çözer ve yeni bir dosyaya kaydeder.

## Kullanılan Teknolojiler

- C Programlama Dili
- Dosya İşlemleri
- Karakter Manipülasyonu

## Kurulum

1. Depoyu klonlayın:
   ```bash
   git clone https://github.com/kullanici_adiniz/caesar_cipher.git
   ```
2. Klasöre gidin:
   ```bash
   cd caesar_cipher
   ```
3. Derleme işlemi için GCC kullanın:
   ```bash
   gcc encoder.c -o encoder
   gcc decoder.c -o decoder
   ```

## Kullanım

1. **Metni şifrelemek için:**
   ```bash
   ./encoder
   ```
   - `input1.txt` adlı dosyayı okuyarak `output1.txt` dosyasına şifreli metni kaydeder.

2. **Şifreyi çözmek için:**
   ```bash
   ./decoder
   ```
   - `output1.txt` adlı dosyayı okuyarak `decoded_output.txt` dosyasına çözülmüş metni kaydeder.

## Örnek Çalışma

**input1.txt içeriği:**
```
hello world
```

**Şifreleme Sonucu (output1.txt):**
```
khoor zruog
```

**Çözüm Sonucu (decoded_output.txt):**
```
hello world
```

## Geliştirme

- Anahtar değerini dinamik olarak belirlemek için programlar düzenlenebilir.
- Büyük/küçük harf ayrımına dikkat edecek şekilde geliştirilebilir.

## Lisans

Bu proje MIT Lisansı ile lisanslanmıştır.

