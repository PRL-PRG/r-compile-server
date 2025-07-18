fun vector_ops {
    () --> v(I)f { reg r:v(I)o, reg r0:I |
        r = [1, 2, 3, 4, 5];
        r0 = r[2];
        r[0] = r0;
        r[4] = inc.1(r[1]);
        return use r;
    }
}

fun inc {
    (reg r:*) --> I { | ...; }
    (reg r:V) --> I { | ...; }
}
