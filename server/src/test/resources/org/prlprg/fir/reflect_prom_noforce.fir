fun main {
    ():v(I)s!+{ r0:v(I)o!, r1:p(Is!+)s!, x:v(I)s? |
        r0 = [0, 1, 2];
        x = use r0;
        r1 = prom<Is!->{ return 42; };
        r1 = prom<Is!+>{
            r1$x = [3, 4, 5];
            return 42;
        };
        f.*(r1);
        return x as v(I)s!;
    }
}

fun f {
    (r:p(Is!+)s!):Is!+{ |
        return 42;
    }
}
