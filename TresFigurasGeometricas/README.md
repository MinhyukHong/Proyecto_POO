Cáculo de Área y Perímetro de Figuras Geométricas en C++
========================================================
Este proyecto se centra en la implementación de un programa en C++ que utiliza la metodología de programación orientada a objetos para calcular el área y el perímetro de tres figuras geométricas: el rectángulo, el círculo y el trapecio. Para lograrlo, se ha creado una estructura de clases que sigue el concepto de herencia y polimorfismo.

![image](https://github.com/MinhyukHong/Proyectos_POO/assets/108979014/4c91ecd8-502a-4a04-b434-1b08d4857413)
![image](https://github.com/MinhyukHong/Proyectos_POO/assets/108979014/2e60eb7b-d1c3-4195-9751-44cbeded70b4)


## Clase Base: Figura Geométrica
La superclase FiguraGeometrica es la base de todas las figuras geométricas y contiene las siguientes propiedades y métodos:

### Propiedades:
* formulaArea: Contiene la fórmula del área específica de cada figura geométrica.
* formulaPerimetro: Contiene la fórmula del perímetro específica de cada figura geométrica.

### Métodos
* EncontrarArea(): Método que calcula el área de la figura geométrica.
* EncontrarPerimetro(): Método que calcula el perímetro de la figura geométrica.

## Clases Derivadas
Cada figura geométrica (rectángulo, círculo y trapecio) es una clase derivada de la clase base FiguraGeometrica. En cada clase derivada, se sobrescriben (modifican) las propiedades y métodos con la información específica de la figura geométrica correspondiente.

### Rectángulo
* formulaArea: Área = Largo x Ancho
* formulaPerimetro: Perímetro = 2 x (Largo + Ancho)

### Círculo
* formulaArea: Área = π x Radio²
* formulaPerimetro: Perímetro = 2 x π x Radio

### Trapecio
* formulaArea: Área = (Base Mayor + Base Menor) x Altura / 2
* formulaPerimetro: Perímetro = Suma de los lados

## Ejecución del Programa
Al ejecutar la aplicación, se realizarán cálculos de área y perímetro para todas las figuras geométricas utilizando valores predefinidos. Se han implementado validaciones para asegurarse de que los valores proporcionados sean válidos y no negativos.

## Uso del Programa
Puede utilizar este programa como punto de partida para realizar cálculos de área y perímetro de figuras geométricas en C++. Para ello, simplemente cree instancias de las clases de figuras geométricas correspondientes y utilice los métodos EncontrarArea() y EncontrarPerimetro() para realizar los cálculos.
