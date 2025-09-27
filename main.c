// Tudo após estas barras duplas é um comentário de código
// Ou seja o programa não lê, pois é apenas para os desenvolvedores

// Onde include é o comando para adicionar a biblioteca ao programa
// As tags < e > recebem o diretório ou nome do arquivo
// Dentro haverá arquivos como stdio.h
#include <stdio.h> // Incluindo a biblioteca stdio
// Daqui usaremos os comandos printf e scanf

#include <locale.h> // Incluindo a biblioteca locale
// Daqui usaremos setlocale

// Onde int é o tipo do metódo que pode ser (void, int, char, bool, float, double)
// main é o nome do metódo
// As chaves { e } indicam delimitadores para bloco de código
// Bloco de código é junção de várias linhas em um único metódo
int main () { // Este é o metódo principal
    
    
    // Se o "" possuir uma linguagem, ela receberá a linguagem
    // Se estiver vazia, ela pega a pré-definida pelo sistema
    setlocale(LC_ALL, ""); // Aqui definimos o local do programa
    
    // Iremos agora trabalhar com váriaveis
    // Para criar uma variavel precisamos de um conceito
    // tipo_variavel nome_variavel;
    // Onde posso atribuir diretamente valores em sua inicialização
    // Todo texto deve estar entre aspas duplas, caracteres entre aspas simples
    // char nome[30] = "Antonio Italo Coutinho Machado";
    
    char nome[30]; // Criando a variavel do tipo char
    // Onde char é o tipo da variavel
    // Onde nome é o nome da variavel
    // Onde [30] é o tamanho da variavel
    
    int idade; // Criando a variavel do tipo int
    
    // Veremos agora sobre a função printf
    // A função printf permite exibir uma informação no console
    // Console é onde sua aplicação será visualizada
    // Para usar esta função usaremos
    // printf("Meu texto aqui!");
    printf("Como é seu nome: "); // Exibindo como é seu nome
    
    
    // Veremos agora sobre a função scanf
    // A função scanf permite receber uma informação pelo console
    // Para usar esta função usaremos
    // scanf("%s", variavel);
    
    // Onde "%s" é o indentificador para texto
    // Importante: aqui não usamos & porque a variável nome já é um endereço de memória
    // Usaremos [^\n] para permitir receber espaços
    scanf("%[^\n]", nome); // Recebendo um nome do console
    
    // Agora iremos pegar uma informação do tipo int
    // Para isso vamos perguntar ao usuário, qual a idade dele
    // Vamos exibir a mensagem com o nome do usuário também
    printf("%s... E qual sua idade? ", nome);
    // Aqui é diferente do outro printf
    // Ele exibe uma informação passada pelo usuário
    
    
    scanf("%d", &idade);
    // Onde "%d" é o indentificador para inteiros
    // Aqui usamos o & para indicar o endereço de memória da variável idade
    
    
    // Agora exibiremos o nome e a idade 
    printf("Olá, %s. Fico feliz por saber que você tem %d anos!\n", nome, idade); // o \n serve para quebrar a linha
    // Importante usar os indentificadores e variaveis corretamente, pois pode gerar erros
    
    // Lembra que definimos o tipo do metódo como int?
    // Ele cobra que seja retornado um valor do tipo int
    return 0; // Retornando um valor inteiro pelo metódo
    // No caso, deve se retornar 0 se tudo tiver finalizado bem!
}

// Notem também sua coloração!


/*
Como atividade!

Exibir na tela as informações de três pessoas!
Sendo nome, endereço, idade!
*/
