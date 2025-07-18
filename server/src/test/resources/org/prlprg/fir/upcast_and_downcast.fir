fun main {
    () --> V { reg r0:I, reg r1:I, reg r2:I, reg r3:V, reg r4:V |
        r0 = upcast.*(1);  # nil
        r0 = upcast.*(prom<I ->{ return 1; });  # nil
        r2 = upcast.*(prom<I ->{ return 1; });  # not nil
        r3 = downcast.*(r2);
        return r4 = downcast.*(r0);
    }
}

fun upcast {
    (reg r:*) --> I { reg r0:p(I -) |
        r0 = r as p(I-);
        return force r0;
    }
}

fun downcast {
    (reg r:I) --> V { reg r0:V |
        r0 = r as V;
        return r0;
    }
}
