//Написать программу на любом языке, которая считает количество строк в заданном файле. Имя файла задается в командной строке. Считать, что строки разделяются `\n`. Кол-во строк вывести в stdout. Результирующая программа будет аналогична вызову `wc -l /path/to/file`. Исходный код выложить на github и прислать ссылку.
//Будет плюсом, если напишите на Go.
//Код выкладывайте в свой репозиторий на github.
//Если есть опыт в разработке на Go, то вместо теста можно дать ссылку на код.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    if (argc > 0) {
        FILE* toCount = fopen(argv[1], "r");
        if (toCount == NULL) {
            printf("Error opening file\n");
            return 0;
        }
        else {
            int c;
            int strings = 0;
            while ((c = getc(toCount)) != EOF) {
                if (c == '\n') {
                    strings++;
                }
            }
            fprintf(stdout, "%d strings in file\n", strings);
        }
    }
    else if (argc > 1) {
        printf("Too many parameters\n");
    }
    else {
        printf("Not enough parameters\n");
    }
    return 0;
}
