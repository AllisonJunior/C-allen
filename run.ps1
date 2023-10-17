# Parametros de Chamada #
param
(
     [string] $action
     ,
     [string] $msg
)

# Compilar o programa #
if ($action -eq "compile") 
{
    cmake -G "MinGW Makefiles" .
    cmake --build .
    .\bin\runnable.exe
}

# Commitar Para o Github #
elseif ( $action -eq "commit" -and $msg -ne $null ) 
{
    Write-Output "* Fazendo o commit..."

    # Limpeza #
    Remove-Item -Path "CMakeFiles" -Recurse
    Remove-Item -Path "cmake_install.cmake"
    Remove-Item -Path "CMakeCache.txt"
    Remove-Item -Path "Makefile"
    # Limpeza # 

    git init
    git add .
    git commit -m $msg
    git branch -M main
    git remote add origin https://github.com/AllisonJunior/C-allen.git
    git push -u origin main
}

else 
{
    Write-Output "Opção inválida. Use -compile, -clear ou -commit 'Mensagem de Commit'."
}
