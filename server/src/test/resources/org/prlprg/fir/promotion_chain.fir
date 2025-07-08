fun main {
    ():v(I)s!-{ x:Is?, y:Is?, r:v(I)o! |
        return force prom<v(I)s!->{
            x = force prom<Is!->{ return 10; };
            y = force prom<Is!->{ return 20; };
            r = [x as Is!, y as Is!];
            return use r;
        };
    }
}
