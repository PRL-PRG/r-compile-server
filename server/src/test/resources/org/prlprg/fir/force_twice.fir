fun main {
    () --> I { var x:I?, reg r:p(I -) |
        x = 0;
        r = prom<I ->{
            x = inc.1(x as I);
            return x as I;
        };
        return force_twice(r);
    }
}

fun force_twice {
    (reg r:p(I -)) --> I { |
        force r;
        return force r;
    }
}

fun inc {
    (reg r:*) --> I { | ...; }
    (reg r:V) --> I { | ...; }
}
