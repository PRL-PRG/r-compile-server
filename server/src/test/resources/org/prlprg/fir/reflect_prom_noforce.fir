fun main {
    (){ r0:v(I)o!, r1:p(Is!+)s!, x:v(I)s?;
        r0 = [0, 1, 2];
        x = use r0;
        r1 = prom<Is!->{ 42 };
        r1 = prom<Is!+>{
            $r1.x = [3, 4, 5];
            42
        };
        f.*(r1);
        x as v(I)s!
    }:v(I)s!+
}

fun f {
    (r:p(Is!+)s!){ |
        42
    }:Is!+
}