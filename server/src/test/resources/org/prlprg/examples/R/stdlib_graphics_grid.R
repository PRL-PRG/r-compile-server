#? stdlib
`grid` <- function (nx = NULL, ny = nx, col = "lightgray", lty = "dotted", 
    lwd = par("lwd"), equilogs = TRUE, nintLog = NULL) 
{
    atx <- if (is.null(nx) || (!is.na(nx) && nx >= 1)) 
        .grid.at(1L, nx, log = par("xlog"), equilogs, axp = par("xaxp"), 
            usr2 = par("usr")[1:2], nintLog = nintLog[1])
    aty <- if (is.null(ny) || (!is.na(ny) && ny >= 1)) 
        .grid.at(2L, ny, log = par("ylog"), equilogs, axp = par("yaxp"), 
            usr2 = par("usr")[3:4], nintLog = nintLog[min(2L, 
                length(nintLog))])
    abline(v = atx, h = aty, col = col, lty = lty, lwd = lwd)
    invisible(list(atx = atx, aty = aty))
}

# Examples
plot(1:3)
grid(NA, 5, lwd = 2) # grid only in y-direction

## maybe change the desired number of tick marks:  par(lab = c(mx, my, 7))
op <- par(mfcol = 1:2)
with(iris,
     {
     plot(Sepal.Length, Sepal.Width, col = as.integer(Species),
          xlim = c(4, 8), ylim = c(2, 4.5), panel.first = grid(),
          main = "with(iris,  plot(...., panel.first = grid(), ..) )")
     plot(Sepal.Length, Sepal.Width, col = as.integer(Species),
          panel.first = grid(3, lty = 1, lwd = 2),
          main = "... panel.first = grid(3, lty = 1, lwd = 2), ..")
     }
    )
par(op)

plot(1:64)
gr <- grid() # now *invisibly* returns the grid "at" locations
str(gr)
stopifnot(length(gr) == 2, identical(gr[[1]], gr[[2]]),
          gr[["atx"]] == 10*(0:6))

## In log-scale plots :
plot(8:270, log="xy") ; grid() # at (1, 10, 100); if preferring "all" grid lines:
plot(8:270, log="xy") ; grid(equilogs = FALSE) -> grll
stopifnot(identical(grll, list(atx = c(1, 2, 5, 10, 20, 50, 100, 200),
                               aty = c(         10, 20, 50, 100, 200))))

x <- 2^(-9:70)
plot(log(x) ~ x, log="xy")
grll <- grid(equilogs = FALSE, col = adjustcolor("green", 1/3))
gr20 <- grid(nintLog = 20)
gr25 <- grid(nintLog = 25, col="thistle")
str(gr25)
stopifnot(exprs = {
    grll$aty == c(1, 2, 5, 10, 20, 50)
    length(gr20$atx) >= 20 # 24 effectively
    all.equal(10^(-3:22), gr25$atx, tol = 1e-15)  # even tol = 0
})

