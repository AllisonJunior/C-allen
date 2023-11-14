# Parametros de Chamada #
param
(
     [string] $action
     ,
     [string] $msg
)

# COMPILAÇÃO E EXECUÇÃO DO PROGRAMA #
if ( $action -eq "compile" -or $action -eq "c" -or $action -eq "C" ) 
{  
  Write-Output "`n* Compilando e rodando a aplicação..."  
  cmake -G "MinGW Makefiles" .
  cmake --build .
  Write-Output ""
  
  if ( -not [string]::IsNullOrWhiteSpace($msg) ) 
  {
    .\bin\runnable.exe $msg
  } 
  else 
  {
      .\bin\runnable.exe
  }

}

# RODAR A APLICAÇÃO #
elseif ( $action -eq "r" )
{
      if ( -not [string]::IsNullOrWhiteSpace($msg) )
      {
        Write-Output "`nExecutando o programa com argumentos adicionais...`n"
        .\bin\runnable.exe $msg
      }
      else 
      {    
          Write-Output "`nExecutando o programa sem argumentos adicionais...`n"
          .\bin\runnable.exe
      }
}

# COMPILAÇÃO DO PROGRAMA FORA DESSE CONSOLE  #
elseif ( $action -eq "cout" ) 
{
      Write-Output "`n* Compilando e rodando a aplicação externamente..."  
      cmake -G "MinGW Makefiles" .
      cmake --build .
  
      if ( -not [string]::IsNullOrWhiteSpace($msg) ) 
      {
        Write-Output "`nExecutando com argumentos adicionais...`n"
        Start-Process -FilePath ".\bin\runnable.exe" -ArgumentList $msg
      } 
      else 
      {
          Write-Output "`nExecutando sem argumentos adicionais...`n"
          Start-Process -FilePath ".\bin\runnable.exe"
      }

}



# LIMPEZA DE ARQUIVOS DESNECESSÁRIOS #
elseif ( $action -eq "clear" )
{
      Write-Output "`n* Limpando Arquivos Desnecessários...`n"
      Remove-Item -Path "CMakeFiles" -Recurse
      Remove-Item -Path "cmake_install.cmake"
      Remove-Item -Path "CMakeCache.txt"
      Remove-Item -Path "Makefile"
}



# COMMIT PARA O GITHUB #
elseif ( $action -eq "commit" -and $msg -ne $null ) 
{
      # Lista de arquivos que serão verificados e removidos se existirem
      $arquivos = @("CMakeFiles", "cmake_install.cmake", "CMakeCache.txt", "Makefile" , ".vscode" )
      $arquivosParaRemover = $arquivos | Where-Object { Test-Path -Path $_ }

      # Verifica se há arquivos para remover
      if ( $arquivosParaRemover.Count -gt 0 ) 
      {
        Write-Output "`n* Excluíndo os arquivos..."
        Remove-Item -Path $arquivosParaRemover -Recurse -Force
      }
      else 
      {
        Write-Output "`n* Os arquivos não existem. Nenhuma ação necessária."
      }

      Write-Output "* Adicionando arquivos ao commit..."
      git add .
      git add src/*
      git add linux/*
      git add CMakeLists.txt
      git add README.MD
      git add run.ps1


      Write-Output "* Fazendo o commit..."
      git commit -m $msg

      Write-Output "* Removendo controle remoto existente (se houver)..."
      git remote remove origin

      Write-Output "* Adicionando controle remoto..."
      git remote add origin https://github.com/AllisonJunior/C-allen.git

      Write-Output "* Pushing para o repositório remoto...`n"
      git push -u origin main
}



# ABRIR O GITHUB # 
elseif ( $action -eq "github" )
{
      Write-Output "`n* Abrindo o repositório oficial!`n"
      Start-Process "https://github.com/AllisonJunior/C-allen"
}




# ERRO NA PASSAGEM DE PARÂMETROS #
else 
{
    Write-Output "`n* Insira um parâmetro válido!"  
}