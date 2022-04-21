/**
Realizar una clase denominada Fecha que permita representar una fecha v�lida cualquiera (d�a, mes y a�o).
La misma s�lo debe admitir fechas v�lidas, es decir, que se puedan encontrar en el calendario.
En caso de establecer una fecha no v�lida la misma debe registrar 0/0/0.
La clase debe permitir asignar y devolver los siguientes atributos: d�a, mes y a�o.

Adem�s, la fecha debe contar con los siguientes m�todos:

Un constructor vac�o que asigne la fecha del sistema al objeto fecha.
Un constructor que reciba tres par�metros para d�a, mes y a�o y se los asigne al objeto fecha.
Un constructor que reciba una cadena con el formato "DD/MM/AAAA" y asigne el d�a, mes y a�o al objeto fecha.
Un m�todo mostrar que muestre la fecha por pantalla. Preferentemente con el formato "DD/MM/AAAA".

Ejemplo:
Fecha f1;
Fecha f2(2, 10, 1986);
Fecha f3("02/10/1986");
f1.mostrar();
f2.mostrar();
f3.mostrar();
return 0;


El primer llamado a  mostrar deber�a listar la fecha actual (por ejemplo: 08/04/2021).
El segundo y tercer llamado a mostrar deber�an listar 02/10/1986.

 Otros m�todos:
Elaborar un m�todo que devuelva el n�mero de d�a de la semana (0 - Domingo y 6 - S�bado) a partir de la fecha registrada en el objeto.
Elaborar un m�todo que devuelva el n�mero de d�a del a�o (1 a 366) a partir de la fecha registrada en el objeto.
Por ejemplo, si la fecha registrada es 1/1/2021. Debe devolver 1.
Elaborar un m�todo que devuelva el n�mero de semana a partir de la fecha registrada en el objeto.

Luego de resolver los siguientes m�todos, ya dispondremos de un tipo de dato llamado Fecha que nos permitir� f�cilmente representar una fecha v�lida.
Una vez desarrollada la clase fecha, elaborar las siguientes funciones globales y comprobar su funcionamiento en proyectos de consola de Codeblocks.

Hacer una funci�n llamada calcularEdad que reciba dos objetos de tipo fecha. El primero representando la fecha de nacimiento de una persona y el segundo una fecha posterior. Calcular y devolver la edad de la persona.

Hacer una funci�n llamada calcularEdad que reciba un objeto de tipo fecha que represente la fecha de nacimiento de una persona. Calcular y devolver la edad utilizando como fecha de referencia la actual.

Hacer una funci�n llamada compararFechas que reciba dos fechas y devuelva:
0 si son iguales. -1 si la primera fecha es menor a la segunda.
1 si la primera fecha es mayor a la segunda.

Hacer una funci�n llamada diferenciaEnDias que reciba dos fechas y devuelva la diferencia en d�as que hay entre la segunda fecha y la primera.
Por ejemplo, si recibe 10/10/1998 y 15/3/2024 debe devolver 9288.

Hacer un programa que registre todos los feriados de Argentina del a�o 2021 en un vector de objetos de tipo Fecha.
 Luego, el programa debe informar cu�ntos feriados quedan disponibles en el a�o y cu�l es la fecha del pr�ximo feriado.

***/


#include <iostream>
#include <string>

using namespace std;


class Fecha{
private:
    int _dia, _mes, _anio;

public:
    Fecha f1 (int d=21, int m=04, int a=2022){ ///Constructor Fecha del sisteman
    _dia=d;
    _mes=m;
    _anio=a;
    }

    Fecha f2 (int d=21, int m=04, int a=2022){ ///Constructor Fecha del sisteman
    _dia=d;
    _mes=m;
    _anio=a;
    }

    Fecha f3 (int d=21, int m=04, int a=2022){ ///Constructor Fecha del sisteman
    _dia=d;
    _mes=m;
    _anio=a;
    }

    //GETS
    int getDia(){
        return _dia;
    }
    int getMes(){
        return  _mes;
    }
    int getAnio(){
        return _anio;
    }


    //SETS
    void setDia (int dia){
    _dia=dia;
    }
    void setMes (int mes){
    _mes=mes;
    }
    void setAnio (int anio){
    _anio=anio;
    }



    void mostrar();

    ~Fecha f1(){};
    ~Fecha f2(){};
    ~Fecha f3(){};
};

    void Fecha::mostrar(){

        cout << "Fecha: " << _dia << "/" <<_mes << "/" << _anio << endl;

    }








int main (){
 Fecha obj;
cout <<

return 0;
}
