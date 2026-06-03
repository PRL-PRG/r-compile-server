#? stdlib
`erase.screen` <- function (n = cur.screen) 
{
    if (!.SSexists("sp.screens")) 
        return(FALSE)
    cur.screen <- .SSget("sp.cur.screen")
    if (!(n %in% .SSget("sp.valid.screens")) && n != 0) 
        stop("invalid screen number")
    old <- par(usr = c(0, 1, 0, 1), mar = c(0, 0, 0, 0), fig = if (n > 
        0) 
        .SSget("sp.screens")[[n]]$fig
    else c(0, 1, 0, 1), xaxs = "i", yaxs = "i")
    on.exit(par(old))
    par(new = TRUE)
    plot.new()
    polygon(c(0, 1, 1, 0), c(0, 0, 1, 1), border = NA, col = 0)
    par(new = TRUE)
    invisible()
}
