fun main {
    () --> I { reg r:p(I +) |
        r = prom<I +>{ return 1; };
        return 42;
    }
}