# Simulacion-Hospital
Realice una simulacion de un hospital donde ingrese x cantidad de personas de forma rand

<h2>Diseñe e implemente las clases (atributos y métodos) que permitan generar objetos tipo
hospital, habitación y paciente (clases: Hospital, Habitacion y Paciente). El programa final
debe incluir la funcionalidad siguiente:</h2>

a) Solicitar al usuario la cantidad de habitaciones con que cuenta el hospital. Generar y
almacenar los objetos de la clase Habitacion en un atributo de la clase Hospital,
mediante una estructura dinámica (vector).

b) Al instanciar una habitación, aleatoriamente generar su número de camas (1-3).
Mediante una estructura dinámica (vector), referenciando a apuntadores de objetos tipo
Paciente (puede indicar NULL como apuntador inicial: cama.push_back(NULL)).

c) Desplegar la información del hospital antes de iniciar la simulación de ingreso/egreso
de pacientes, indicar “DISPONIBLE” cuando el apuntador al objeto Persona sea NULL
(if(cama[i] == NULL)).

![imagen](https://user-images.githubusercontent.com/107895779/198505741-d5144405-c91c-4718-9a9a-389942049dea.png)

d) Iniciar ciclo de simulación mediante llamado de método en la clase Hospital,
considerando cada iteración como un día de actividad en el hospital. Cada día ingresará
un número aleatorio de nuevos pacientes (0-5), y pacientes internados podrán ser dados
de alta (egresar) considerando un probabilidad del 25%. Este método debe llamar a los
métodos de utilidad que sean necesarios. En cada iteración se despliega el estado de
ocupación.

![imagen](https://user-images.githubusercontent.com/107895779/198505844-e8502c32-74df-4dee-ba89-7b8f3b7e3111.png)

e) El vector de camas debe ser actualizado en cada iteración: 1) eliminando objetos
pacientes que aleatoriamente se determine que serán dados de alta (25% de probabilidad),
y 2) generando y asignando los objetos de los nuevos pacientes en camas disponibles.

![imagen](https://user-images.githubusercontent.com/107895779/198505916-ead646e0-cec7-4959-8186-422d77735e16.png)

f) La simulación debe terminar cuando ya no se cuente con camas disponibles.

![imagen](https://user-images.githubusercontent.com/107895779/198505930-3afc820b-ffd6-4a33-90af-9a51a6d1dd27.png)

g) El programa principal solo debe generar una instancia de la clase Hospital y mandar llamar al método simulaHospital().

![imagen](https://user-images.githubusercontent.com/107895779/198505965-62d56e94-ebac-42b9-be4d-05dd63791345.png)

<h2>2. En la implementación de las clases debe considerar el diagrama de clases siguiente, pero
puede incluir o eliminar atributos y métodos que considere pertinente (mantener el uso de
estructuras dinámicas):</h2>

![imagen](https://user-images.githubusercontent.com/107895779/198506148-7665890e-7dae-4a6b-b229-305c60001538.png)

<h1>3. Descripción de funcionalidad de los métodos en el diagrama:</h1>

<h2>Hospital:</h2>
<li>a) Hospital(): Solicitar el número de habitaciones del hospital y generar un vector de
objetos Habitación.</li>
<li>b) simulaHospital(): Itera la simulación de ingreso y egreso de pacientes hasta que no
existan camas disponibles, cada iteración representa un nuevo día y despliega la
información de nuevos pacientes, egresos y disponibilidad de camas.</li>
<li>c) disponibilidadCamas(): Itera en el vector de objetos Habitacion, llamando al método
que despliega la ocupación de cada uno de los objetos (ocupación()).</li>
<li>d) ingresoPacientes(): Recibe como parámetro el número de pacientes a ingresar e itera en
el vector de objetos habitación, llamando al método que inserta pacientes de cada uno de
los objetos (ingresoPaciente()).</li>
<li>e) egresoPacientes(): Itera en el vector de objetos habitación, llamando al método que
egresa pacientes de cada uno de los objetos (egresoPaciente()).</li>


<h2>Habitación:</h2>
<ul>
<li>a) Habitacion(): Recibe como parámetro el número de habitación, genera
aleatoriamente el número de camas (1-3) y crea el vector de objetos tipo Cama con
dirección NULL.</li>
<li>b) Ocupación(): Itera en el vector de camas y despliega los datos del paciente o cama
disponible.</li>
<li>c) ingresoPaciente(): Recibe el número de pacientes a ingresar, itera en el vector de
camas y genera un nuevo paciente en las camas disponibles.</li>
<li>d) egresoPaciente(): Itera en el vector de camas, si en la cama existe paciente
aleatoriamente determina si es dado de alta (egresa con una probabilidad de 25% cada
día), en caso de que el paciente no egrese se incrementa su número de días en
hospital.</li>
<li>e) getNumCamas(): Retorna el número de camas disponibles.</li>
</ul>
<h2>Paciente:</h2>
<ul>
<li>a) Paciente(): Asigna días de internación en 0 y de forma aleatoria: edad (rango 1-100),
sexo (H, M).</li>
<li>b) getSexo(): Retorna la cadena “Hombre” o “Mujer”.</li>
<li>c) getEdad(): Retorna edad del paciente.</li>
<li>d) getDias(): Retorna días de internado del paciente.</li>
<li>e) setDias(): Incrementa en 1 los días de internacion.</li>
</ul>

