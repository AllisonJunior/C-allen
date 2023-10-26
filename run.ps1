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
  Write-Output "* Compilando e rodando a aplicação..."  
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
      # Lista de arquivos que serão verificados e removidos se existirem
      $arquivos = @("CMakeFiles", "cmake_install.cmake", "CMakeCache.txt", "Makefile" )
      $arquivosParaRemover = $arquivos | Where-Object { Test-Path -Path $_ }

      # Verifica se há arquivos para remover
      if ( $arquivosParaRemover.Count -gt 0 ) 
      {
        Write-Output "* Excluíndo os arquivos..."
        Remove-Item -Path $arquivosParaRemover -Recurse -Force
      }
      else 
      {
        Write-Output "* Os arquivos não existem. Nenhuma ação necessária."
      }

      Write-Output "* Adicionando arquivos ao commit..."
      git add .
      git add CMakeLists.txt
      git add README.MD
      git add run.ps1
      git add src/*
      git add linux/*

      Write-Output "* Fazendo o commit..."
      git commit -m $msg

      Write-Output "* Removendo controle remoto existente (se houver)..."
      git remote remove origin

      Write-Output "* Adicionando controle remoto..."
      git remote add origin https://github.com/AllisonJunior/C-allen.git

      Write-Output "* Pushing para o repositório remoto..."
      git push -u origin main
}




# ERRO NA PASSAGEM DE PARÂMETROS #
else 
{
    Write-Output "Insira algum parâmetro válido."
}
