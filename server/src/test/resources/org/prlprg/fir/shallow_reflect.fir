fun main {
    () -+> v(I) { var x:* |
        x = [0, 1, 2];
        return f(prom<I ->{ return 4; });
    }
}

fun f {
    (reg r:p(I -)) -+> v(I) { |
        return g(prom<I ->{ return 2; });
    }
}

fun g {
    (reg r:p(I -)) -+> v(I) { |
        return r$x = [3, 4, 5];
    }
}
