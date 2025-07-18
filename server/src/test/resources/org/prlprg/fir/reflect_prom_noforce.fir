fun main {
    () -+> v(I) { reg r0:v(I)o, reg r1:p(I +), var x:v(I)? |
        r0 = [0, 1, 2];
        x = use r0;
        r1 = prom<I ->{ return 42; };
        r1 = prom<I +>{
            r1$x = [3, 4, 5];
            return 42;
        };
        f.*(r1);
        return x as v(I);
    }
}

fun f {
    (reg r:p(I +)) -+> I { |
        return 42;
    }
}
