#? stdlib
`matplot` <- function (x, y, type = "p", lty = 1:5, lwd = 1, lend = par("lend"), 
    pch = NULL, col = 1:6, cex = NULL, bg = NA, xlab = NULL, 
    ylab = NULL, xlim = NULL, ylim = NULL, log = "", ..., add = FALSE, 
    verbose = getOption("verbose")) 
{
    paste.ch <- function(chv) paste0("\"", chv, "\"", collapse = " ")
    str2vec <- function(string) {
        if (nchar(string, type = "c")[1L] > 1L) 
            strsplit(string[1L], NULL)[[1L]]
        else string
    }
    xlabel <- if (!missing(x)) 
        deparse1(substitute(x))
    ylabel <- if (!missing(y)) 
        deparse1(substitute(y))
    if (missing(x)) {
        if (missing(y)) 
            stop("must specify at least one of 'x' and 'y'")
        else x <- seq_len(NROW(y))
    }
    else if (missing(y)) {
        y <- x
        ylabel <- xlabel
        x <- seq_len(NROW(y))
        xlabel <- ""
    }
    if (is.matrix(x)) {
        n <- nrow(x)
    }
    else if (!is.null(dim(x))) {
        n <- nrow(x <- as.matrix(x))
    }
    else {
        n <- length(x)
        dim(x) <- c(n, 1L)
    }
    if (is.matrix(y)) {
    }
    else if (!is.null(dim(y))) {
        y <- as.matrix(y)
    }
    else {
        dim(y) <- c(length(y), 1L)
    }
    if (n != nrow(y)) 
        stop("'x' and 'y' must have same number of rows")
    kx <- ncol(x)
    ky <- ncol(y)
    if (!kx || !ky) 
        return(invisible())
    if (FALSE) 
        if (kx > 1L && ky > 1L && kx != ky) 
            stop("'x' and 'y' must have only 1 or the same number of columns")
    k <- max(kx, ky)
    type <- str2vec(type)
    if (is.null(pch)) {
        pch <- c(1L:9L, 0L, letters, LETTERS)
        if (k > length(pch) && any(type %in% c("p", "o", "b"))) 
            warning("default 'pch' is smaller than number of columns and hence recycled")
    }
    else if (is.character(pch)) 
        pch <- str2vec(pch)
    if (verbose) 
        message("matplot: doing ", k, " plots with ", paste0(" col= (", 
            paste.ch(col), ")"), paste0(" pch= (", paste.ch(pch), 
            ")"), " ...\n", domain = NA)
    xy <- xy.coords(x, y, xlabel, ylabel, log = log, recycle = TRUE)
    if (is.null(xlab)) 
        xlab <- xy$xlab
    if (is.null(ylab)) 
        ylab <- xy$ylab
    if (is.null(xlim)) 
        xlim <- range(xy$x[is.finite(xy$x)])
    if (is.null(ylim)) 
        ylim <- range(xy$y[is.finite(xy$y)])
    if (length(type) < k) 
        type <- rep_len(type, k)
    if (length(lty) < k) 
        lty <- rep_len(lty, k)
    if (length(lend) < k) 
        lend <- rep_len(lend, k)
    if (length(lwd) < k && !is.null(lwd)) 
        lwd <- rep_len(lwd, k)
    if (length(pch) < k) 
        pch <- rep_len(pch, k)
    if (length(col) < k) 
        col <- rep_len(col, k)
    if (length(bg) < k) 
        bg <- rep_len(bg, k)
    if (is.null(cex)) 
        cex <- 1
    if (length(cex) < k) 
        cex <- rep_len(cex, k)
    ii <- seq_len(k)
    dev.hold()
    on.exit(dev.flush())
    if (!add) {
        ii <- ii[-1L]
        plot(x[, 1L], y[, 1L], type = type[1L], xlab = xlab, 
            ylab = ylab, xlim = xlim, ylim = ylim, lty = lty[1L], 
            lwd = lwd[1L], lend = lend[1L], pch = pch[1L], col = col[1L], 
            cex = cex[1L], bg = bg[1L], log = log, ...)
    }
    for (i in ii) lines(x[, 1L + (i - 1L)%%kx], y[, 1L + (i - 
        1L)%%ky], type = type[i], lty = lty[i], lwd = lwd[i], 
        lend = lend[i], pch = pch[i], col = col[i], cex = cex[i], 
        bg = bg[i])
    invisible()
}

# Examples
require(grDevices)
matplot((-4:5)^2, main = "Quadratic") # almost identical to plot(*)
sines <- outer(1:20, 1:4, function(x, y) sin(x / 20 * pi * y))
matplot(sines, pch = 1:4, type = "o", col = rainbow(ncol(sines)))
matplot(sines, type = "b", pch = 21:23, col = 2:5, bg = 2:5,
        main = "matplot(...., pch = 21:23, bg = 2:5)")

x <- 0:50/50
matplot(x, outer(x, 1:8, function(x, k) sin(k*pi * x)),
        ylim = c(-2,2), type = "plobcsSh",
        main= "matplot(,type = \"plobcsSh\" )")
## pch & type =  vector of 1-chars :
matplot(x, outer(x, 1:4, function(x, k) sin(k*pi * x)),
        pch = letters[1:4], type = c("b","p","o"))

lends <- c("round","butt","square")
matplot(matrix(1:12, 4), type="c", lty=1, lwd=10, lend=lends)
text(cbind(2.5, 2*c(1,3,5)-.4), lends, col= 1:3, cex = 1.5)

table(iris$Species) # is data.frame with 'Species' factor
iS <- iris$Species == "setosa"
iV <- iris$Species == "versicolor"
op <- par(bg = "bisque")
matplot(c(1, 8), c(0, 4.5), type =  "n", xlab = "Length", ylab = "Width",
        main = "Petal and Sepal Dimensions in Iris Blossoms")
matpoints(iris[iS,c(1,3)], iris[iS,c(2,4)], pch = "sS", col = c(2,4))
matpoints(iris[iV,c(1,3)], iris[iV,c(2,4)], pch = "vV", col = c(2,4))
legend(1, 4, c("    Setosa Petals", "    Setosa Sepals",
               "Versicolor Petals", "Versicolor Sepals"),
       pch = "sSvV", col = rep(c(2,4), 2))

nam.var <- colnames(iris)[-5]
nam.spec <- as.character(iris[1+50*0:2, "Species"])
iris.S <- array(NA, dim = c(50,4,3),
                dimnames = list(NULL, nam.var, nam.spec))
for(i in 1:3) iris.S[,,i] <- data.matrix(iris[1:50+50*(i-1), -5])

matplot(iris.S[, "Petal.Length",], iris.S[, "Petal.Width",], pch = "SCV",
        col = rainbow(3, start = 0.8, end = 0.1),
        sub = paste(c("S", "C", "V"), dimnames(iris.S)[[3]],
                    sep = "=", collapse= ",  "),
        main = "Fisher's Iris Data")
par(op)

## 'x' a "Date" vector :
nd <- length(dv <- seq(as.Date("1959-02-21"), by = "weeks", length.out = 100))
mSC <- cbind(I=1, sin=sin(pi*(1:nd)/8), cos=cos(pi*(1:nd)/8))
matplot(dv, mSC, type = "b", main = "matplot(<Date>, y)")

## 'x' a "POSIXct" date-time vector :
ct <- seq(c(ISOdate(2000,3,20)), by = "15 mins", length.out = 100)
matplot(ct, mSC, type = "b", main = "matplot(<POSIXct>, y)")
## or the same with even more axis flexibility:
matplot(ct, mSC, type = "b", main = "matplot(<POSIXct>, y)", xaxt="n")
Axis(ct, side=1, at = ct[1+4*(0:24)])

## Also works for data frame columns:
matplot(iris[1:50,1:4])

