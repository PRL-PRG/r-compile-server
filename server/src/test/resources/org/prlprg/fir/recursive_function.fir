fun main {
    (){ |
        recursive.0(123, 0)
    }:Vs!-
}

fun recursive {
    (rm:Is!, rn:Is!){ result:Is!;
        result = if0.1(rm, prom<Is!->{ rn }, prom<Is!->{ recursive.0(dec.1(rm), add.1(rm, rn)) });
        result
    }:Is!-
}

fun if0 {
    (rcond:*s?, rtrue:*s?, rfalse:*s?){ | ... }:Vs!-
    (rcond:Vs!, rtrue:p(Is!-)s!, rfalse:p(Is!-)s!){ | ... }:Is!-
}

fun dec {
    (r:*s?){ | ... }:Is!-
    (r:Vs!){ | ... }:Is!-
}

fun add {
    (r0:*s?, r1:*s?){ | ... }:Is!-
    (r0:Vs!, r1:Vs!){ | ... }:Is!-
}
