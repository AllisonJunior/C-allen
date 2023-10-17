# Parametros de Chamada #
param
(
     [string] $action
     ,
     [string] $msg
)



# COMPILAÇÃO DO PROGRAMA #
if ( $action -eq "compile" -or $action -eq "c" -or $action -eq "C" ) 
{
  cmake -G "MinGW Makefiles" .
  cmake --build .
  .\bin\runnable.exe
}



# LIMPEZA DE ARQUIVOS DESNECESSÁRIOS #
elseif ( $action -eq "clear" )
{
      Write-Output "* Limpando Arquivos Desnecessários..."
      Remove-Item -Path "CMakeFiles" -Recurse
      Remove-Item -Path "cmake_install.cmake"
      Remove-Item -Path "CMakeCache.txt"
      Remove-Item -Path "Makefile"
}



# COMMIT PARA O GITHUB #
elseif ( $action -eq "commit" -and $msg -ne $null ) 
{
      # Verifica se os arquivos existem antes de tentar removê-los
      if ( Test-Path -Path "CMakeFiles" -or Test-Path -Path "cmake_install.cmake" -or Test-Path -Path "CMakeCache.txt" -or Test-Path -Path "Makefile" ) 
      {
        Write-Output "* Os arquivos estão sendo deletados..."
        Remove-Item -Path "CMakeFiles" -Recurse -Force
        Remove-Item -Path "cmake_install.cmake" -Force
        Remove-Item -Path "CMakeCache.txt" -Force
        Remove-Item -Path "Makefile" -Force
      }
      else 
      {
        Write-Output "* Os arquivos não existem. Nenhuma ação necessária."
      }

      Write-Output "* Fazendo o commit..."
      git init
      git add .
      git commit -m $msg
      git branch -M main
      git remote add origin https://github.com/AllisonJunior/C-allen.git
      git push -u origin main
}



# ERRO NA PASSAGEM DE PARÂMETROS #
else 
{
    Write-Output "Insira algum parâmetro válido."
}
