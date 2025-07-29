fun main {
    # error: actual is `+`
    () --> v(I) { var x:*, reg r0:p(V -), reg r1:v(I) |
        x = [0, 1, 2];
        r0 = prom<V ->{ return x as V; };
        r1 = f(r0);
        return r1;
    }
}

fun f {
    (reg r:p(V -)) -+> v(I) { reg r1:v(I) |
        r1 = g(r);
        return r1;
    }
}

fun g {
    (reg r:p(V -)) -+> v(I) { reg r0:v(I)o, reg r1:v(I) |
        r0 = [3, 4, 5];
        r1 = r$x = r0;
        return r1;
    }
}
