# Práctica 05. Expresiones

# Factor de ponderación: 5

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* XXX

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica:
* Ha de demostrar que conoce el proceso de compilación de programas usando el compilador de C++ de GNU
* Ha de demostrar su capacidad para establecer un fichero de configuración de vim para sus tareas de edición
  en la asignatura
* Ha de acreditar que dispone de una cuenta de usuario en la plataforma Jutge y que conoce los fundamentos de
  trabajo en esa plataforma
* Se comprobará que todos los ficheros (`*.cc`, `*.h`) de sus prácticas incluyen un comentario de cabecera
* Ha de acreditar que es capaz de editar ficheros remotos en su VM usando vi
* Ha de demostrar que es capaz de ejecutar comandos Linux en su VM
* Ha de acreditarse que se es capaz de conectarse a su máquina virtual (VM) de la asignatura 

### Github Classroom
Para cada una de las prácticas de *Informática Básica* el profesorado de la asignatura creará un repositorio
público en GitHub que contendrá, además del enunciado de la práctica que se propone realizar, algunos ficheros
que pudieran ser necesarios para el trabajo propuesto.

El repositorio correspondiente a esta práctica está accesible a través de
[este enlace](https://github.com/IB-2022-2023/P04-first-programs)
de modo que la primera tarea a desarrollar es clonar (copiar) ese repositorio en un directorio adecuado de su
máquina virtual de la asignatura.
La dirección que ha de usar para clonar el directorio la puede hallar en la pestaña *Code* de la página
anterior, seleccionando la opción *SSH* en el desplegable que se abre en esa opción.
Así pues, el comando para clonar el repositorio de esta práctica es
``` .bash
git clone git@github.com:IB-2022-2023/P04-first-programs.git <directorio en mi máquina virtual>
```
Comience su trabajo en esta práctica clonando el repositorio anterior.

En el futuro se utilizará GitHub Classroom (una plataforma relacionada con GitHub) para gestionar las
prácticas de *Informática Básica*.
En esa plataforma, para la realización de cada práctica recibirá una invitación a una tarea que tendrá que
aceptar.
Una vez acepte la invitación tendrá que clonar un repositorio asociado a la tarea.
Ese repositorio privado será el punto de partida y tendrá Ud. que añadir en él directorios con los programas
que realice.

### El fichero `.vimrc`

### Primeros programas
Además de estudiar todo el material expuesto en clases de teoría hasta la actualidad, estudie detenidamente
los contenidos del tema
[Primeros Programas](http://www.minidosis.org/#/temas/Cpp.PrimerosProgramas)
del tutorial MiniDosis.
En ese tema hallará vídeos y textos explicativos, ejercicios en los que tendrá que copiar programas,
escribirlos usando vim, compilarlos y ejecutarlos. También hallará ejercicios para evaluar los conocimientos
adquiridos.

Tenga en cuenta que en ese tutorial se utiliza CodeBlocks mientras que en *Informática Básica* se utiliza vim
para escribir programas.

Cree un subdirectorio con nombre `primeros_programas` en el directorio de trabajo de esta práctica y escriba en el
mismo todos los programas que se le propone en el tema.
En el tutorial para los ficheros con código C++ se utiliza la extensión `.cpp`, mientras que en *Informática
Básica*, siguiendo la 
[Guía de Estilo de Google para C++](https://google.github.io/styleguide/cppguide.html#File_Names)
se utilizará la extensión `.cc`

Tome nota de todas las dudas que le surjan al estudiar este material, para estudiarlas con el profesorado en
las sesiones de Problemas de *Informática Básica*.

### La plataforma Jutge
[Jutge](https://jutge.org/) 
es una plataforma que ha sido desarrollada en la
[UPC](https://www.upc.edu/en) 
para uso docente en asignaturas de programación.
La plataforma ofrece una gran cantidad de problemas que los estudiantes han de resolver y el Jutge (juez en catalán) asigna un 
[veredicto](https://jutge.org/documentation/verdicts) 
a cada solución que se suba a la plataforma.

Jutge solo evalúa los programas desde el punto de vista de la corrección del resultado que ofrecen, 
no evalúa la calidad del código en cuanto a otros aspectos: diseño, estilo, formato, etc.
Para determinar si un programa es correcto o no, Jutge aplica varios tests al programa (tests unitarios)
que tratan de acreditar la bondad de la solución, que podría ser parcialmente correcta.
Algunos de esos tests son públicos y la programadora debiera encargarse de asegurar que su programa pasa
esos tests públicos (ofrece los resultados esperados) antes de enviar el programa al juez.

Para la realización de futuras prácticas de la asignatura deberá Ud. registrarse en la plataform Jutge. 
Recibirá para ello un mensaje de correo con asunto similar a: "Jutge.org - You have been invited to a course". 
Acepte esa invitación y regístrese en el curso *Informática Básica* en la plataforma Jutge usando para ello su
cuenta de correo electrónico institucional.
Es importante que se registre en Jutge con esa cuenta y no otra.

[Este documento](https://docs.google.com/presentation/d/1k53XMnI6Z9DTlBHRJ0cBqix0KZyVIFUgD61XAcsgA9Y/edit?usp=sharing)
contiene información algo más detallada sobre el uso de la plataforma Jutge. 
Estúdielo para preparse a usar Jutge en el futuro.

Compile el programa `squares.cc` que hallará en el subdiretorio `jutge` de esta práctica.
Ejecute el programa resultante de la compilación introduciendo los datos de entrada a través del teclado.
Aprenda a conseguir que el programa tome la entrada de datos desde un fichero de texto, de modo que pueda
ejecutar el programa como:
``` .bash
$ ./squares < fichero_entrada.txt
``` 
Consiga igualmente que su programa tome la entrada desde un fichero y escriba la salida en otro:
``` .bash
$ ./squares < entrada.txt > salida.txt
``` 

El programa `dni.cc` que hallará en el subdirectorio `jutge` de la práctica soluciona el problema
[P24216](https://jutge.org/problems/P24216_es) de Jutge.
Modifique convenientemente el programa para que escriba la solución que Jutge espera y
[suba su solución](https://jutge.org/problems/P24216_es/submissions)
a la plataforma para su evaluación.

### Comandos Linux útiles a la hora de procesar ficheros de texto
Por último, aprenda a utilizar el comando
[diff](https://ss64.com/bash/diff.html).
Los ejemplos y explicaciones de 
[este tutorial](https://www.computerhope.com/unix/udiff.htm) 
pueden resultarle útiles para conocer `diff`
