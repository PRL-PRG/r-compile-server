fun main {
    (reg rx:I) --> v(I)f { |
        f(prom<I ->{ return rx; }, prom<I ->{ return 0; });

        f.1(prom<I ->{ return rx; }, prom<I ->{ return 4; });
        f.2(rx, prom<I ->{ return 5; });
        f.3(prom<I ->{ return rx; }, 6);
        return f.4(rx, 7);
    }
}

fun f {
    (reg ra:*, reg rb:*) --> v(I)f { reg r0:p(I -), reg r1:p(I -) |
        r0 = ra as p(I-);
        r1 = rb as p(I-);
        return [force r0, force r1];
    }
    (reg ra:p(I -), reg rb:p(I -)) --> v(I)f { |
        return [force ra, force rb];
    }
    (reg ra:I, reg rb:p(I -)) --> v(I)f { |
        return [ra, force rb];
    }
    (reg ra:p(I -), reg rb:I) --> v(I)f { |
        return [force ra, rb];
    }
    (reg ra:I, reg rb:I) --> v(I)f { |
        return [ra, rb];
    }
}
