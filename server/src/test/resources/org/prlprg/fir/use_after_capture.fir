fun main {
    () --> v(I)f { reg r:v(I)o, reg r1:I |
        r = [1, 2, 3];
        # error: `use`d after capture
        prom<I ->{
            r1 = r[0];
            return r1;
        };
        return use r;
    }
}
