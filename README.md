_This project has been created as part of the 42 curriculum by edpolat._

# get_next_line

## Açıklama

`get_next_line`, C dilinde bir dosya tanımlayıcısından (file descriptor) satır satır okuma yapmayı sağlayan bir fonksiyondur.

Bu projenin temel hedefi, **static variables (statik değişkenler)** kavramını derinlemesine anlamak, dosya okuma işlemlerini yönetmek ve dinamik bellek yönetimi (allocation/free) konusunda yetkinlik kazanmaktır. Standart C kütüphanesinde `getline` gibi fonksiyonlar olsa da, bu projede tekerleği yeniden icat ederek düşük seviyeli I/O işlemlerinin mantığı kavranır.

---

## Talimatlar

### Dosya Yapısı

Proje Makefile içermez ve aşağıdaki 3 temel dosyadan oluşur:
* `get_next_line.c`: Ana fonksiyon mantığı.
* `get_next_line_utils.c`: Yardımcı fonksiyonlar (`ft_strlen`, `ft_strjoin` vb.).
* `get_next_line.h`: Kütüphane başlık dosyası.

---
### Derleme

Projeyi derlemek için `gcc` veya `cc` derleyicisine **BUFFER_SIZE** bayrağını ekleyerek de çalıştırabilirsiniz. Örnek bir `main.c` ile derlemek için:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
```

## Kullanım

`get_next_line` fonksiyonu, verilen bir dosya tanımlayıcısından (fd) bir satır okur ve dinamik olarak ayrılmış bir string olarak döndürür.

**Fonksiyon Prototipi:**

```c
char *get_next_line(int fd);
```

## Kaynaklar

42 Intra dökümanları

## AI Kullanımı

Bu projede yapay zeka aşağıdaki amaçlarla kullanılmıştır:

README dosyasının yazımı ve düzenlenmesi

Fonksiyonların 42 norm kurallarına uygun hale getirilmesi

read fonksiyonunun yapısı ve işlevinin anlaşılması

Kodun algoritmik tasarımı ve implementasyonu _edpolat_ tarafından yapılmıştır.