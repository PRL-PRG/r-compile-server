fun main {
    (r:p(Is!-)s!):Vs!+{ |
        return modify.*(prom<Vs!+>{ return read.*(r); });
    }
}

fun modify {
    (r:p(Vs!+)s!):Vs!+{ |
        r$y = 1;
        r$x = [10, 20, 30];
        return r$y = force r;
    }
}

fun read {
    (r:p(Vs!+)s!):v(I)f!+{ rx:v(I)s!, ry:Is!, r1:v(I)o! |
        rx = r$x as v(I)s!;
        ry = r$y as Is!;
        r1 = [rx[0], ry];
        return use r1;
    }
}
