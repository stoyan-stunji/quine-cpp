Simple implementation of a quine program made in C++.

Definition:
+ a computer program which takes no input and produces a copy of its own source code as its only output;
+ a.k.a "self-replicating programs", "self-reproducing programs", and "self-copying programs";
+ a fixed point of an execution environment, when that environment is viewed as a function transforming programs into their outputs;
+ possible in any Turing-complete programming language, as a direct consequence of Kleene's recursion theorem.

Turing-complete:
+ if it can be used to simulate any Turing machine.

Kleene's recursion theorem:
+ Let Ф: F(N^k) -> (N^k) be a recursive functional. Then Ф has a least fixed point f: N^k -> N which is computable:
1. Ф(f) = f;
2. ∀g ∈ F(N^k) such that Ф(g) = g it holds that f ⊆ g;
3. f is computable.

Schematic:

[![1-Bk-KXLF25wbt-Yd-D9-SQHWug.png](https://i.postimg.cc/3N6wQXgy/1-Bk-KXLF25wbt-Yd-D9-SQHWug.png)](https://postimg.cc/dZ2F8TNv)

Sources:
+ www.wiki.c2.com/?QuineProgram ; 
+ www.nyx.net/~gthompso/quine.htm ;
