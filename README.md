Nombre del alumno: Leonardo

Apellido del alumno: Saenz

Nombre del docente: Gonzalo

Apellido del docente: Consorti

Correo del alumno: leono.saenz.42@gmail.com

Año y división: 4°1

Materia: Proyecto informático 1

contenido de la branch: el brach tiene una carpeta nombrada TP N°6 ahi dentro esta la imagen del circuito y su código en .ino

Consignas a resolver:

Implementar un sistema para controlar un ventilador y una lámpara en una habitación, usando:
Un sensor de temperatura para medir la temperatura ambiente.
Un sensor de movimiento (PIR) para detectar si hay alguien en la habitación.
Controlar un ventilador (simulado con un Motor DC gris) de 12V con velocidad variable (dimmer) dependiendo de la temperatura, 
y una lámpara 12V que se encienda solo cuando hay personas.
  Temperatura mayor a 50°C  
Ventilador a máxima velocidad si importar si hay o no gente dentro
 Temperatura menor a 50°C  
el ventilador esta apagado

Si hay movimiento (persona detectada) y temperatura menor a 50°C  
Ventilador se enciende con velocidad proporcional a temperatura en rangos:
Lámpara encendida mientras tengamos persona dentro
≤15°C → velocidad mínima PWM = 50
= 30°C → PWM = 150
>= 50°C → PWM = 255 (máximo)
Si no hay persona (sin movimiento) 
lámpara apagada

complicaciones: Creo que hice un desastre en el cableado nose si todos los cables hacen falta pero porsiacaso los dejo ahi. El cosito de la temperatura no pude hacer que cuando este en 30° y el foco este prendido se mueva el ventilador a 150 PWM creo que es porque el TMP36 no puede marcar exactamente 30° o le cuesta un poco asi que hice que cuando este entre 15° y 50° el ventilador se mueva a 30°.
