# Домашнее задание к работе 2
## Условие задачи
Хозяин хочет оклеить обоями длинную стену в своем доме. Длина этой стены равна А м., а высота Б м. Рулон обоев имеет длину 12 м. и ширину 1 м. Сколько будут стоить обои для всей стены, если цена одного рулона К руб.

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Объявить константы:
   - `ROLL_LENGTH` = 12 (м) — длина рулона обоев.
   - `ROLL_WIDTH` = 1 (м) — ширина рулона обоев.
3. Задать исходные данные:
   - `А` — длина стены (м.).
   - `Б` — высота стены (м.).
   - `К` — цена одного рулона обоев (руб.).
4. Вычислить площадь стены:
   - `wall_length` = `А`
   - `wall_height` = `Б`
   - `wall_area` = `wall_length` * `wall_height`
5. Вычислить площадь рулона:
   - `roll_area` = `ROLL_LENGTH` * `ROLL_WIDTH`
6. Вычислить количество рулонов, нужных для покрытия стены:
   - `roll_quantity` = (`wall_area` + `roll_area` - 1) / `roll_area`
7. Вычислить стоимость рулонов:
   - `roll_price` = `К`
   - `total_price` = `roll_price` * `roll_quantity`
9. Вывести результаты расчетов с подстановкой всех значений в текст.
10. **Конец**

### Блок-схема
![Блок-схема алгоритма](lab2_diagram.png)

## 2. Реализация программы

```C
#include<stdio.h>
#include<locale.h>

int main()
{
	const int ROLL_LENGTH = 12;
	const int ROLL_WIDTH = 1;
	float wall_length = 10;
	float wall_height = 3;
	float roll_price = 1450;

	float wall_area = wall_length * wall_height;
	float roll_area = ROLL_LENGTH * ROLL_WIDTH;
	int roll_quantity = (wall_area + roll_area - 1) / roll_area; // Деление с округлением до верхней границы
	float total_price = roll_quantity * roll_price;

	setlocale(LC_CTYPE, "RUS.UTF-8");
	printf("Обои для всей стены будут стоить: %6.2f руб.\n", total_price);
}
```
## 3. Результаты работы программы

Обои для всей стены будут стоить: 4350.00 руб.

## 4. Информация о разработчике

бТИИ-261 Иголкин Максим Александрович
