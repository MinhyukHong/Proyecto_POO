Universidad EAFIT Library ISBN Validation
=
La biblioteca de la Universidad EAFIT está actualmente en un proceso de auditoría. Uno de los procesos que se requiere verificar es la validez de los números de identificación (ISBN) de los libros existentes. Para abordar esto, la universidad solicita una aplicación que funcione bajo el paradigma de programación funcional utilizando el lenguaje Haskell.

## Conceptos clave

Es esencial comprender la definición y el proceso de validación de un código de identificación ISBN. La sigla ISBN proviene del inglés "International Standard Book Number" (Pearce, 2021a) y se refiere a un código único que identifica cada edición de un libro a nivel internacional, incluyendo libros electrónicos. El proceso de validación, como se detalla en el artículo "Anatomy of a 10-digit ISBN" escrito por Pearce, B. (2021b), implica una serie de pasos.
<br>
El proceso para verificar la validez de un código ISBN (Pearce, 2021b) implica multiplicar cada dígito por un valor específico siguiendo un patrón predefinido. El último dígito es conocido como el dígito de verificación. Después de realizar una serie de multiplicaciones y sumas, si el residuo de la división de la suma por 11 es cero, el código ISBN se considera válido.

## Implementación en Haskell

El código de Haskell proporcionado se encarga de recibir un código ISBN, considerando los diferentes formatos de entrada (con o sin espacios o guiones) y valida si el ISBN ingresado es válido. La función `isbnChecker` evalúa si el ISBN es válido, devolviendo un resultado booleano.

## Uso
Para usar esta implementación, sigue los pasos a continuación: <br>
1. Copia y pega el código de Haskell provisto en tu entorno de desarrollo.
2. Utiliza la función isbnChecker proporcionando un código ISBN como argumento.
3. La función devolverá True si el ISBN es válido y False si no lo es.

## Requisitos
Este código está escrito en Haskell, por lo que necesitarás un entorno de Haskell configurado para ejecutarlo.

## Ejemplo de ejecución
![WhatsApp Image 2023-11-13 at 9 43 00 PM](https://github.com/0721santi/2ndProjectProgrammingLanguages/assets/108979014/4eb4c781-a902-441c-86da-55739f958a34)

## Contacto

Si tiene alguna pregunta o consulta, póngase en contacto con
- Minhyuk Hong: mhong@eafit.edu.co
- Santiago Idarraga: sidarragac@eafit.edu.co
