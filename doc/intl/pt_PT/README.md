<h1 align="center">
<img src="https://raw.githubusercontent.com/venecoin/venecoin/master/share/pixmaps/venecoin256.svg" alt="venecoin" width="256"/>
<br/><br/>
venecoin Core [DOGE, Ð]  
</h1>

venecoin é uma criptomoeda voltada para a comunidade inspirada num meme Shiba Inu. O software venecoin Core permite que qualquer pessoa opere um nó nas redes blockchain venecoin e usa o método de hash Scrypt para Prova de Trabalho. É adaptado do Bitcoin Core e outras criptomoedas.

Para mais informações acerca das taxas de transação utilizadas na rede venecoin, por favor clica aqui:
[taxas recomendadas](doc/fee-recommendation.md).

## Utilização 💻

Para começares a tua jornada com o venecoin Core, ve o [manual de instalação](INSTALL.md) e o [guia para iniciantes](doc/getting-started.md).

A API JSON-RPC incluida no venecoin Core é auto documentada e pode ser vista com o comando `venecoin-cli help`, mais informações detalhadas sobre cada comando podem ser encontradas utilizando `venecoin-cli help <command>`.

### Quais as portas

O venecoin Core utiliza por padrão a porta `22556` para comunicação em rede
ponto-a-ponto que é necessária para sincronizar a blockchain da "rede principal",
(mainnet), e se manter atualizadas de novas transações e blocos. Adicionalmente a
porta JSONRPC pode ser aberta que por defeito é `22555` para a rede principal.
É fortemente recomendado a não expor as portas RPC publicamente na internet.

|  Função  | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   22556 |   44556 |   18444 |
| RPC      |   22555 |   44555 |   18332 |

## Desenvolvimento continuo - Plano Lua 🌒

O venecoin Core é um programa de código aberto gerido pela comunidade. O processo de desenvolvimento é aberto e visivel publicamente; qualquer um pode ver, discutir e trabalhar no programa.

Recursos principais de Desenvolvimento:

* [Projetos do Github](https://github.com/venecoin/venecoin/projects) é utilizado para conduzir trabalhos planeados ou que estejam em desenvolvimento para as próximas atualizações.
* [Discussão do Github](https://github.com/venecoin/venecoin/discussions) é usado para discutir sobre as funcionalidades, planeadas ou não, relacionadas ao desenvolvimento do programa venecoin Core, os protocolos adjacentes e o criptoativo DOGE.

### Estratégia das Versões
Os numeros de compilação seguem a seguinte semantica:  ```major.minor.patch```

### Ramificações
Este repositório possui 3 principais ramificações (branchs), são estas:

- **master:** Estável, contém a ultima versão da ultima atualização principal *major.minor*.
- **maintenance:** Estável, contém a ultima versão de atualizações anteriores, que ainda estão em manutenção. Formato: ```<version>-maint```
- **development:** Instável, contém código novo para atualizações planeadas. Formato: ```<version>-dev```

*As ramificações Master e Maintenance, são exclusivamente mutáveis por lançamento. Atualizações*
*planeadas terão sempre uma ramificação de desenvolvimento e as solicitações de inclusão deverão ser*
*encaminhadas por meio destas. Ramificações de manutenção existem apenas para **correção de bugs,***
*por favor, encaminhem novos recursos na ramificação de desenvolvimento com a versão mais alta.*

## Contribuindo 🤝

Se encontrastes um bug ou tivestes alguma situação incomum com este programa, por favor informa-nos do ocorrido utilizando o [sistema de problemas (issues)](https://github.com/venecoin/venecoin/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Por favor, acede ao [guia de contribuições](CONTRIBUTING.md) para ver como podes participar
no desenvolvimento do venecoin Core. Existem alguns [pedidos de ajuda](https://github.com/venecoin/venecoin/labels/help%20wanted)
onde os contribuintes terão uma grande importância e apreço. wow.

## Perguntas frequentes ❓

Tens alguma questão relacionada com o venecoin? Talvez já haja uma resposta, disponivel no
[FAQ](doc/FAQ.md) ou na
[seção Q&A](https://github.com/venecoin/venecoin/discussions/categories/q-a)
do nosso quadro de discussão!

## Licenças ⚖️
venecoin Core é disponibilizada sob os termos de uso da licença MIT. Vê,
[COPYING](COPYING) para mais informações.
