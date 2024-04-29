# Random Walks en C++

## Descripción

Este programa en C++ consiste en determinar la probabilidad que tiene un personaje llamado "Korone" de llegar a la posición que originalmente otro personaje llamado "Calli" le mandó.

## Instrucciones de Uso
Al iniciar el programa  se entregan notas que indican las instrucciones para
que el usuario ingrese los comandos de forma correcta, las listas son ingresadas en forma de string mediante
la consola, en primer lugar se pedirá la lista que envía Calli con un máximo de 10 caracteres, si sobrepasamos
este limite se arrojará un mensaje de error que pide ingresar la lista de comandos nuevamente, posteriormente
se pide ingresar la lista que recibe Korone, esta vez con diferentes instrucciones, si la cantidad de comandos
no coinciden se pedirá nuevamente ingresar los comandos hasta cumplir la condición, cabe destacar que si
ingresan otro tipo de caracter, el resultado final puede ser erroneo.
Una vez ingresados los comandos de ambas listas se almacenan la cantidad de signos respectivamente en
distintas variables, de lo anterior se calcula la *posicion1* la cual indica Calli originalmente y la *posicion2* que
se obtiene a partir de la segunda lista sin contar los comandos no reconocidos "?", luego como estos últimos
tienen la misma probabilidad de ser " + " o " − " se llega a la siguiente formula que depende del número de
ocurrencias,
$$\frac{1}{2^n}$$
donde $n$ es el numero de comandos no reconocidos.
Posteriormente para hallar todas las posibles combinaciones se ocupa,
$$C^k_n = \frac{n!}{n!(n-k)!}$$
con $k$ la diferencia en valor absoluto entre *posicion1* y *posicion2* y $n$ al igual que el caso anterior son los
comandos "?".
Para calcular las combinatoria descrita anteriormente, se define una función **factorial()**, que de manera
recursiva una variable **p** tipo double se multiplica por sí misma disminuyendo en una unidad hasta llegar al
caso base donde $p = 0$ que por definición es $0! = 1$, luego se define la función **combinatoria()** que describe
la ecuación descrita anteriormente y se descarta el caso cuando $n − k < 0$ en la cual se indefine la combinatoria, este caso se puede
dar si los comandos " + " y " − " son distintos entre las listas. Finalmente se imprime la probabilidad de que
Korone llegue a la posición que le mando Calli, en forma de número y porcentaje.

### Compilación:
- Asegúrate de tener un compilador de C++ instalado en tu sistema.
- Abre una terminal en el directorio donde se encuentra el archivo fuente `RandomWalks.cpp`.
- Compila el programa utilizando el siguiente comando:
```bash
  g++ RandomWalks.cpp -o RandomWalks

```
### Ejecución:
Una vez compilado, ejecuta el programa proporcionando y siga las instrucciones proporcionadas en pantalla
```bash
  ./RandomWalks
```  
### Requisitos y Dependencias:
Compilador de C++ compatible.

### Ejemplos y Demostraciones:
Una vez compilado, ejecuta el programa proporcionando y siga las instrucciones proporcionadas en pantalla. 
A continuación se muestra un ejemplo del programa:
```bash
$.\RandomWalks

Korone y Calli

Notas: ·Los comandos permitidos son (+,-), por favor ingrese como maximo 10
       ·Los comandos deben ir sin espacios entre sì
       ·Cualquier otro tipo de caracter puede ocasionar errores

Ingrese la lista de comandos que envia Calli:   +-+-+-

Notas: ·Los comandos permitidos son (+,-,?)
       ·La cantidad de comandos debe ser igual que la anterior
       ·Asegurese de que los comandos de la siguiente lista difieran de la anterior
        solo en los signos ? con los que remplazarà algunos de los caràcteres + y - indicados anteriormente,
        si ingresa un orden diferente o comandos distintos entre sì puede ocasionar errores

Ingrese las lista de comandos que recibe Korone: +?+?+?
La probabilidad de que llegue a la posicion que le mando Calli es: 0.125
La probabilidad anterior representada en porcentaje es: 12.5%
```
### Contribución y Colaboración

¡Tu contribución es bienvenida! Si deseas contribuir con mejoras, correcciones o nuevas características, aquí hay algunas formas de hacerlo:

1. **Informar Problemas:** Si encuentras errores o tienes ideas para nuevas características, por favor abre un problema en el [rastreador de problemas](https://github.com/drodtapia/Random-Walks/issues).
   
2. **Enviar Pull Requests:** Si has realizado mejoras en el código, puedes enviar un pull request. Asegúrate de que tu código esté bien probado y documentado.

3. **Comentar y Discutir:** Incluso si no puedes contribuir con código, puedes participar en las discusiones sobre problemas y características. Tus comentarios son valiosos para mejorar el proyecto.

4. **Compartir:** ¡Ayuda a difundir este proyecto compartiéndolo con tus amigos y colegas!

¡Gracias por tu interés en contribuir al proyecto!

### Licencia

Este proyecto está bajo la Licencia [Creative Commons Attribution-NonCommercial 4.0 International License](https://creativecommons.org/licenses/by-nc/4.0/).

Esto significa que puedes:

- Compartir: copiar y redistribuir el material en cualquier medio o formato.
- Adaptar: remezclar, transformar y construir sobre el material.

Bajo los siguientes términos:

- Atribución: debes dar crédito de manera adecuada, proporcionar un enlace a la licencia e indicar si se han realizado cambios. Puedes hacerlo de cualquier manera razonable, pero no de una manera que sugiera que el licenciante te respalda a ti o al uso que haces del material.
- No Comercial: no puedes utilizar el material con fines comerciales.

Leer el texto completo de la licencia [aquí](https://creativecommons.org/licenses/by-nc/4.0/legalcode).

### Créditos y Reconocimientos
Desarrollado por David Rodríguez.

### Contacto
Si tienes alguna pregunta o sugerencia, no dudes en contactar a drodtapia@gmail.com.
