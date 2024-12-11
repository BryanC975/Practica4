# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(P_4 VERSION 1.0 LANGUAGES C)

# Configuración del estándar de C
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# Archivos fuente
set(SOURCES
        main.c
        entrada.c
        salida.c
        estadistica.c
)

# Crear el ejecutable
add_executable(P_4 ${SOURCES})
