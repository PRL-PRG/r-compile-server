fun main {
    (rx:Is!):v(I)f!-{ |
        f.*(prom<Is!->{ rx }, prom<Is!->{ 0 });

        f.1(prom<Is!->{ rx }, prom<Is!->{ 4 });
        f.2(rx, prom<Is!->{ 5 });
        f.3(prom<Is!->{ rx }, 6);
        return f.4(rx, 7);
    }
}

fun f {
    (ra:*s?, rb:*s?):v(I)f!-{ r0:p(Is!-)s!, r1:p(Is!-)s!;
        r0 = ra as p(Is!-)s!;
        r1 = rb as p(Is!-)s!;
        return [force r0, force r1];
    }
    (ra:p(Is!-)s!, rb:p(Is!-)s!):v(I)f!-{ |
        return [force ra, force rb];
    }
    (ra:Is!, rb:p(Is!-)s!):v(I)f!-{ |
        return [ra, force rb];
    }
    (ra:p(Is!-)s!, rb:Is!):v(I)f!-{ |
        return [force ra, rb];
    }
    (ra:Is!, rb:Is!):v(I)f!-{ |
        return [ra, rb];
    }
}
