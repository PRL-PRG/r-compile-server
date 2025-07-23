fun main {
    (reg r:p(I -)) -+> V { |
        return modify(prom<V +>{ return read(r); });
    }
}

fun modify {
    (reg r:p(V +)) -+> V { |
        r$y = 1;
        r$x = [10, 20, 30];
        return r$y = force r;
    }
}

fun read {
    (reg r:p(V +)) -+> v(I)f { reg rx:v(I), reg ry:I, reg r1:v(I)o |
        rx = r$x as v(I);
        ry = r$y as I;
        r1 = [rx[0], ry];
        return use r1;
    }
}
