cmake_minimum_required(VERSION 3.5)

project(allen_v2 VERSION 1.0)

# Define o diretório de saída para o executável
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Inclui os diretórios de header
include_directories(include)

# Encontra todos os arquivos de header e implementação
file(GLOB_RECURSE GENERICS "include/*.h")
file(GLOB_RECURSE IMPLEMENTATIONS "include/impel/*.c")
file(GLOB_RECURSE SOURCES "src/*.c")

# Cria o executável
add_executable(runnable ${GENERICS} ${IMPLEMENTATIONS} ${SOURCES})

# Define as propriedades do executável (nome, versão, diretório de saída)
set_target_properties(runnable PROPERTIES 
    OUTPUT_NAME "runnable"
    VERSION ${PROJECT_VERSION}
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Instala o executável no diretório de destino (por exemplo, /usr/local/bin/)
# install(TARGETS runnable DESTINATION /usr/local/bin)
