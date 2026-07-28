#? stdlib
`pairs.profile` <- function (x, colours = 2:3, which = names(x), ...) 
{
    parvals <- lapply(x, "[[", "par.vals")
    rng <- apply(do.call("rbind", parvals), 2L, range, na.rm = TRUE)
    Pnames <- colnames(rng)
    npar <- length(Pnames)
    force(which)
    if (is.character(which)) 
        which <- match(which, Pnames)
    stopifnot(all(!is.na(which)))
    stopifnot(all(which %in% 1:npar))
    stopifnot((nw <- length(which)) >= 2)
    coefs <- coef(attr(x, "original.fit"))
    form <- paste(as.character(formula(attr(x, "original.fit")))[c(2, 
        1, 3)], collapse = "")
    oldpar <- par(mar = c(0, 0, 0, 0), mfrow = c(1, 1), oma = c(3, 
        3, 6, 3), las = 1)
    on.exit(par(oldpar))
    fin <- par("fin")
    dif <- (fin[2L] - fin[1L])/2
    if (dif > 0) 
        adj <- c(dif, 0, dif, 0)
    else adj <- c(0, -dif, 0, -dif)
    par(omi = par("omi") + adj)
    cex <- 1 + 1/nw
    frame()
    mtext(form, side = 3, line = 3, cex = 1.5, outer = TRUE)
    del <- 1/nw
    for (i in 1L:nw) {
        ci <- nw - i
        pi <- Pnames[which[i]]
        for (j in 1L:nw) {
            dev.hold()
            pj <- Pnames[which[j]]
            par(fig = del * c(j - 1, j, ci, ci + 1))
            if (i == j) {
                par(new = TRUE)
                plot(rng[, pj], rng[, pi], axes = FALSE, xlab = "", 
                  ylab = "", type = "n")
                op <- par(usr = c(-1, 1, -1, 1))
                text(0, 0, pi, cex = cex, adj = 0.5)
                par(op)
            }
            else {
                col <- colours
                if (i < j) 
                  col <- col[2:1]
                par(new = TRUE)
                if (!is.null(parvals[[pj]])) {
                  plot(spline(x <- parvals[[pj]][, pj], y <- parvals[[pj]][, 
                    pi]), type = "l", xlim = rng[, pj], ylim = rng[, 
                    pi], axes = FALSE, xlab = "", ylab = "", 
                    col = col[2L])
                  pu <- par("usr")
                  smidge <- 2/100 * (pu[4L] - pu[3L])
                  segments(x, pmax(pu[3L], y - smidge), x, pmin(pu[4L], 
                    y + smidge))
                }
                else plot(rng[, pj], rng[, pi], axes = FALSE, 
                  xlab = "", ylab = "", type = "n")
                if (!is.null(parvals[[pi]])) {
                  lines(x <- parvals[[pi]][, pj], y <- parvals[[pi]][, 
                    pi], type = "l", col = col[1L])
                  pu <- par("usr")
                  smidge <- 2/100 * (pu[2L] - pu[1L])
                  segments(pmax(pu[1L], x - smidge), y, pmin(pu[2L], 
                    x + smidge), y)
                }
                points(coefs[pj], coefs[pi], pch = 3, cex = 3)
            }
            if (i == nw) 
                axis(1)
            if (j == 1) 
                axis(2)
            if (i == 1) 
                axis(3)
            if (j == npar) 
                axis(4)
            dev.flush()
        }
    }
    par(fig = c(0, 1, 0, 1))
    invisible(x)
}
