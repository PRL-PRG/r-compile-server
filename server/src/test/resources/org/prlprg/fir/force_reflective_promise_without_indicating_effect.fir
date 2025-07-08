fun main {
    # error: actual is `+`
    ():Is!-{ r:p(Is!+)s! |
        r = prom<Is!+>{ return 1; };
        return force r;
    }
}
