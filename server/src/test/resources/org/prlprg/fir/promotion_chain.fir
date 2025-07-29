fun main {
    () --> v(I) { var x:I?, var y:I?, reg rx0:I, reg ry0:I, reg rx1:I?, reg ry1:I?, reg r:v(I)o, reg r0:p(v(I) -), reg r1:v(I), reg r2:p(I -), reg r3:p(I -), reg r4:I, reg r5:I |
        r0 = prom<v(I) ->{
            r2 = prom<I ->{ return 10; };
            rx0 = force r2;
            x = rx0;
            r3 = prom<I ->{ return 20; };
            ry0 = force r3;
            y = ry0;
            rx1 = x;
            r4 = rx1 as I;
            ry1 = y;
            r5 = ry1 as I;
            r = [r4, r5];
            return use r;
        };
        r1 = force r0;
        return r1;
    }
}
