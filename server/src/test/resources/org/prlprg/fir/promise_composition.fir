fun main {
    () --> v(I) { reg r1:p(I -), reg r2:p(I -), reg r:v(I)o |
        r1 = prom<I ->{ return 100; };
        r2 = prom<I ->{ return 200; };

        return force prom<v(I) ->{
            r = [force r1, force r2, 300];
            return use r;
        };
    }
}
