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

### Introducción a Git y GitHub
GitHub es un servicio en la nube con una interfaz web que ayuda a los desarrolladores a almacenar y administrar el código
fuente de sus programas así como a llevar un registro y control de cualquier cambio que se realice sobre ese código. 
Git es un sistema distribuido de control de versiones.
En Git todo el código y su historial de cambios se encuentran disponibles en el ordenador del desarrollador.
En la web se puede encontrar multitud de tutoriales sobre el uso de GitHub y git y
[este](https://www.diegocmartin.com/tutorial-git/), por ejemplo puede ser un buen punto de comienzo para estudiar
ambas herramientas.
Esta [guía simple](https://rogerdudler.github.io/git-guide/) también puede servir para un uso inicial de ellas.

A la hora de estudiar estas herramientas ha de tener en cuenta que el uso que en esta asignatura se va a
realizar de las mismas es básico: inicialmente cada estudiante va a utilizar git/GitHub exclusivamente para almacenar el
código fuente de cada una de las prácticas que desarrolla. 
No se pretende que compartan código a través de git ni que colaboren en el desarrollo de código usando estas
herramientas.
También ha de tener en cuenta que un entorno de desarrollo colaborativo de programas es el escenario más
habitual y en el que estas herramientas muestran su relevancia.

Para crear un repositorio de código hay básicamente dos opciones: crear uno partiendo de cero o bien clonar
(copiar) un repositorio (que ha de ser público) del que se conozca su dirección.
En esta práctica se va a optar por la primera aproximación: crear un repositorio propio para alojar los
programas de esta práctica.

Comience su trabajo con GitHub utilizando la cuenta que creó en la primera práctica de la asignatura.
Acceda a su cuenta y siga 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/getting-started-with-github/create-a-repo)
para crear un repositorio en su cuenta de GitHub.
Elija `IB-2021-2022-Practica08-Funciones` como nombre para su repositorio (en lugar de `hello-world`).
Haga que su repositorio sea privado.
El repositorio que ha creado no contiene programas y apenas contendrá un fichero `README.md`.
GitHub utiliza profusamente ficheros de texto con formato Markdown.
El fichero `README.md` (así lo indica su extensión) es un fichero de texto en formato Markdown.
Markdown es un lenguaje de marcas que permite aplicar formato (negrita, itálicas, imágenes, listas, etc.) a un
fichero de texto.
Este texto que está Ud. leyendo está escrito en un fichero con formato Markdown.
El formato fue ideado para elaborar textos cuyo destino iba a ser la web con más rapidez y sencillez que si se
empleara HTML.

No es neceario que aprenda Markdown en esta asignatura, pero si tiene interés por ello, la referencia 
[Qué es Markdown, para qué sirve y cómo usarlo](https://www.genbeta.com/guia-de-inicio/que-es-markdown-para-que-sirve-y-como-usarlo)
puede servirle de introducción.
[Este tutorial](https://guides.github.com/features/mastering-markdown/) es útil para un
conocimiento más profundo y por último 
[StackEdit](https://stackedit.io/) es un editor de Markdown con una interfaz web, que puede resultarle igualmente útil.

Antes de comenzar a trabajar ahora con Git, añada la clave ssh de su máquina virtual Linux a su cuenta GitHub.
Esta tarea es posible que la realizara en la primera práctica de la asignatura, pero en caso contrario ha de
hacerlo Ud. ahora siguiendo 
[estas instrucciones](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/adding-a-new-ssh-key-to-your-github-account).
En esa página siga el enlace 
[Generated a new SSH key and added it to the ssh-agent](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
para generar una clave ssh en su máquina virtual (también puede hacer lo mismo con otros sistemas Linux con
los que trabaje habitualmente, como su instalación de VirtualBox o WSL).
También la sección "Trabajando con Git en Remoto" del
[tutorial de Diego Martín](https://www.diegocmartin.com/tutorial-git/) puede serle de ayuda para
configurar la clave ssh.

Una vez configurada su clave ssh y creado su repositorio en GitHub, siga 
[estas otras instrucciones](https://docs.github.com/en/free-pro-team@latest/github/creating-cloning-and-archiving-repositories/cloning-a-repository)
para clonar el repositorio que ha creado en GitHub usando `git`.
Para ello, en su máquina virtual linux de la asignatura acceda al directorio en el que esté organizando sus
prácticas y ejecute los comandos:
```
$ mkdir practica08-Funciones
$ git clone git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-P08-GitHub-Functions.git practica08-Funciones
```
La dirección de su repositorio en GitHub 
(en el comando anterior es `git@github.com:username/IB-2020-2021-Practica8-Funciones.git`) ha de obtenerla (cópiela de allí) en su cuenta de GitHub tal como
se indica en las instrucciones anteriores.
De las tres opciones disponibles (HTTPS, ssh, GitHub Cli) utilice la opción ssh.

A continuación ya está todo listo para que acceda al directorio de trabajo de esta práctica (el directorio que
en este documento se ha llamado `practica08-Funciones`) y desarrolle en él todos los ejercicios de esta
práctica.
Dentro de ese directorio cree subdirectorios para cada uno de los ejercicios de la práctica.
Ahora todo el trabajo ha de realizarlo de la forma habitual, editando sus programas con VSC dentro de ese
directorio y realizando todas las pruebas que considere oportunas.
Después de cada sesión de trabajo recuerde "subir" sus cambios a la nube de GitHub.
Para ello, la secuencia habitual de comandos `git` a ejecutar suele ser la siguiente:
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

Explicaciones más detalladas de este "workflow" las puede hallar en el primer
[tutorial](https://www.diegocmartin.com/tutorial-git/)
que se propone en este documento.

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
[Esta guía](https://google.github.io/styleguide/cppguide.html) es un documento de referencia para todos los
programas que se desarrollen en la asignatura, de modo que debe Ud. profundizar en su estudio.

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

Ponga en práctica esas reglas en todos los programas que desarrolle de ahora en adelante.
De forma paulatina se irá estudiando con mayor profundidad esa guía así como poniendo en práctica en los
programas a desarrollar, las recomendaciones que allí se exponen.

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
