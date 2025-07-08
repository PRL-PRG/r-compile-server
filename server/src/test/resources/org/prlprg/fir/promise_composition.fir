fun main {
    ():v(I)s!-{ r1:p(Is!-)s!, r2:p(Is!-)s!, r:v(I)o! |
        r1 = prom<Is!->{ return 100; };
        r2 = prom<Is!->{ return 200; };

        return force prom<v(I)s!->{
            r = [force r1, force r2, 300];
            return use r;
        };
    }
}
