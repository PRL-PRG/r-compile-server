fun main {
    () --> v(I)f { reg r:v(I)o, reg r1:I |
        r = [1, 2, 3];
        prom<I ->{
            r1 = r[0];
            return r1;
        };
        # error: Use after capture: r
        return use r;
    }
}
