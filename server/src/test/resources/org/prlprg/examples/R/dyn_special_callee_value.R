q <- function(fn) fn(quote(a))
w <- function(fn, y) { z <- y; fn(z) }
l <- function(fn) { z <- quote(a); fn(z) }
for (i in 1:12) { q(`{`); w(`{`, quote(a)); l(`{`) }
list(q(`{`), w(`{`, quote(a)), l(`{`))
