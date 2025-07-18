fun main {
    # error: actual is `+`
    () --> I { reg r:p(I +) |
        r = prom<I +>{ return 1; };
        return force r;
    }
}
