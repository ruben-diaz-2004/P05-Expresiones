# Práctica 05. Expresiones

# Factor de ponderación: 5

### Objetivos
Los objetivos de esta práctica son que el alumnado:
* Practique el desarrollo de programas simples en C++ que involucren expresiones
* Estudie y conozca los fundamentos de trabajo con las herramientas Git y GitHub
* Estudie y ponga en práctica las indicaciones que se proponen en la 
[Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 

### Rúbrica de evaluacion de esta práctica
Se señalan a continuación los aspectos más relevantes (la lista no es exhaustiva) que se tendrán en cuenta a la hora de evaluar esta práctica:
* Ha de demostrar que conoce el proceso de compilación de programas usando el compilador de C++ de GNU
* Ha de acreditar que es capaz de subir programas a la plataforma 
[Jutge](https://jutge.org/)
para su evaluación
* Se comprobará que todos los ficheros (`*.cc`, `*.h`) de sus prácticas incluyen un comentario de cabecera
* Se comprobará que todos los programas de sus prácticas sean conforme a la
[Guía de estilo de Google para C++](https://google.github.io/styleguide/cppguide.html) 
* Ha de acreditar que es capaz de editar ficheros remotos en su VM usando vi
* Ha de demostrar que es capaz de ejecutar comandos Linux en su VM

### Introducción a Git y GitHub
GitHub es un servicio en la nube con una interfaz web que ayuda a los desarrolladores a almacenar y administrar el código
fuente de sus programas así como a llevar un registro y control de cualquier cambio que se realice sobre ese código. 
Git es un sistema distribuido de control de versiones.
En Git todo el código y su historial de cambios se encuentran disponibles en el ordenador del desarrollador.
En la web se puede encontrar multitud de tutoriales sobre el uso de GitHub y git y
[este](https://www.diegocmartin.com/tutorial-git/), por ejemplo puede ser un buen punto de comienzo para estudiar
ambas herramientas.
Esta [guía simple](https://rogerdudler.github.io/git-guide/) también puede ser útil para un uso inicial de ellas.

A la hora de estudiar estas herramientas ha de tener en cuenta que el uso que en esta asignatura se va a
realizar de las mismas es básico: inicialmente cada estudiante va a utilizar git/GitHub exclusivamente para almacenar el
código fuente de cada una de las prácticas que desarrolla, así como los ejercicios de programación que
desarrolle.
No se pretende que compartan código a través de git ni que colaboren en el desarrollo de código usando estas
herramientas.
También ha de tener en cuenta que un entorno de desarrollo colaborativo de programas es el escenario más
habitual y en el que estas herramientas muestran su relevancia.

Para crear un repositorio de código hay básicamente dos opciones: clonar (copiar) un repositorio 
(que ha de ser público) del que se conozca su dirección o bien crear uno partiendo de cero.
Mostraremos a continuación la primera de estas opciones, que será la más habitual 
en las prácticas de *Informática Básica* puesto que
con cada una de las siguientes prácticas el profesorado le entregará el enlace a un repositorio público que
Ud. tendrá que clonar haciendo una copia privada del mismo para su trabajo.

Antes de comenzar a trabajar ahora con Git, añada la clave ssh de su máquina virtual Linux a su cuenta GitHub.
Esta tarea es posible que la realizara en la primera práctica de la asignatura, pero en caso contrario ha de
hacerlo Ud. ahora siguiendo 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/adding-a-new-ssh-key-to-your-github-account).
En esa página siga el enlace 
[Generated a new SSH key and added it to the ssh-agent](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
para generar una clave ssh en su máquina virtual (también puede hacer lo mismo con otros sistemas Linux con
los que trabaje habitualmente, como su instalación de VirtualBox o WSL).
También la sección "Trabajando con Git en Remoto" del
[tutorial de Diego Martín](https://www.diegocmartin.com/tutorial-git/) 
puede serle de ayuda para configurar la clave ssh.

Siga 
[estas otras instrucciones](https://docs.github.com/en/free-pro-team@latest/github/creating-cloning-and-archiving-repositories/cloning-a-repository)
para clonar el repositorio de esta práctica, cuya dirección es
```
git@github.com:IB-2022-2023/P05-expressions.git
```
Para ello, en su máquina virtual Ubuntu de la asignatura acceda al directorio en el que esté organizando sus
prácticas y ejecute:
```
$ git clone git@github.com:IB-2022-2023/P05-expressions.git practica05-expressions
```
En ese comando, el segundo parámetro (`practica05-expressions`) es el nombre del directorio donde se incluirá
el contenido del repositorio que se está copiando.
El primer parámetro es la dirección del respositorio que ha de ser público para poder copiarlo.
Una vez ejecutado el comando, acceda al directorio `practica05-expressions` y examine el contenido del mismo.

GitHub utiliza profusamente ficheros de texto con formato Markdown, que suelen tener la extensión `md`.
El fichero `README.md` (así lo indica su extensión) es un fichero de texto en formato Markdown.
Markdown es un lenguaje de marcas que permite aplicar formato (negrita, itálicas, imágenes, listas, etc.) a un
fichero de texto.
Este texto que está Ud. leyendo está escrito asimismo en un fichero con formato Markdown, y es uno de los que
ha descargado.
El formato fue ideado para elaborar textos cuyo destino iba a ser la web con más rapidez y sencillez que si se
empleara HTML.

No es neceario que aprenda Markdown en esta asignatura, pero si tiene interés en ello, la referencia 
[Qué es Markdown, para qué sirve y cómo usarlo](https://www.genbeta.com/guia-de-inicio/que-es-markdown-para-que-sirve-y-como-usarlo)
puede servirle de introducción.
[Este tutorial](https://guides.github.com/features/mastering-markdown/) es útil para un
conocimiento más profundo y por último 
[StackEdit](https://stackedit.io/) es un editor de Markdown con una interfaz web, que puede resultarle igualmente útil.

A continuación ya está todo listo para que acceda al directorio de trabajo de esta práctica (el directorio que
en este documento se ha llamado `practica05-expressions`) y desarrolle en él todos los ejercicios de esta
práctica.
Dentro de ese directorio cree subdirectorios para cada uno de los ejercicios de la práctica.
Ahora todo el trabajo ha de realizarlo de la forma habitual, editando sus programas dentro de ese
directorio y realizando todas las pruebas que considere oportunas.
Después de cada sesión de trabajo recuerde "subir" sus cambios a la nube de GitHub.
Para ello, y después de borrar del directorio los ficheros que no desee retener (ficheros ejecutables, o con
código binario), la secuencia habitual de comandos `git` a ejecutar suele ser la siguiente:
```
$ git pull
$ git add .
$ git commit -m "Texto alusivo a los cambios realizados"
$ git push
```
* El primero de los comandos anteriores, `git pull` es siempre conveniente porque de ese modo se asegura que se descarga al
ordenador la última versión del código que esté alojado en la nube de GitHub.
* `git add .` actualiza el índice de git con el contenido del directorio actual (nótese el punto -directorio
  actual, el de trabajo- en el comando).
* `git commit` registra el el repositorio los cambios que se hayan realizado. A esos cambios les asocia el
mensaje de texto que aparece en el comando. 
* `git push` Actualiza (sube los cambios a la nube) el repositorio en la nube.

Esta secuencia de comandos git debiera Ud. usarla con relativa frecuencia (al finalizar cada ejercicio, al
menos) para guardar copia de su trabajo en su repositorio privado.

Explicaciones más detalladas de este *workflow* (flujo de trabajo) las puede hallar en el primer
[tutorial](https://www.diegocmartin.com/tutorial-git/)
que se propone en este documento.

La otra alternativa para crear un repositorio es crearlo directamente mediante la interfaz web de GitHub.
Si quiere probar esta otra posibilidad, acceda a su cuenta GitHub y siga 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/getting-started-with-github/create-a-repo)
para crear un repositorio en su cuenta de GitHub.
Elija un nombre adecuado para su repositorio (en lugar de `hello-world`).
Haga que su repositorio sea privado.

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

### La Guía de Estilo de Google para C++
[Esta guía](https://google.github.io/styleguide/cppguide.html) 
es un documento de referencia para todos los
programas que se desarrollen en la asignatura, de modo que debe Ud. profundizar en su estudio.
Ante cualquier duda sobre cualquier aspecto relacionado con el estilo (apariencia) del código, se atenderá lo
que se indique en esta guía.

Estudie la sección de nominación 
[Naming](https://google.github.io/styleguide/cppguide.html#Naming)
y dentro de ella estudie las reglas de nombrado de ficheros, tipos, variables y constantes.
En el futuro deberá estudiar las reglas de nombrado de otras entidades que aún no se han estudiado en la asignatura.

En la sección de formato del código
[Formatting](https://google.github.io/styleguide/cppguide.html#Formatting).
estudie los apartados
[Spaces vs Tabs](https://google.github.io/styleguide/cppguide.html#Spaces_vs._Tabs),
[Conditionals](https://google.github.io/styleguide/cppguide.html#Conditionals),
[Loops and Switch Statements](https://google.github.io/styleguide/cppguide.html#Loops_and_Switch_Statements),
[Boolean Expressions](https://google.github.io/styleguide/cppguide.html#Boolean_Expressions),
[Horizontal Whitespace](https://google.github.io/styleguide/cppguide.html#Horizontal_Whitespace) y
[Vertical Whitespace](https://google.github.io/styleguide/cppguide.html#Vertical_Whitespace).

En la sección dedicada a los 
[Comentarios](https://google.github.io/styleguide/cppguide.html#Comments)
estudie los apartados
[Comment Style](https://google.github.io/styleguide/cppguide.html#Comment_Style),
[File Comments](https://google.github.io/styleguide/cppguide.html#File_Comments),
[Variable Comments](https://google.github.io/styleguide/cppguide.html#Variable_Comments) y
[Implementation Comments](https://google.github.io/styleguide/cppguide.html#Implementation_Comments).

Ponga en práctica esas reglas en todos los programas que desarrolle.
De forma paulatina se irá estudiando con mayor profundidad esa guía así como poniendo en práctica en los
programas a desarrollar, las recomendaciones que allí se exponen.

Se enumeran a continuación algunas cuestiones relativas al formato (aspecto) del código que en la mayoría de
los casos se reflejan en diferentes puntos de la 
[guía](https://google.github.io/styleguide/cppguide.html).

* A ambos lados de un operador binario ha de haber siempre un espacio.
Véase
[Horizontal Whitespace](https://google.github.io/styleguide/cppguide.html#Horizontal_Whitespace) y
Así siempre se escribirá
```
a + b
```
En lugar de:
```
a+b
```
Recuerde que un operador binario es un operador que opera dos operandos para producir como resultado un nuevo
valor.
Algunos ejemplos de operadores binarios en C++ son `+` (suma), `*` (producto), `/` (división), `%` (módulo), `=` (asignación), ...
Para mayor detalle sobre este tipo de operadores, consulte
[esta referencia](https://www.scaler.com/topics/binary-operator-in-c/).
* Siempre después de una coma (`,`) ha de escribirse un espacio (` `).
* Se debe indentar (sangrar) el código usando espacios y no tabuladores. 
La
[indentación](https://en.wikipedia.org/wiki/Indentation_(typesetting))
(sangrado en español) es el espacio en blanco que se deja al principio de cada línea para indicar el comienzo
de un nuevo párrafo o nivel de estructuración del código.
Cada nivel de indentación ha de hacerse con 2 espacios (lo cual se puede configurar en el fichero `.vimrc`
para el editor vim).
* Todos los identificadores (de variable, de funmciones, de clases, etc.) que utilice en su código ha de ser significativo.
Es una mala práctica el uso de identificadores de un solo caracter salvo para casos muy concretos.
* Todos los ficheros de código de un proyecto ha de contener un bloque de comentarios prólogo
donde se indique al menos: autor, información de contacto, fecha, asignatura, finalidad del código, etc.
* No comente lo obvio. 
No se trata de comentar por comentar, sino de aclarar al lector/a allí donde sea necesario la finalidad del cóodigo que se escribe.
Por ejemplo un cómentario como el siguiente:
``` 
mi_variable = 2 * intensidad;    // El valor de intensidad se multiplica por 2
``` 
es absolutamente superfluo. 
No aporta información alguna a lo que ya se indica en la sentencia.


### Expresiones
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

### Ejercicios
1. Desinflado. Desarrolle un programa `desinflado.cc` que lea una letra mayúscula y muestre por pantalla su
correspondiente letra minúscula.
Tests de funcionamiento
Entrada Salida
   A      a
   M      m

2. Escriba un programa `boolean_operators.cc` que imprima en pantalla la
[tabla de verdad](https://en.wikipedia.org/wiki/Truth_table#Truth_table_for_all_binary_logical_operators)
de los operadores lógicos (and, or, not) de C++.
El programa deberá utilizar un par de variables booleanas y mostrar el resultado de operar ambas variables con
todos sus posibles valores y con cada uno de los operadores lógicos.

3. Escriba un programa `arithmetic_operators.cc` que declare e inicialice variables de tipos aritméticos e
imprima en pantalla el resultado de operar esas variables con todos los operadores que pueda utilizar con
ellas.
Utilice operadores aritméticos y de comparación.
El programa imprimirá en pantalla líneas como la siguiente:
```
7 % 3 = 1
```
Para cada uno de los operadores considerados.

4. [C++ Tutor](http://pythontutor.com/cpp.html#mode=edit) es una herramienta que a través de una interfaz web
permite "visualizar" la ejecución de programas escritos en C++ (también tiene soporte para otros lenguajes).
Experimente con la herramienta y ejecute con ella los programas que haya estudiado en clase, así como todos
los programas correspondientes a los ejercicios anteriores.
Al usar la herramienta, preste especial atención a la ejecución del programa `references.cc`

5.- Escriba programas que solucionen los siguientes problemas y evalúe su solución utilizando Jutge.
Recuerde que Jutge solo evalúa la corrección de su programa desde un punto de vista del funcionamiento.
Su código ha de cumplir adicionalmente con los requisitos de formato y estilo.

1. [P48107](https://jutge.org/problems/P48107) Integer division and remainder of two natural numbers
2. [P29973](https://jutge.org/problems/P29973) Triangle
3. [P90615](https://jutge.org/problems/P90615) Maximum of three integer numbers
4. [P70955](https://jutge.org/problems/P70955) How many seconds are they?
