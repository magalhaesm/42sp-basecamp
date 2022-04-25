# Sed

> Sed é um editor de fluxo. Funciona como um filtro, por onde você passa um texto X e ele joga na saída um texto Y.
> Os comandos Sed podem ser dados sem endereços, neste caso o comando será executado para todas as linhas de entrada; com um endereço, caso em que o comando só será executado para linhas de entrada que correspondam a esse endereço; ou com dois endereços, caso em que o comando será executado para todas as linhas de entrada que correspondam ao intervalo inclusivo de linhas começando no primeiro endereço e continuando até o segundo endereço.

```sh
$ sed -n '0~2p'
```
* sintaxe: '`addr1`,`addr2``comando`'
* a virgula define o intervalo de linhas(endereços)
* o til(~) define um padrão de busca
* 0: Comece no "primeiro endereço correspondente"

* -n, --quit, --silent: suprime a saída das linhas que não casem, que combinem com o padrão de busca.

* first~step: combina cada linha `step` começando com a primeira linha. Por exemplo, `sed -n 1~2p` imprimirá todas as linhas ímpares no fluxo de entrada, e o endereço 2~5 corresponderá a cada quinta linha, começando com a segunda. O primeiro pode ser zero; neste caso, sed começa no primeiro endereço correspondente.

* p: imprime a primeira linha do [BUFFER]