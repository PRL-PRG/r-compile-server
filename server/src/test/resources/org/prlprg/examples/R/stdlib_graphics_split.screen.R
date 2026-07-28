#? stdlib
`split.screen` <- function (figs, screen, erase = TRUE) 
{
    first.split <- !.SSexists("sp.screens")
    if (missing(screen)) 
        screen <- if (!first.split) 
            .SSget("sp.cur.screen")
        else 0
    if (!first.split) 
        .valid.screens <- .SSget("sp.valid.screens")
    if (missing(figs)) 
        if (first.split) 
            return(FALSE)
        else return(.valid.screens)
    if ((first.split && screen != 0) || (!first.split && !(screen %in% 
        .valid.screens))) 
        stop("invalid screen number")
    if (!is.matrix(figs)) {
        if (!is.vector(figs)) 
            stop("'figs' must be a vector or a matrix with 4 columns")
        nr <- figs[1L]
        nc <- figs[2L]
        x <- seq.int(0, 1, length.out = nc + 1)
        y <- seq.int(1, 0, length.out = nr + 1)
        figs <- matrix(c(rep.int(x[-(nc + 1)], nr), rep.int(x[-1L], 
            nr), rep.int(y[-1L], rep.int(nc, nr)), rep.int(y[-(nr + 
            1)], rep.int(nc, nr))), ncol = 4)
    }
    num.screens <- nrow(figs)
    if (num.screens < 1) 
        stop("'figs' must specify at least one screen")
    new.screens <- valid.screens <- cur.screen <- 0
    if (first.split) {
        if (erase) 
            plot.new()
        split.saved.pars <- par(.SSenv$par.list)
        split.saved.pars$fig <- NULL
        split.saved.pars$omi <- par(omi = rep.int(0, 4))$omi
        .SSassign("sp.saved.pars", split.saved.pars)
        split.screens <- vector(mode = "list", length = num.screens)
        new.screens <- 1L:num.screens
        for (i in new.screens) {
            split.screens[[i]] <- par(.SSenv$par.list)
            split.screens[[i]]$fig <- figs[i, ]
        }
        valid.screens <- new.screens
        cur.screen <- 1
    }
    else {
        if (erase) 
            erase.screen(screen)
        max.screen <- max(.valid.screens)
        new.max.screen <- max.screen + num.screens
        split.screens <- .SSget("sp.screens")
        total <- c(0, 1, 0, 1)
        if (screen > 0) 
            total <- split.screens[[screen]]$fig
        for (i in 1L:num.screens) figs[i, ] <- total[c(1, 1, 
            3, 3)] + figs[i, ] * rep.int(c(total[2L] - total[1L], 
            total[4L] - total[3L]), c(2, 2))
        new.screens <- (max.screen + 1):new.max.screen
        for (i in new.screens) {
            split.screens[[i]] <- par(.SSenv$par.list)
            split.screens[[i]]$fig <- figs[i - max.screen, ]
        }
        valid.screens <- c(.valid.screens, new.screens)
        cur.screen <- max.screen + 1
    }
    .SSassign("sp.screens", split.screens)
    .SSassign("sp.cur.screen", cur.screen)
    .SSassign("sp.valid.screens", valid.screens)
    if (first.split) 
        on.exit(close.screen(all.screens = TRUE))
    par(split.screens[[cur.screen]])
    on.exit()
    return(new.screens)
}
