fun main {
    # error: actual is `+`
    ():v(I)s!-{ x:*s? |
        x = [0, 1, 2];
        return f.*(prom<Vs!->{ return x as Vs!; });
    }
}

fun f {
    (r:p(Vs!-)s!):v(I)s!+{ |
        return g.*(r);
    }
}

fun g {
    (r:p(Vs!-)s!):v(I)s!+{ |
        return r$x = [3, 4, 5];
    }
}
