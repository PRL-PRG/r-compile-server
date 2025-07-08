fun main {
    ():Is!-{ x:Is?, r:p(Is!-)s! |
        x = 0;
        r = prom<Is!->{
            x = inc.1(x as Is!);
            return x as Is!;
        };
        return force_twice.*(r);
    }
}

fun force_twice {
    (r:p(Is!-)s!):Is!-{ |
        force r;
        return force r;
    }
}

fun inc {
    (r:*s?):Is!-{ | ...; }
    (r:Vs!):Is!-{ | ...; }
}
