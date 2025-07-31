fun main {
    (reg rx:I) --> v(I)f { reg r0:p(I -), reg r1:p(I -), reg r2:p(I -), reg r3:p(I -), reg r4:p(I -), reg r5:p(I -), reg r6:v(I)o |
        r0 = prom<I ->{ return rx; };
        r1 = prom<I ->{ return 0; };
        f(r0, r1);

        r2 = prom<I ->{ return rx; };
        r3 = prom<I ->{ return 4; };
        f.1(r2, r3);

        r4 = prom<I ->{ return 5; };
        f.2(rx, r4);

        r5 = prom<I ->{ return rx; };
        f.3(r5, 6);

        r6 = f.4(rx, 7);
        return use r6;
    }
}

fun f {
    (reg ra:*, reg rb:*) --> v(I)f { reg r0:p(I -), reg r1:p(I -), reg r2:I, reg r3:I, reg r4:v(I)o |
        r0 = ra as p(I-);
        r1 = rb as p(I-);
        r2 = force r0;
        r3 = force r1;
        r4 = [r2, r3];
        return use r4;
    }
    (reg ra:p(I -), reg rb:p(I -)) --> v(I)f { reg r0:I, reg r1:I, reg r2:v(I)o |
        r0 = force ra;
        r1 = force rb;
        r2 = [r0, r1];
        return use r2;
    }
    (reg ra:I, reg rb:p(I -)) --> v(I)f { reg r0:I, reg r1:v(I)o |
        r0 = force rb;
        r1 = [ra, r0];
        return use r1;
    }
    (reg ra:p(I -), reg rb:I) --> v(I)f { reg r0:I, reg r1:v(I)o |
        r0 = force ra;
        r1 = [r0, rb];
        return use r1;
    }
    (reg ra:I, reg rb:I) --> v(I)f { reg r0:v(I)o |
        r0 = [ra, rb];
        return use r0;
    }
}
