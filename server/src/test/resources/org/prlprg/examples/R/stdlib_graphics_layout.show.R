#? stdlib
`layout.show` <- function (n = 1) 
{
    oma.saved <- par("oma")
    par(oma = rep.int(0, 4))
    par(oma = oma.saved)
    o.par <- par(mar = rep.int(0, 4))
    on.exit(par(o.par))
    for (i in seq_len(n)) {
        plot.new()
        box()
        text(0.5, 0.5, i)
    }
    invisible()
}
