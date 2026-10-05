# Trabalho-C-Somatorio
Trabalho em C usado para demonstar lógica em C

O número de Euler, representado pela letra e, é uma constante matemática cujo valor aproximado é
2,718281828459045. Ele aparece em processos de crescimento e decaimento contínuos, especialmente
quando a velocidade da mudança é proporcional à quantidade existente. Uma forma de compreender sua
origem é considerar R$ 1 aplicado a juros de 100% ao ano. Se os juros forem incorporados uma vez ao ano,
o saldo final será R$ 2. Se forem incorporados duas vezes, o saldo será (1 + 0.5)
2 = 𝑅$ 2,25. Dividindo o
ano em n períodos, obtemos (1 + 1/𝑛)
𝑛
. À medida que n aumenta indefinidamente, essa expressão se
aproxima de e:
𝑒 = lim𝑛→∞
(1 +
1
𝑛
)
𝑛
Para uma taxa r, o crescimento contínuo de um valor inicial A₀ pode ser descrito por 𝐴(𝑡) = 𝐴0 ∙ 𝑒
𝑟𝑡
. O
número e é a base natural das funções exponenciais porque a derivada de 𝑒
𝑥 é a própria função:
𝑑
𝑑𝑥 𝑒
𝑥 = 𝑒
𝑥
Isso significa, por exemplo, que um processo cuja velocidade de crescimento é proporcional ao seu tamanho
pode ser modelado por uma função exponencial de base e. Quando a quantidade diminui proporcionalmente
ao que ainda resta, como em um modelo de decaimento, utiliza-se um expoente negativo. Também é
possível obter 𝑒
𝑥 por meio de uma soma infinita:
𝑒 ≈ ∑
1
𝑛!
∞
𝑛=0
=
1
0!
+
1
1!
+
1
2!
+ ⋯
Nessa expressão, 𝑛! é o fatorial de n, e 0! = 1. Como os fatoriais crescem rapidamente, cada novo termo
da soma se torna menor. Isso permite calcular uma aproximação de e com um programa que soma os termos
até que eles sejam suficientemente pequenos. Para evitar o cálculo direto de fatoriais muito grandes, cada
termo pode ser obtido dividindo o termo anterior por n. Considerando as informações apresentadas, escreva
um algoritmo em C o valor de 𝑒 a partir 50 primeiros termos do somatório:
𝑒 ≈ ∑
1
𝑛!
∞
𝑛=0
=
1
0!
+
1
1!
+
1
2!
+ ⋯
