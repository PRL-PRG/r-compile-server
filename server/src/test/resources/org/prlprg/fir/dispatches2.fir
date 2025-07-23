fun f {
    (reg r:p(I -)) -+> V { |
        g(r$x);
        return g(r$y);
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