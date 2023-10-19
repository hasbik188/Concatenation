# Concatenation

Код написан на языке C++ в программе CLion.

void print(std::vector<std::string>& x) - при вызове процедура выводит данные языка (вектора).
std::vector<std::string> Concatenation(const std::vector<std::string>& L1, const std::vector<std::string>& L2) - при вызове функция конкатенирует два языка.

Инструкция по запуску:
Пользователь запускает программу и вручную заполняет два языка данными, пока не введет слово "EXIT" для завершения заполнения.

Тесты:
1) Вход:
1 2 3 
a b c 
Выход:
1a 1b 1c 2a 2b 2c 3a 3b 3c 

2) Вход:
1 
name surname lastname 
Выход:
1name 1surname 1lastname 

3) Вход:
1 2 3 4 5 6 7 8 9 0
q w e r t y u i o p a s d f g h j k l z x c v b n m    
Выход:
1q 1w 1e 1r 1t 1y 1u 1i 1o 1p 1a 1s 1d 1f 1g 1h 1j 1k 1l 1z 1x 1c 1v 1b 1n 1m 2q 2w 2e 2r 2t 2y 2u 2i 2o 2p 2a 2s 2d 2f 2g 2h 2j 2k 2l 2z 2x 2c 2v 2b 2n 2m 3q 3w 3e 3r 3t 3y 3u 3i 3o 3p 3a 3s 3d 3f 3g 3h 3j 3k 3l 3z 3x 3c 3v 3b 3n 3m 4q 4w 4e 4r 4t 4y 4u 4i 4o 4p 4a 4s 4d 4f 4g 4h 4j 4k 4l 4z 4x 4c 4v 4b 4n 4m 5q 5w 5e 5r 5t 5y 5u 5i 5o 5p 5a 5s 5d 5f 5g 5h 5j 5k 5l 5z 5x 5c 5v 5b 5n 5m 6q 6w 6e 6r 6t 6y 6u 6i 6o 6p 6a 6s 6d 6f 6g 6h 6j 6k 6l 6z 6x 6c 6v 6b 6n 6m 7q 7w 7e 7r 7t 7y 7u 7i 7o 7p 7a 7s 7d 7f 7g 7h 7j 7k 7l 7z 7x 7c 7v 7b 7n 7m 8q 8w 8e 8r 8t 8y 8u 8i 8o 8p 8a 8s 8d 8f 8g 8h 8j 8k 8l 8z 8x 8c 8v 8b 8n 8m 9q 9w 9e 9r 9t 9y 9u 9i 9o 9p 9a 9s 9d 9f 9g 9h 9j 9k 9l 9z 9x 9c 9v 9b 9n 9m 0q 0w 0e 0r 0t 0y 0u 0i 0o 0p 0a 0s 0d 0f 0g 0h 0j 0k 0l 0z 0x 0c 0v 0b 0n 0m 
