#? stdlib
`table` <- function (..., exclude = if (useNA == "no") c(NA, NaN), useNA = c("no", 
    "ifany", "always"), dnn = list.names(...), deparse.level = 1) 
{
    list.names <- function(...) {
        l <- as.list(substitute(list(...)))[-1L]
        if (length(l) == 1L && is.list(..1) && !is.null(nm <- names(..1))) 
            return(nm)
        nm <- names(l)
        fixup <- if (is.null(nm)) 
            seq_along(l)
        else nm == ""
        dep <- vapply(l[fixup], function(x) switch(deparse.level + 
            1, "", if (is.symbol(x)) as.character(x) else "", 
            deparse(x, nlines = 1)[1L]), "")
        if (is.null(nm)) 
            dep
        else {
            nm[fixup] <- dep
            nm
        }
    }
    miss.use <- missing(useNA)
    miss.exc <- missing(exclude)
    useNA <- if (miss.use && !miss.exc && !match(NA, exclude, 
        nomatch = 0L)) 
        "ifany"
    else match.arg(useNA)
    doNA <- useNA != "no"
    if (!miss.use && !miss.exc && doNA && match(NA, exclude, 
        nomatch = 0L)) 
        warning("'exclude' containing NA and 'useNA' != \"no\"' are a bit contradicting")
    args <- list(...)
    if (length(args) == 1L && is.list(args[[1L]])) {
        args <- args[[1L]]
        if (length(dnn) != length(args)) 
            dnn <- paste(dnn[1L], seq_along(args), sep = ".")
    }
    if (!length(args)) 
        stop("nothing to tabulate")
    bin <- 0L
    lens <- NULL
    dims <- integer()
    pd <- 1L
    dn <- NULL
    for (a in args) {
        if (is.null(lens)) 
            lens <- length(a)
        else if (length(a) != lens) 
            stop("all arguments must have the same length")
        fact.a <- is.factor(a)
        if (doNA) 
            aNA <- anyNA(a)
        if (!fact.a) {
            a0 <- a
            op <- options(warn = 2)
            on.exit(options(op))
            a <- factor(a, exclude = exclude)
            options(op)
        }
        add.na <- doNA
        if (add.na) {
            ifany <- (useNA == "ifany")
            anNAc <- anyNA(a)
            add.na <- if (!ifany || anNAc) {
                ll <- levels(a)
                if (add.ll <- !anyNA(ll)) {
                  ll <- c(ll, NA)
                  TRUE
                }
                else if (!ifany && !anNAc) 
                  FALSE
                else TRUE
            }
            else FALSE
        }
        if (add.na) 
            a <- factor(a, levels = ll, exclude = NULL)
        else ll <- levels(a)
        a <- as.integer(a)
        if (fact.a && !miss.exc) {
            ll <- ll[keep <- which(match(ll, exclude, nomatch = 0L) == 
                0L)]
            a <- match(a, keep)
        }
        else if (!fact.a && add.na) {
            if (ifany && !aNA && add.ll) {
                ll <- ll[!is.na(ll)]
                is.na(a) <- match(a0, c(exclude, NA), nomatch = 0L) > 
                  0L
            }
            else {
                is.na(a) <- match(a0, exclude, nomatch = 0L) > 
                  0L
            }
        }
        nl <- length(ll)
        dims <- c(dims, nl)
        if (prod(dims) > .Machine$integer.max) 
            stop("attempt to make a table with >= 2^31 elements")
        dn <- c(dn, list(ll))
        bin <- bin + pd * (a - 1L)
        pd <- pd * nl
    }
    names(dn) <- dnn
    bin <- bin[!is.na(bin)]
    if (length(bin)) 
        bin <- bin + 1L
    y <- array(tabulate(bin, pd), dims, dimnames = dn)
    class(y) <- "table"
    y
}

# Examples
require(stats) # for rpois and xtabs
## Simple frequency distribution
table(rpois(100, 5))
## Check the design:
with(warpbreaks, table(wool, tension))
table(state.division, state.region)

# simple two-way contingency table
with(airquality, table(cut(Temp, quantile(Temp)), Month))

a <- letters[1:3]
table(a, sample(a))                    # dnn is c("a", "")
table(a, sample(a), dnn = NULL)        # dimnames() have no names
table(a, sample(a), deparse.level = 0) # dnn is c("", "")
table(a, sample(a), deparse.level = 2) # dnn is c("a", "sample(a)")

## xtabs() <-> as.data.frame.table() :
UCBAdmissions ## already a contingency table
DF <- as.data.frame(UCBAdmissions)
class(tab <- xtabs(Freq ~ ., DF)) # xtabs & table
## tab *is* "the same" as the original table:
all(tab == UCBAdmissions)
all.equal(dimnames(tab), dimnames(UCBAdmissions))

a <- rep(c(NA, 1/0:3), 10)
table(a)                 # does not report NA's
table(a, exclude = NULL) # reports NA's
b <- factor(rep(c("A","B","C"), 10))
table(b)
table(b, exclude = "B")
d <- factor(rep(c("A","B","C"), 10), levels = c("A","B","C","D","E"))
table(d, exclude = "B")
print(table(b, d), zero.print = ".")

## NA counting:
is.na(d) <- 3:4
d. <- addNA(d)
d.[1:7]
table(d.) # ", exclude = NULL" is not needed
## i.e., if you want to count the NA's of 'd', use
table(d, useNA = "ifany")

## "pathological" case:
d.patho <- addNA(c(1,NA,1:2,1:3))[-7]; is.na(d.patho) <- 3:4
d.patho
## just 3 consecutive NA's ? --- well, have *two* kinds of NAs here :
as.integer(d.patho) # 1 4 NA NA 1 2
##
## In R >= 3.4.0, table() allows to differentiate:
table(d.patho)                   # counts the "unusual" NA
table(d.patho, useNA = "ifany")  # counts all three
table(d.patho, exclude = NULL)   #  (ditto)
table(d.patho, exclude = NA)     # counts none

## Two-way tables with NA counts. The 3rd variant is absurd, but shows
## something that cannot be done using exclude or useNA.
with(airquality,
   table(OzHi = Ozone > 80, Month, useNA = "ifany"))
with(airquality,
   table(OzHi = Ozone > 80, Month, useNA = "always"))
with(airquality,
   table(OzHi = Ozone > 80, addNA(Month)))

