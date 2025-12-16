#? stdlib
`hist.default` <- function (x, breaks = "Sturges", freq = NULL, probability = !freq, 
    include.lowest = TRUE, right = TRUE, fuzz = 1e-07, density = NULL, 
    angle = 45, col = "lightgray", border = NULL, main = paste("Histogram of", 
        xname), xlim = range(breaks), ylim = NULL, xlab = xname, 
    ylab, axes = TRUE, plot = TRUE, labels = FALSE, nclass = NULL, 
    warn.unused = TRUE, ...) 
{
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    xname <- deparse1(substitute(x), collapse = "\n")
    n <- length(x <- x[is.finite(x)])
    n <- as.integer(n)
    if (is.na(n)) 
        stop("invalid length(x)")
    use.br <- !missing(breaks)
    if (use.br) {
        if (!missing(nclass)) 
            warning("'nclass' not used when 'breaks' is specified")
    }
    else if (!is.null(nclass) && length(nclass) == 1L) 
        breaks <- nclass
    use.br <- use.br && (nB <- length(breaks)) > 1L
    if (use.br) 
        breaks <- sort(breaks)
    else {
        if (!include.lowest) {
            include.lowest <- TRUE
            warning("'include.lowest' ignored as 'breaks' is not a vector")
        }
        if (is.character(breaks)) {
            breaks <- match.arg(tolower(breaks), c("sturges", 
                "fd", "freedman-diaconis", "scott"))
            breaks <- switch(breaks, sturges = nclass.Sturges(x), 
                `freedman-diaconis` = , fd = nclass.FD(x), scott = nclass.scott(x), 
                stop("unknown 'breaks' algorithm"))
        }
        else if (is.function(breaks)) {
            breaks <- breaks(x)
        }
        if (length(breaks) == 1) {
            if (!is.numeric(breaks) || !is.finite(breaks) || 
                breaks < 1L) 
                stop("invalid number of 'breaks'")
            if (breaks > 1e+06) {
                warning(gettextf("'breaks = %g' is too large and set to 1e6", 
                  breaks), domain = NA)
                breaks <- 1000000L
            }
            breaks <- pretty(range(x), n = breaks, min.n = 1)
            nB <- length(breaks)
            if (nB <= 1) 
                stop(gettextf("hist.default: pretty() error, breaks=%s", 
                  format(breaks)), domain = NA)
        }
        else {
            if (!is.numeric(breaks) || length(breaks) <= 1) 
                stop(gettextf("Invalid breakpoints produced by 'breaks(x)': %s", 
                  format(breaks)), domain = NA)
            breaks <- sort(breaks)
            nB <- length(breaks)
            use.br <- TRUE
        }
    }
    nB <- as.integer(nB)
    if (is.na(nB)) 
        stop("invalid length(breaks)")
    h <- as.double(diff(breaks))
    equidist <- !use.br || diff(range(h)) < 1e-07 * mean(h)
    if (!use.br && any(h <= 0)) 
        stop("'breaks' are not strictly increasing")
    freq1 <- freq
    if (is.null(freq)) {
        freq1 <- if (!missing(probability)) 
            !as.logical(probability)
        else equidist
    }
    else if (!missing(probability) && any(probability == freq)) 
        stop("'probability' is an alias for '!freq', however they differ.")
    stopifnot(`fuzz must be non-negative` = fuzz >= 0)
    diddle <- fuzz * if (nB > 5) 
        stats::median(h)
    else if (nB <= 3) 
        diff(range(x))
    else min(h[h > 0])
    fuzz <- if (right) 
        c(if (include.lowest) -diddle else diddle, rep.int(diddle, 
            nB - 1L))
    else c(rep.int(-diddle, nB - 1L), if (include.lowest) diddle else -diddle)
    fuzzybreaks <- breaks + fuzz
    counts <- .Call(C_BinCount, x, fuzzybreaks, right, include.lowest)
    if (any(counts < 0L)) 
        stop("negative 'counts'. Internal Error.", domain = NA)
    if (sum(counts) < n) 
        stop("some 'x' not counted; maybe 'breaks' do not span range of 'x'")
    dens <- counts/(n * h)
    mids <- 0.5 * (breaks[-1L] + breaks[-nB])
    r <- structure(list(breaks = breaks, counts = counts, density = dens, 
        mids = mids, xname = xname, equidist = equidist), class = "histogram")
    if (plot) {
        plot(r, freq = freq1, col = col, border = border, angle = angle, 
            density = density, main = main, xlim = xlim, ylim = ylim, 
            xlab = xlab, ylab = ylab, axes = axes, labels = labels, 
            ...)
        invisible(r)
    }
    else {
        if (warn.unused) {
            nf <- names(formals())
            nf <- nf[is.na(match(nf, c("x", "breaks", "nclass", 
                "plot", "include.lowest", "right", "fuzz")))]
            missE <- lapply(nf, function(n) substitute(missing(.), 
                list(. = as.name(n))))
            not.miss <- !vapply(missE, eval, NA, envir = environment())
            if (any(not.miss)) 
                warning(sprintf(ngettext(sum(not.miss), "argument %s is not made use of", 
                  "arguments %s are not made use of"), paste(sQuote(nf[not.miss]), 
                  collapse = ", ")), domain = NA)
        }
        r
    }
}
