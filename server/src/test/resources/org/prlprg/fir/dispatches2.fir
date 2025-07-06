fun f {
    (r:p(Is!-)s!):Vs!+{ |
        g.*($r.x);
        g.*($r.y)
    }
}

fun g {
    (r:*s?):Vs!+{ |
        # Slow case with variables, no optimizations due to `force r` causing reflection
        40;
        41;
        42
    }
    (r:Is!):Is!-{ |
        # Fast case with registers, optimizations
        40;
        41;
        42
    }
}