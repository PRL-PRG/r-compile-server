fun main {
    (r:p(Is!-)s!){ |
        modify.*(prom<Vs!+>{ read.*(r) })
    }:Vs!+
}

fun modify {
    (r:p(Vs!+)s!){ |
        r$y = 1;
        r$x = [10, 20, 30];
        r$y = force r
    }:Vs!+
}

fun read {
    (r:p(Vs!+)s!){ rx:v(I)s!, ry:Is!, r1:v(I)o!;
        rx = r$x as v(I)s!;
        ry = r$y as Is!;
        r1 = [rx[0], ry];
        use r1
    }:v(I)f!+
}
