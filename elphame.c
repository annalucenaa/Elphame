#include <stdio.h>
#include<string.h>
int main()
{
    /*variáveis*/
    int menu;
    char start[6];
    char nome[30];
    int energia=100;
    int submenu;
    int ouro=10;
    int local;
    int valido;
    /*Contextualização do jogo*/
    printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
    printf("\n⋆˚꩜｡ Era uma noite comum. Você estava em casa jogando seu jogo favorito, Elphame. \n");
    printf("\n⋆˚꩜｡ Ao atravessar um portal mágico dentro do jogo, algo inesperado aconteceu. Uma força misteriosa o puxou para dentro dele.\n");
    printf("\n⋆˚꩜｡ Quando abriu os olhos, você já não estava mais em seu mundo. Estava em Elphame. \n");
    printf("\n⋆˚꩜｡ Diante de você surgiu Morveth, um antigo guia do reino. \n");
    printf("\n⋆｡𖦹°⭒˚｡⋆⋆｡𖦹°⭒˚｡⋆ MORVETH ⋆｡𖦹°⭒˚｡⋆⋆｡𖦹°⭒˚｡⋆\n");
    printf("\n𖤓 Saudações, viajante. Bem-vindo a Elphame.\n");
    printf("\n𖤓 Há muitos anos, este reino foi tomado por Sylthar, uma criatura nascida do caos. Seu corpo reúne partes de diferentes feras, como se a própria magia tivesse unido fragmentos de várias espécies\n");
    printf("\n𖤓 Desde então, as terras de Elphame mergulharam na escuridão. Criaturas perigosas vagam pelas florestas, ruínas esquecidas escondem segredos e cada escolha pode mudar o seu destino.\n");
    printf("\n𖤓 Elphame é um mundo de aventuras e desafios. Durante sua jornada, você precisará coletar recursos, tomar decisões difíceis e sobreviver aos perigos que encontrará pelo caminho.\n");
    printf("\n𖤓 Se deseja restaurar a paz do reino, deverá enfrentar Sylthar e libertar Elphame de seu domínio.\n");
    printf("\n𖤓 O destino o trouxe até aqui, viajante. Sua jornada começa agora.\n");
    printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
    /*Start*/
    printf("\n⋆˚꩜｡ Para continuar esta jornada digite 'start': \n");
    scanf("%5s", start);
    while (strcmp(start, "start")){
        printf("\n⋆˚꩜｡ Para continuar esta jornada digite 'start': \n");
        scanf("%5s", start);
    }
    printf("\n𖤓 Fico feliz que tenha aceitado embarcar nesta jornada, viajante. Muitos recusaram o chamado de Elphame antes de você.  Diga-me, como devo chamá-lo?\n");
    scanf("%29s", nome);
    printf("\n𖤓 Um nome raro. Certamente as terras de Elphame se lembrarão dele.\n");
    printf("\n𖤓 Antes de tudo você precisa saber que inicialmente:\n");
    printf("\n𖤓 você terá direito a 100 de energia e 10 de ouro.\n");
    printf("\n𖤓 Sua energia representa sua força vital: ela aumenta ao descansar e diminui quando decisões equivocadas são tomadas. Se sua energia chegar a zero, sua jornada chegará ao fim.\n");
    printf("\n𖤓 Antes de enfrentarmos os desafios que o aguardam, você precisará de uma espada, %s. As terras de Elphame são perigosas para quem anda desarmado.\n", nome);
    printf("\n𖤓 Você pode explorar a região em busca de recursos e tesouros, ou seguir diretamente para o Castelo de Elphame.\n");
    valido = 0;
    while (valido == 0){
        printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
        printf("\n⏾ Digite 1 para explorar\n");
        printf("\n⏾  Digite 2 para ir ao castelo\n");
        printf("\n⏾  Digite 3 para sair do jogo.\n");
        printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
        /*explorar área*/
        scanf("%d", &menu);
        if (menu==1){
            printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
            printf("\n⋆˚꩜｡ Enquanto explora os arredores de Elphame, você encontra um pequeno baú escondido entre as raízes de uma árvore ancestral. Dentro dele repousa uma bússola dourada coberta por runas antigas.\n");
            printf("\n𖤓 Inacreditável..., diz Morveth. 'Esta é a Bússola dos Antigos. Ela não aponta para o norte, mas para aquilo que foi perdido pelo reino\n");
            printf("\n𖤓 Dizem que os fundadores de Elphame a utilizavam para encontrar artefatos de grande poder. Guarde-a bem, %s. Ela poderá guiá-lo até algo capaz de derrotar Sylthar.\n", nome);
            printf("࣪\n⤷ Você obteve: Bússola dos Antigos.\n");
            printf("\n𖤓 Agora que possui a Bússola dos Antigos, nosso próximo destino é o Reino de Elphame. As respostas que procuramos podem estar além de seus portões.\n");
            printf("\n⋆˚꩜｡ Ao sair da densa floresta, você avista um ancião envolto por um manto escuro.\n");
            printf("\n⋆˚꩜｡ Apoiado em seu cajado, ele parece aguardá-lo há muito tempo.\n");
            printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
            printf("\n𖤓 Saudações, jovem. Teria um momento para auxiliar este velho homem?\n");
            do{
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                printf("\n⏾ Digite 1  para  ajudar o velho misterioso.\n");
                printf("\n⏾ Digite 2  para  passar a noite na floresta.\n");
                printf("\n⏾ Digite 3  para  sair do jogo.\n");
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                scanf("%d", &submenu);
                if(submenu==1){
                printf("\nHá muitos anos, um grupo de orcs que guarda a Ponte de Draithus roubou um relógio que pertencia à minha falecida esposa.\n");
                printf("\n❀˖° Recupere-o para mim e eu lhe darei uma recompensa.\n");
                while (1)
                {
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                printf("\n⏾ Digite 1  para  aceitar a oferta.\n");
                printf("\n⏾ Digite 2  para  rejeitar a oferta.\n");
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                scanf("%d", &menu);
                if (menu==1)
                {
                    local=5;
                    break;
                } else if (menu==2)
                {
                  printf("\n⋆˚꩜｡ Você recusou a oferta do velho misterioso e perdeu a chance de ganhar uma pedra davitalidade. Sem ela durante suas aventuras não foi possível recuperar suas energias.\n");
                  printf("\n𖤓 Você morreu, %s. Até nosso próximo encontro.\n", nome);
                  return 0;
                } else
                {
                    printf("⋆˚꩜｡ essa opção não existe.");
                }
                }
                }else if (submenu==2){
                    printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                    printf("\n⋆˚꩜｡ A floresta de Elphame não é um lugar seguro para os despreparados. Durante a noite, olhos brilhantes observam você entre as árvores. O som de garras ecoa na escuridão.\n");
                    printf("\n⋆˚꩜｡ Você não sobreviveu ao ataque.\n");
                    printf("\n𖤓 Você morreu, viajante. Até nosso próximo encontro.\n");
                    return 0; 
                }
            } while (submenu != 1 && submenu != 2 && submenu != 3);
            valido = 1;
        } /*Partir para o castelo*/
        else if (menu==2){
            printf("\n𖤓 Entendo. Deseja chegar ao reino o mais rápido possível.\n");
            printf("\n𖤓 Porém, lembre-se, viajante: aqueles que ignoram os caminhos desconhecidos também deixam para trás as oportunidades que eles escondem.\n");
            printf("\n⋆˚꩜｡ Após uma longa caminhada, você alcança os portões de Elphame, mas o esforço da viagem cobra seu preço.\n");
            printf("\n⤷ Você perdeu 5 pontos de energia.\n");
            while (1){
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                printf("\n⏾ Digite 1 para continuar.\n");
                printf("\n⏾ Digite 2 para ver status.\n");
                printf("\n⏾ Digite 3 para sair do jogo.\n");
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                scanf("%d",&submenu);
                if (submenu==1){
                    local = 1;
                    break;
                } else if (submenu==2){
                    energia-=5;
                    printf("⋆˚꩜｡ Energia: %d\n Ouro: %d\n", energia, ouro);
                } else if (submenu==3){
                    printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                    printf("⋆˚꩜｡ Jogo encerrado.");
                    return 0;
                }
                else {
                    printf("⋆˚꩜｡ Essa opção não existe.");
                }
            }
            valido = 1;
        } else if (menu==3){
            printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
            printf("⋆˚꩜｡ Jogo encerrado.");
            return 0;
        } else{
            printf("⋆˚꩜｡ Essa opção não existe.");
        }
    }
    /*chegada ao castelo-local=1*/
    if (local == 1){
        printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("⋆˚꩜｡ Você finalmente alcança os portões do Castelo de Elphame. Antes de seguir sua jornada, será necessário equipar-se para os desafios que o aguardam.\n");
        printf("\n⋆˚꩜｡ Procure o ferreiro do reino. Em sua forja, você poderá adquirir armas, armaduras e escudos para aumentar suas chances de sobrevivência.\n");
        int valido = 0;
        while (valido == 0){
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para ir ao ferreiro\n");
            printf("\n⏾ Digite 2 para ver status\n");
            printf("\n⏾ Digite 3 para sair do jogo\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);
            if (menu == 1){
                printf("⋆˚꩜｡ Você está indo ao encontro do ferreiro.");
                local = 2;
                valido = 1;
            } else if (menu == 2){
                printf("⋆˚꩜｡ Energia: %d.\n Ouro: %d\n", energia, ouro);
            } else if (menu == 3){
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            } else{
                printf("⋆˚꩜｡ Essa opção não existe.");
            }
        }
    }
    /*ferreiro-bussola dos atigos*/
    if (local == 2){printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("\n⋆˚꩜｡ Você chega à forja mais renomada de Elphame. O calor das chamas ilumina armas e armaduras cuidadosamente alinhadas pelas paredes.\n");
        printf("\n❀˖° Bem-vindo, viajante!' — diz o ferreiro. Aqui encontrará equipamentos dignos dos maiores heróis do reino.\n");
        printf("\n❀˖° Vejo que você necessita de uma espada. Os melhores aventureiros sempre caminham com as melhores espadas.\n");
        printf("❀˖° Infelizmente, você não possui ouro suficiente para adquirir este equipamento.\n");
        printf("\n⋆˚꩜｡ Morveth observa a situação e diz:\n");
        printf("\n𖤓 Aventureiros não se tornam lendas da noite para o dia, viajante. Antes de empunhar equipamentos tão valiosos, será preciso conquistar sua recompensa.\n");
        printf("\n𖤓 Explore as terras de Elphame, colete recursos e enfrente desafios. Quando estiver preparado, retorne à forja e adquira o equipamento que deseja.\n");
        printf("\n⋆˚꩜｡ Antes de você ir algo estranho acontece.\n");
        printf("\n⋆˚꩜｡ A Bússola dos Antigos reage ao calor da forja. Morveth diz:\n");
        printf("\n⋆˚꩜｡ A bússola brilha...\n");
        printf("\n⋆˚꩜｡ Ferreiro: Vejo que possui a Bússola. Posso forjar uma arma contra Sylthar se me trouxer o Fragmento do Altar nas Criptas.\n");
        valido = 0;
        while (valido == 0){
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para ir às Criptas Profanadas\n");
            printf("\n⏾ Digite 2 para ver status\n");
            printf("\n⏾ Digite 3 para sair do jogo\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);
            if (menu == 1){
                printf("⋆˚꩜｡ Você está indo diretamente para as criptas mais misteriosas do reino.");
                local = 3;
                valido = 1;
            } else if (menu == 2){
                printf("⋆˚꩜｡ Energia: %d.\n Ouro: %d\n", energia, ouro);
            } else if (menu == 3){
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            }
            else{
                printf("⋆˚꩜｡ Essa opção não existe.");
            }
        }

    }
    /*Ferreiro sem bússola*/
    if (local == 4){printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("\n⋆˚꩜｡ Você chega à forja mais renomada de Elphame. O calor das chamas ilumina armas e armaduras cuidadosamente alinhadas pelas paredes.\n");
        printf("\n❀˖° Bem-vindo, viajante!' — diz o ferreiro. Aqui encontrará equipamentos dignos dos maiores heróis do reino.\n");
        printf("\n❀˖° Espadas para enfrentar seus inimigos, armaduras para resistir aos golpes e escudos para protegê-lo dos perigos que o aguardam.\n");
        printf("\n❀˖° Receio que esta espada esteja além do seu alcance por enquanto, viajante. Sua forja requer um fragmento ancestral oculto no Altar das Criptas\n");
        printf("\n❀˖° Somente a Bússola dos Antigos pode revelar o caminho até ele. Sem a bússola, sua busca está destinada ao fracasso.\n");
        printf("\n⋆˚꩜｡ Morveth observa a situação e diz:\n");
        printf("\n𖤓 Aventureiros não se tornam lendas da noite para o dia,%s. Antes de empunhar equipamentos tão valiosos, será preciso conquistar sua recompensa.\n", nome);
        printf("\n𖤓 Explore as terras de Elphame e consiga os artefatos necessários. Quando estiver preparado, retorne à forja e adquira o equipamento que deseja.\n");
        printf("\n⋆˚꩜｡ Antes de você ir algo estranho acontece.Um velho de vestes gastas aproxima-se e diz:\n");
        printf("\n❀˖° À procura da Bússola dos Antigos, jovem?\n");
        printf("\n❀˖° Talvez eu possa ajudá-lo. Há muitos anos, um grupo de orcs que guarda a Ponte de Draithus roubou um relógio que pertencia à minha falecida esposa.\n");
        printf("\n❀˖° Recupere-o para mim e eu lhe direi onde encontrar a Bússola dos Antigos.\n");
        valido = 0;
        while (valido == 0){
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para ir à ponte de Draithus\n");
            printf("\n⏾ Digite 2 para ver status\n");
            printf("\n⏾ Digite 3 para sair do jogo\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);
            if (menu == 1){
                printf("⋆˚꩜｡ Você está indo diretamente para a ponte de Draithus.");
                local = 5;
                valido = 1;
            }else if (menu == 2){
                printf("⋆˚꩜｡ Energia: %d.\n Ouro: %d\n", energia, ouro);
            }else if (menu == 3){
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            }else{
                printf("⋆˚꩜｡ Essa opção não existe.");
            }
        }
    }
    /*Ponte de Draithus*/
    if(local==5){printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("⋆˚꩜｡ Ao chegar à Ponte de Draithus, você se depara com três orcs de aparência nada amigável. Armados e cobertos por cicatrizes de antigas batalhas, eles bloqueiam sua passagem.\n");
        printf("\n❀˖° Ora, ora... vejam só o que temos aqui. Um viajante perdido.\n");
        printf("\n❀˖° Não estou perdido. Venho em busca de um relógio que pertence a um amigo.\n");
        printf("\n❀˖° Deixe-me adivinhar... Seu amigo é um velho barbudo que vive falando de sua falecida esposa\n");
        printf("\n❀˖° Aquele relógio tem grande valor para ele.\n");
        printf("\n❀˖° Valor? Talvez. Mas já faz anos que o tomamos dele. E acredite, viajante... você não é o primeiro a tentar recuperá-lo.\"\n");
        printf("\n❀˖° Todos os que vieram antes falharam.\"\n");
        printf("\n❀˖° Já que chegou até aqui, há apenas uma forma de conseguir o relógio.\"\n");
        printf("\n❀˖° Enfrente cada um de nós em combate. Se vencer os três, o relógio será seu.\"\n");
        printf("\n❀˖° Mas se perder... seremos a última coisa que verá nesta vida.\"\n");
        printf("\n𖤓 Morveth sussurra: Cuidado, viajante. Estes orcs não parecem estar blefando.\"\n");
        printf("\n⋆˚꩜｡ Aceitar o desafio?\n");
        while (1){
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para aceitar.\n");
            printf("\n⏾ Digite 2 para recusar.\n");
            printf("\n⏾ Digite 3 para sair do jogo.\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d",&menu);
            if (menu==1){printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                printf("\n⤷ Você recebeu um machado orc.\n");
                printf("\n⋆˚꩜｡ A arma é pesada e grande demais para você, mas terá de servir.\n");
                printf("\n𖤓 Não é a arma ideal, viajante... mas, por ora, será tudo o que tem.\"\n");
                printf("\n⋆˚꩜｡ O primeiro orc ergue sua arma e avança em sua direção.\n");
                printf("\n⋆˚꩜｡ Que a batalha comece!\n");
                printf("\n. ݁₊ ⊹ . ݁˖ . ݁. ݁₊ ⊹ . ݁˖ . ݁. ݁₊ ⊹ . ݁˖ . ݁. ݁₊ ⊹ . ݁˖ . ݁. ݁₊ ⊹ .\n");
                printf("\n⋆˚꩜｡ A luta foi intensa, mas você saiu vitorioso.\n");
                printf("\n⤷ Você perdeu 20 pontos de energia.\n");
                printf("\n⤷ Item obtido: Relógio Antigo.\n");
                valido = 0;
                while (valido == 0){
                    printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                    printf("\n⏾ Digite 1 para voltar para o reino de Elphame\n");
                    printf("\n⏾ Digite 2 para ver status\n");
                    printf("\n⏾ Digite 3 para sair do jogo\n");
                    printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                    scanf("%d", &submenu);

                    if (submenu == 1)
                    {
                        printf("⋆˚꩜｡ Você está indo diretamente para o reino de Elphame.");

                        local = 6;

                        valido = 1;
                        
                    }
                    
                    else if (submenu == 2)
                    {
                        energia-=20;
                        printf("⋆˚꩜｡ Energia: %d.\n Ouro: %d\n", energia, ouro);

                    }
                    else if (submenu == 3)
                    {
                        printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                        printf("⋆˚꩜｡ Jogo encerrado.");

                        return 0;
                    }
                    else
                    {
                        printf("⋆˚꩜｡ Essa opção não existe.");
                    }
                }
                break;
            } else if (menu==2){printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                printf("\n⋆˚꩜｡ Você recusou o desafio dos orcs. Sem piedade, eles o atacam e sua jornada chega ao fim.\n");
                printf("\n𖤓 Você morreu, viajante. Até nosso próximo encontro.\n");
                return 0;
            } else if (menu==3){
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
            return 0;}
            else{
                printf("⋆˚꩜｡ Essa opção não existe.");
            }
        }
    }
    /*De volta ao reino de Elphame*/
    if ( local==6){printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("\n⋆˚꩜｡ Você retorna ao Reino de Elphame e procura pelo misterioso ancião.\n");

        printf("\n❀˖° Ora, ora... parece que completou meu desafio e recuperou meu relógio, jovem.\n");

        printf("\n⋆˚꩜｡ O velho sorri e remove lentamente o capuz que escondia seu rosto.\n");

        printf("\n❀˖° Prazer, viajante. Meu nome é Simon Petrikov, o Arquimago de Elphame.\n");

        printf("\n❀˖° Fico feliz que tenha conseguido concluir meu desafio. Muitos recusaram a missão, e outros perderam a vida tentando completá-la.\n");

        printf("\n❀˖° Faço esse teste há muitos anos em busca de alguém verdadeiramente corajoso.\n");

        printf("\n❀˖° Graças à maldição de Sylthar, meus poderes estão limitados e já não sou capaz de enfrentá-lo.\n");

        printf("\n❀˖° Como diz a antiga profecia: apenas um viajante de coração puro será digno de libertar Elphame das garras do caos.\n");

        printf("\n❀˖° E acredito que esse viajante seja você.\n");

        printf("\n❀˖° Como recompensa por seu feito, entrego-lhe a Bússola dos Antigos e a Pedra da Vitalidade.\n");

        printf("\n⤷ Você recebeu: Bússola dos Antigos.\n");

        printf("\n⤷ Você recebeu: Pedra da Vitalidade.\n");

        printf("\n❀˖° Use-os com sabedoria, viajante. O destino de Elphame agora repousa em suas mãos.\n");

        printf("\n⋆˚꩜｡ Simon desaparece em um brilho azulado, deixando apenas o vento para trás.\n");

        printf("\n𖤓 Morveth:Excelente trabalho, viajante.\n");

        printf("\n𖤓 Morveth:A Pedra da Vitalidade é um artefato raro. Com ela, você poderá restaurar suas forças sempre que necessário.\n");

        printf("\n𖤓 Morveth: Agora que possui a bússola e a pedra, temos tudo o que precisamos para irmos até as criptas profanadas.\n");
        valido = 0;
        while (valido == 0)
        {
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para ir para as criptas profanadas.\n");
            printf("\n⏾ Digite 2 para ver status\n");
            printf("\n⏾ Digite 3 para sair do jogo\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &submenu);

            if (submenu == 1)
            {
                printf("⋆˚꩜｡ Você está indo diretamente para as criptas profanadas");

                local = 3;

                valido = 1;
            }
            else if (submenu == 2)
            {
                printf("⋆˚꩜｡ Energia: %d.\n Ouro: %d\n", energia, ouro);

            }
            else if (submenu == 3)
            {
                //fala de morveth
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");


                return 0;
            }
            else
            {
                printf("⋆˚꩜｡ Essa opção não existe.");
            }
        }

    }


    /*criptas profanadas*/
    if (local == 3)
    {   printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("\n⋆˚꩜｡ Você chegou às Criptas Profanadas.\n");

        printf("\n⋆˚꩜｡ Diante do Altar das Criptas, uma criatura encapuzada surge das sombras.\n");

        printf("\n⋆˚꩜｡ Seu rosto é coberto por uma máscara antiga e seus olhos brilham na escuridão.\n");

        printf("\n❀˖° Vejo que veio em busca do Fragmento Ancestral…\n");

        printf("\n❀˖° Mas ninguém toca o altar sem antes passar por mim.\n");

        valido = 0;
        while(valido == 0)
        {
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf ("\n⏾ Digite 1 para conversar e propor uma troca. (Usa 10 de ouro).\n");
            printf("\n ⏾ Digite 2 atacar o guardião pra pegar o fragmento. (Perde 15 de energia).\n");
            printf("\n ⏾ Digite 3 pra sair do jogo.\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);

            if (menu == 1)
            {
                printf("\n⋆˚꩜｡ Você entrega 10 de ouro. O guardião, ganancioso como todos os outros, aceita a proposta e concede o fragmento.\n");
                printf("\n⋆˚꩜｡ Ao sair da caverna você encontra uma pedra brilhante.\n");
                printf("\n𖤓 Morveth diz: \n");
                printf("\n𖤓 Por sorte você encontrou uma pedra da vitalidade. Com ela você poderá recuperar sua energia assim que precisar.\n");
                printf("\nP⋆˚꩜｡ Pedra da Vitalidade encontrada\n");

                ouro -= 10;

                printf("\n⋆˚꩜｡ Status atual: \n");
                printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);

                valido = 1;
            }

            else if (menu == 2)
            {
                printf("\n⋆˚꩜｡ Você vence o guardião e perde 15 de energia.\n");
                printf("\n⤷ Você conseguiu o fragmento do altar das criptas e uma pedra da vitalidade.\n");

                energia -= 15;
                ouro +=10;

                printf("\n⋆˚꩜｡ Status atual: \n");
                printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);

                valido = 1;
            }
            else if (menu == 3)
            {
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            }
            else
            {
                printf("⋆˚꩜｡ Essa opção não existe!");
            }
        }

        while(1)
        {
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para retornar à forja\n");
            printf("\n⏾ Digite 2 para ver status\n");
            printf("\n⏾ Digite 3 para sair do jogo\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);

            if(menu == 1)
            {
                printf("⋆˚꩜｡ Você está voltando para a forja...");

                local = 6;
                break;
            }
            else if (menu == 2)
            {
                printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);
            }
            else if (menu == 3)
            {
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            }
            else{
                printf("⋆˚꩜｡ Essa opção não existe.");
            }
        }

    }
    //retorno a forja
    if (local == 6)
    {   printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("\n⋆˚꩜｡ Você retorna com o Fragmento.\n");
        printf("\n❀˖° Ferreiro: Com isso, a arma está pronta.\n");
        printf("\n❀˖° Você obteve a Espada de Elphame!\n");

        while (1)
        {
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para seguir até o Castelo de Sylthar.\n");
            printf("\n⏾ Digite 2 para ver status.\n");
            printf("\n⏾ Digite 3 para sair.\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);

            if(menu == 1)
            {
                printf("⋆˚꩜｡ Caminhando até o castelo de Sylthar...");

                local = 7;

                break;
            }
            else if(menu == 2)
            {
                printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);
            }
            else if(menu == 3)
            {
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            }
            else
            {
                printf("⋆˚꩜｡ Essa opção não existe.");
            }

        }

    }

    //floresta do castelo
    if(local == 7)
    {   printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("\n⋆˚꩜｡ Com a Espada de Elphame em mãos, você deixa a forja e segue em direção ao castelo de Sylthar.\n");
        printf("\n⋆˚꩜｡ No caminho, você encontra uma floresta perigosa.\n");
        printf("\n⋆˚꩜｡ O que você faz?");

        valido = 0;
        while(valido == 0)
        {
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para enfrentar as criaturas\n");
            printf("\n⏾ Digite 2 para fugir\n");
            printf("\n⏾ Digite 3 para usar a Bússola dos Antigos\n");
            printf("\n⏾ Digite 4 para sair\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);

            if(menu == 1)
            {
                printf("\n⋆˚꩜｡ Parabéns, você derrotou criaturas\n");
                printf("\n⋆˚꩜｡ Perdeu 15 de energia e encontrou 10 de ouro.\n");

                energia -= 15;
                ouro += 10;

                printf("\n⋆˚꩜｡ Status atual: \n");
                printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);

                valido = 1;
            }
            else if (menu == 2)
            {
                printf("\n⋆˚꩜｡ Você conseguiu escapar.\n");
                printf("\n⋆˚꩜｡ Perdeu 5 de energia.");

                energia -= 5;

                printf("\n⋆˚꩜｡ Status atual: \n");
                printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);

                valido = 1;
            }
            else if (menu == 3)
            {
                printf("\n⋆˚꩜｡ Você percebe que a bússola aponta para um caminho seguro.\n");
                printf("\n⋆˚꩜｡ Você encontrou 15 de ouro.");

                ouro += 15;

                printf("\n⋆˚꩜｡ Status atual: \n");
                printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);

                valido = 1;

            }
            else if (menu == 4)
            {
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            }
            else {
                printf("⋆˚꩜｡ Essa opção não existe.");
            }
            while (1)
            {
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                printf("\n⏾ Digite 1 para seguir ao castelo de Sylthar.\n");
                printf("\n⏾ Digite 2 para usar a Pedra da Vitalidade.\n");
                printf("\n⏾ Digite 3 para sair.\n");
                printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
                scanf("%d", &menu);

                if(menu == 1)
                {
                    printf("⋆˚꩜｡ Caminhando ao castelo...");

                    local = 8;
                    break;
                }
                else if (menu == 2)
                {
                    printf("⋆˚꩜｡ Você utilizou a Pedra da Vitalidade.\n");
                    printf("\n⋆˚꩜｡ Energia restaurada.\n");
                    printf("\n⋆˚꩜｡ Status: \n");
                    energia = 100;
                    printf("\n⋆˚꩜｡ Energia: %d. Ouro: %d\n", energia, ouro);
                }
                
                else if(menu == 3)
                {
                    printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                    printf("⋆˚꩜｡ Jogo encerrado.");
                    return 0;
                }
                else {
                    printf("⋆˚꩜｡ Essa opção não existe.");
                }
            }

        }
    }


    //castelo de sylthar
    if (local == 8)
    {   printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
        printf("\n⋆˚꩜｡ Finalmente você chega ao enorme castelo.\n");
        printf("\n𖤓 Morveth: Chegamos. Agora não há mais caminho para seguir.\n");
        printf("\n⋆˚꩜｡ As portas se abrem.\n");
        printf("\n⋆˚꩜｡ Sylthar aparece no salão.\n");
        printf("\nSylthar: Então você finalmente chegou. Entregue a espada e poderá sair vivo.\n");
        printf("\n⋆˚꩜｡ O que você faz?\n");
        valido = 0;
        while (valido == 0)
        {
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            printf("\n⏾ Digite 1 para usar a Bússola dos Antigos\n");
            printf("\n⏾ Digite 2 para entregar a espada\n");
            printf("\n⏾ Digite 3 para atacar sem pensar duas vezes\n");
            printf("\n⏾ Digite 4 para sair do jogo\n");
            printf("\n﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌﹌\n");
            scanf("%d", &menu);
            if (menu == 1)
            {
                printf("\n⋆˚꩜｡ A Bússola dos Antigos começa a apontar para Sylthar.\n");
                printf("\n𖤓 Morveth: Ela está revelando a fonte do poder dele!\n");
                printf("\n⋆˚꩜｡ Você usa a bússola e descobre que o poder de Sylthar vem de um antigo artefato escondido no castelo.\n");
                printf("\n⋆˚꩜｡ Você destrói o artefato com a Espada de Elphame.\n");
                printf("\n⋆˚꩜｡ Sylthar perde seus poderes e é derrotado.\n");
                printf("\n⤷ Você perdeu: Bússola dos Antigos.\n");
                printf("\n𖤓 Morveth: Você sacrificou o artefato para salvar o reino.\n");
                printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                printf("\n⋆˚꩜｡ FINAL — O GUARDIÃO\n");
                printf("\n⋆˚꩜｡ Elphame é reconstruído, e você recebe o título de novo Guardião do Reino.\n");
                printf("\n⋆˚꩜｡ A Espada de Elphame permanece ao seu lado, %s.\n", nome);
                printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                valido = 1;
                return 0;
            }
            else if (menu == 2)
            {
                printf("\n⋆˚꩜｡ Você entrega a espada. Sylthar sorri e a segura com força.\n");
                printf("\nSylthar: Fraco até o fim. Elphame continuará nas trevas.\n");
                printf("\n⤷ Você perdeu: Espada de Elphame.\n");
                printf("\n𖤓 Morveth: Não... não era isso que eu esperava de você, %s.\n", nome);
                printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                printf("\n⋆˚꩜｡ FINAL — AS TREVAS PERMANECEM\n");
                printf("\n⋆˚꩜｡ Sylthar continua no trono, e Elphame permanece sob seu domínio para sempre.\n");
                printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                valido = 1;
                return 0;
            }
            else if (menu == 3)
            {
                printf("\n⋆˚꩜｡ Você avança sem pensar, espada em punho.\n");
                printf("\n⤷ Você perdeu 30 pontos de energia.\n");
                energia -= 30;
                if (energia <= 0)
                {
                    printf("\n⋆˚꩜｡ Sem a proteção da bússola, você não vê o golpe chegar.\n");
                    printf("\n𖤓 Morveth: Não, %s!\n", nome);
                    printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                    printf("\n⋆˚꩜｡ FINAL — A QUEDA DO VIAJANTE\n");
                    printf("\n⋆˚꩜｡ Sua jornada termina aqui, nos salões do Castelo de Sylthar.\n");
                    printf("\n───────────────────⋆⋅𖤓⋅⋆──────────────────\n");
                    valido = 1;
                    return 0;
                }
            }
            
            
            else if (menu == 4)
            {
                printf("𖤓 A aventura termina por agora, %s. Até nosso próximo encontro.\n", nome);
                printf("⋆˚꩜｡ Jogo encerrado.");
                return 0;
            }
            else
            {
                printf("Essa opção não existe.");
            }
        }
    }



    return 0;
}