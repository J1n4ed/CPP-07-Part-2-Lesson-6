# Урок 6
## Задание 3, Иерархия классов

В этом задании вы вынесете иерархию классов в отдельные файлы.

Возьмите иерархию классов геометрических фигур из предыдущего домашнего задания.

Разнесите иерархию классов по отдельным файлам, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.

Обратите внимание на то, что для каждого класса должна быть создана своя пара — заголовочный файл + файл исходного кода.

У вас появляется информация о длине сторон и углах ваших фигур, а также несколько более конкретных фигур. 
Теперь в треугольнике вы должны хранить информацию о длине всех его трёх сторон (a, b, c) и значениях его 
трёх углов (A, B, C). В четырёхугольнике вы храните информацию о длине его четырёх сторон (a, b, c, d) и 
значениях его четырёх углов (A, B, C, D).

Также у вас появляются более конкретные фигуры:

- прямоугольный треугольник (угол C всегда равен 90);
- равнобедренный треугольник (стороны a и c равны, углы A и C равны);
- равносторонний треугольник (все стороны равны, все углы равны 60);
- прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
- квадрат (все стороны равны, все углы равны 90);
- параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
- ромб (все стороны равны, углы A,C и B,D попарно равны).

Вы должны иметь возможность узнать у каждой фигуры длины её сторон и значения её углов, но извне вы не должны быть способны изменить длины сторон и углы.

Не должно быть возможности создать фигуры, не удовлетворяющие перечисленным условиям. Например, нельзя создать квадрат с разными углами. 
Геометрические соотношения проверять не нужно. Например, сумма углов в треугольнике может быть не равна 180.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру 
каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. Значения используйте произвольные.

Инициализацию длин сторон и величин углов нужно выполнить с помощью вызова базовых конструкторов.

Для вывода информации о фигуре создайте функцию print_info, которая будет принимать в качестве аргумента указатель на базовый класс фигуры.

CPP-07
06.02.2023
[@J1n4ed](https://github.com/J1n4ed)