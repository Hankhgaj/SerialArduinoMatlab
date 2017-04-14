%Creamos un objeto con el puerto serial
clc 
clear all  %#ok<*CLSCR>
fclose('all');
close all
delete(instrfindall);
%Creamos la comunicacion serial
robot = serial('com3');
robot.BaudRate = 115200;
%Conectamos el objeto al puerto serial
fopen(robot);

%Convertimos los elementos del array a String
m1=num2str(3.1);
m2=num2str(4.2);
m3=num2str(5.3);
m4=num2str(6.4);
m5=num2str(7.5);

mensaje = [m1 ',' m2 ',' m3 ',' m4 ',' m5]; %Creamos el mensaje con el array 
pause(1)
fprintf(robot, '%s', mensaje); %Enviamos el mensaje al Arduino

disp(fscanf(robot)); %Leemos datos desde arduino
