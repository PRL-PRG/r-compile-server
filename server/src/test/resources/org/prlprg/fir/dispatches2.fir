fun f {
    (reg r:p(I -)) -+> V { reg r1:V, reg r2:*, reg r3:* |
        r2 = r$x;
        g(r2);
        r3 = r$y;
        r1 = g(r3);
        return r1;
    }
}

fun g {
    (reg r:*) -+> V { |
        # Slow case with variables, no optimizations due to `force r` causing reflection
        40;
        41;
        return 42;
    }
    (reg r:I) --> I { |
        # Fast case with registers, optimizations
        40;
        41;
        return 42;
    }
}