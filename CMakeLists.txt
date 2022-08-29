# CMakeList.txt: projeto de CMake para LSVBS, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("LSVBS")

# Adicione a origem ao executável deste projeto.
add_executable (program "program.cpp" "program.h" "globais.cpp" "globais.h" "BitConverter.cpp" "BitConverter.h" "stringify.cpp" "stringify.h" "data.h" "data.cpp")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET program PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
