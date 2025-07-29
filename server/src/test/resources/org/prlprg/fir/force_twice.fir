fun main {
    () --> I { var x:I?, reg rx0:I?, reg rx1:I, reg rx1:I?, reg r:p(I -), reg r1:I, reg r2:I |
        x = 0;
        r = prom<I ->{
            rx0 = x;
            r1 = rx0 as I;
            rx1 = inc.1(r1);
            x = rx1;
            rx2 = x;
            r2 = rx2 as I;
            return r2;
        };
        return force_twice(r);
    }
}

fun force_twice {
    (reg r:p(I -)) --> I { reg r1:I |
        force r;
        r1 = force r;
        return r1;
    }
}

fun inc {
    (reg r:*) --> I { | ...; }
    (reg r:V) --> I { | ...; }
}
