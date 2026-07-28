#? stdlib
`symnum` <- function (x, cutpoints = c(0.3, 0.6, 0.8, 0.9, 0.95), symbols = if (numeric.x) c(" ", 
    ".", ",", "+", "*", "B") else c(".", "|"), legend = length(symbols) >= 
    3, na = "?", eps = 1e-05, numeric.x = is.numeric(x), corr = missing(cutpoints) && 
    numeric.x, show.max = if (corr) "1", show.min = NULL, abbr.colnames = has.colnames, 
    lower.triangular = corr && is.numeric(x) && is.matrix(x), 
    diag.lower.tri = corr && !is.null(show.max)) 
{
    if (length(x) == 0L) 
        return(noquote(if (is.null(d <- dim(x))) character() else array("", 
            dim = d)))
    has.na <- any(nax <- is.na(x))
    if (numeric.x) {
        force(corr)
        cutpoints <- sort(cutpoints)
        if (corr) 
            cutpoints <- c(0, cutpoints, 1)
        if (anyDuplicated(cutpoints) || (corr && (any(cutpoints > 
            1) || any(cutpoints < 0)))) 
            stop(if (corr) 
                gettext("'cutpoints' must be unique in 0 < cuts < 1, but are = ")
            else gettext("'cutpoints' must be unique, but are = "), 
                paste(format(cutpoints), collapse = "|"), domain = NA)
        nc <- length(cutpoints)
        minc <- cutpoints[1L]
        maxc <- cutpoints[nc]
        range.msg <- if (corr) 
            gettext("'x' must be between -1 and 1")
        else gettextf("'x' must be between %s and %s", format(minc), 
            format(maxc))
        if (corr) 
            x <- abs(x)
        else if (any(x < minc - eps, na.rm = TRUE)) 
            stop(range.msg, domain = NA)
        if (any(x > maxc + eps, na.rm = TRUE)) 
            stop(range.msg, domain = NA)
        ns <- length(symbols)
        symbols <- as.character(symbols)
        if (anyDuplicated(symbols)) 
            stop("'symbols' must be unique, but are = ", paste(symbols, 
                collapse = "|"), domain = NA)
        if (nc != ns + 1) 
            if (corr) 
                stop("number of 'cutpoints' must be one less than number of symbols")
            else stop("number of 'cutpoints' must be one more than number of symbols")
        iS <- cut(x, breaks = cutpoints, include.lowest = TRUE, 
            labels = FALSE)
        if (any(ii <- is.na(iS))) {
            iS[which(ii)[!is.na(x[ii]) & (abs(x[ii] - minc) < 
                eps)]] <- 1
        }
    }
    else {
        if (!missing(symbols) && length(symbols) != 2L) 
            stop("must have 2 'symbols' for logical 'x' argument")
        iS <- x + 1
    }
    if (has.na) {
        ans <- character(length(iS))
        if ((has.na <- is.character(na))) 
            ans[nax] <- na
        ans[!nax] <- symbols[iS[!nax]]
    }
    else ans <- symbols[iS]
    if (numeric.x) {
        if (!is.null(show.max)) 
            ans[x >= maxc - eps] <- if (is.character(show.max)) 
                show.max
            else format(maxc, digits = 1)
        if (!is.null(show.min)) 
            ans[x <= minc + eps] <- if (is.character(show.min)) 
                show.min
            else format(minc, digits = 1)
    }
    if (lower.triangular && is.matrix(x)) 
        ans[!lower.tri(x, diag = diag.lower.tri)] <- ""
    attributes(ans) <- attributes(x)
    if (is.array(ans) && (rank <- length(dim(x))) >= 2L) {
        has.colnames <- !is.null(dimnames(ans))
        if (!has.colnames) {
            dimnames(ans) <- vector("list", rank)
        }
        else {
            has.colnames <- length(dimnames(ans)[[2L]]) > 0L
        }
        if ((is.logical(abbr.colnames) || is.numeric(abbr.colnames)) && 
            abbr.colnames) {
            dimnames(ans)[[2L]] <- abbreviate(dimnames(ans)[[2L]], 
                minlength = abbr.colnames)
        }
        else if (is.null(abbr.colnames) || is.null(dimnames(ans)[[2L]])) 
            dimnames(ans)[[2L]] <- rep("", dim(ans)[2L])
        else if (!is.logical(abbr.colnames)) 
            stop("invalid 'abbr.colnames'")
    }
    if (legend) {
        legend <- c(rbind(sapply(cutpoints, format), c(sQuote(symbols), 
            "")), if (has.na) paste("\t    ## NA:", sQuote(na)))
        attr(ans, "legend") <- paste(legend[-2 * (ns + 1)], collapse = " ")
    }
    noquote(ans)
}

# Examples
ii <- setNames(0:8, 0:8)
symnum(ii, cutpoints =  2*(0:4), symbols = c(".", "-", "+", "$"))
symnum(ii, cutpoints =  2*(0:4), symbols = c(".", "-", "+", "$"), show.max = TRUE)

symnum(1:12 %% 3 == 0)  # --> "|" = TRUE, "." = FALSE  for logical

## Pascal's Triangle modulo 2 -- odd and even numbers:
N <- 38
pascal <- t(sapply(0:N, function(n) round(choose(n, 0:N - (N-n)%/%2))))
rownames(pascal) <- rep("", 1+N) # <-- to improve "graphic"
symnum(pascal %% 2, symbols = c(" ", "A"), numeric.x = FALSE)

##-- Symbolic correlation matrices:
symnum(cor(attitude), diag.lower.tri = FALSE)
symnum(cor(attitude), abbr.colnames = NULL)
symnum(cor(attitude), abbr.colnames = FALSE)
symnum(cor(attitude), abbr.colnames = 2)

symnum(cor(rbind(1, rnorm(25), rnorm(25)^2)))
symnum(cor(matrix(rexp(30, 1), 5, 18))) # <<-- PATTERN ! --
symnum(cm1 <- cor(matrix(rnorm(90) ,  5, 18))) # < White Noise SMALL n
symnum(cm1, diag.lower.tri = FALSE)
symnum(cm2 <- cor(matrix(rnorm(900), 50, 18))) # < White Noise "BIG" n
symnum(cm2, lower.triangular = FALSE)

## NA's:
Cm <- cor(matrix(rnorm(60),  10, 6)); Cm[c(3,6), 2] <- NA
symnum(Cm, show.max = NULL)

## Graphical P-values (aka "significance stars"):
pval <- rev(sort(c(outer(1:6, 10^-(1:3)))))
symp <- symnum(pval, corr = FALSE,
               cutpoints = c(0,  .001,.01,.05, .1, 1),
               symbols = c("***","**","*","."," "))
noquote(cbind(P.val = format(pval), Signif = symp))

