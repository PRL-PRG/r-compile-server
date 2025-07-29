fun main {
    () --> V { reg r0:I, reg r1:I, reg r2:I, reg r3:V, reg r4:V, reg r5:p(I -), reg r6:p(I -) |
        r0 = upcast(1);  # nil
        r5 = prom<I ->{ return 1; };
        r0 = upcast(r5);  # nil
        r6 = prom<I ->{ return 1; };
        r2 = upcast(r6);  # not nil
        r3 = downcast(r2);
        r4 = downcast(r0);
        return r4;
    }
}

fun upcast {
    (reg r:*) --> I { reg r0:p(I -), reg r1:I |
        r0 = r as p(I-);
        r1 = force r0;
        return r1;
    }
}

fun downcast {
    (reg r:I) --> V { reg r0:V |
        r0 = r as V;
        return r0;
    }
}
