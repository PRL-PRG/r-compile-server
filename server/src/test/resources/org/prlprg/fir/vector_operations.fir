fun vector_ops {
    (){ r:v(I)o!, r0:Is!;
        r = [1, 2, 3, 4, 5];
        r0 = r[2];
        r[0] = r0;
        r[4] = inc.1(r[1]);
        use r
    }:v(I)f!-
}

fun inc {
    (r:*s?){ | ... }:Is!-
    (r:Vs!){ | ... }:Is!-
}