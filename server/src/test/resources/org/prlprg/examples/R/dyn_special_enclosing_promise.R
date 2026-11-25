mk <- function(fn) function(y) { z <- y; fn(z) }
compose <- function(f, g) function(x) { y <- x; f(g(y)) }
h <- mk(`{`)
k <- compose(`(`, `{`)
for (i in 1:12) { h(quote(a)); k(quote(b)) }
list(h(quote(a)), k(quote(b)))
