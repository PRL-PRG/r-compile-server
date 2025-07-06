fun main {
    (){ r1:p(Is!-)s!, r2:p(Is!-)s!, r:v(I)o!;
        r1 = prom<Is!->{ 100 };
        r2 = prom<Is!->{ 200 };

        force prom<v(I)s!->{
            r = [force r1, force r2, 300];
            use r
        }
    }:v(I)s!-
}
