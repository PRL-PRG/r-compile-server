fun main {
    () -+> v(I) { var x:* |
        x = [0, 1, 2];
        return f(prom<V ->{ return x as V; });
    }
}

fun f {
    # error: actual is `+`
    (reg r:p(V -)) --> v(I) { |
        return g(r);
    }
}

fun g {
    (reg r:p(V -)) -+> v(I) { |
        return r$x = [3, 4, 5];
    }
}
