fun main {
    () --> v(I)f { reg r:v(I)o |
        r = [1, 2, 3];
        # error: `use`d after capture
        prom<I ->{ return r[0]; };
        return use r;
    }
}
