#include <iostream>
#include <stdarg.h>

void mi_printf_modificado(const char* formato, ...)
{
    va_list args;
    va_start(args, formato);

    for (int i = 0; formato[i] != '\0'; i++)
    {
        if (formato[i] == '%' && formato[i + 1] == 'v')
        {
            i += 2;
            std::cout << va_arg(args, int);

            while (true)
            {
                int num = va_arg(args, int);
                if (num == -1)
                {
                    break;
                }
                std::cout << ", " << num;
            }
        }
        else if (formato[i] == '%')
        {
            switch (formato[++i])
            {
            case 'd':
                std::cout << va_arg(args, int);
                break;
            case 's':
                std::cout << va_arg(args, char*);
                break;
            default:
                std::cout << formato[i];
            }
        }
        else
        {
            std::cout << formato[i];
        }
    }

    va_end(args);
}

int main()
{
    mi_printf_modificado("La suma de %d y %d es %d. Los siguientes números son: %v", 2, 3, 5, 7, 11, 13, -1);
    std::cout << std::endl;

    mi_printf_modificado("Hola, %s! La respuesta es %d. %s es un gran lenguaje.\n", "Mundo", 42, "C++");

    return 0;
}


#if 0
// Versión con comentarios detallados.

#include <iostream>
#include <stdarg.h>

void mi_printf_modificado(const char* formato, ...)
{
    // Inicializamos el objeto de tipo va_list, que nos permitirá acceder
    // a los argumentos variables de la función.
    va_list args;
    va_start(args, formato);

    // Recorremos la cadena de formato caracter por caracter.
    for (int i = 0; formato[i] != '\0'; i++)
    {
        // Si encontramos la secuencia %v en la cadena de formato, imprimimos
        // todos los argumentos restantes en una sola línea, separados por comas.
        if (formato[i] == '%' && formato[i + 1] == 'v')
        {
            // Avanzamos el índice en la cadena de formato para saltar la secuencia %v.
            i += 2;

            // Imprimimos el primer argumento de la lista de argumentos variables.
            std::cout << va_arg(args, int);

            // Recorremos el resto de la lista de argumentos variables con un bucle while.
            while (true)
            {
                // Extraemos el siguiente argumento de la lista de argumentos variables.
                int num = va_arg(args, int);

                // Si el argumento es igual a -1, significa que hemos llegado al final
                // de la lista, así que salimos del bucle.
                if (num == -1)
                {
                    break;
                }

                // Imprimimos el número y una coma para separarlo del siguiente número.
                std::cout << ", " << num;
            }
        }
        // Si encontramos otro tipo de especificador, como %d o %s, lo procesamos
        // y extraemos el argumento correspondiente de la lista de argumentos variables.
        else if (formato[i] == '%')
        {
            // Avanzamos el índice en la cadena de formato para saltar el carácter %.
            switch (formato[++i])
            {
            case 'd':
                // Si el especificador es %d, imprimimos el siguiente argumento de la lista.
                std::cout << va_arg(args, int);
                break;
            case 's':
                // Si el especificador es %s, imprimimos la siguiente cadena de texto de la lista.
                std::cout << va_arg(args, char*);
                break;
            default:
                // Si encontramos un especificador desconocido, simplemente lo imprimimos.
                std::cout << formato[i];
            }
        }
        // Si no encontramos ningún especificador, simplemente imprimimos el carácter correspondiente
        // de la cadena de formato.
        else
        {
            std::cout << formato[i];
        }
    }

    // Finalizamos el acceso a la lista de argumentos variables.
    va_end(args);
}

int main()
{
    // Llamamos a la función mi_printf_modificado con diferentes argumentos para demostrar su funcionamiento.
    mi_printf_modificado("La suma de %d y %d es %d. Los siguientes números son: %v", 2, 3, 5, 7, 11, 13, -1);
    std::cout << std::endl;

    mi_printf_modificado("Hola, %s! La respuesta es %d. %s es un gran lenguaje.\n", "Mundo", 42, "C++");
    return 0;
}
#endif