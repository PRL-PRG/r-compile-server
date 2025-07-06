fun main {
    (){ x:Is?, r:p(Is!-)s!;
        x = 0;
        r = prom<Is!->{
            x = inc.1(x as Is!);
            x as Is!
        };
        force_twice.*(r)
    }:Is!-
}

fun force_twice {
    (r:p(Is!-)s!){ |
        force r;
        force r
    }:Is!-
}

fun inc {
    (r:*s?){ | ... }:Is!-
    (r:Vs!){ | ... }:Is!-
}