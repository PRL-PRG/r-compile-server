#? stdlib
`regmatches` <- function (x, m, invert = FALSE) 
{
    if (length(x) != length(m)) 
        stop(gettextf("%s and %s must have the same length", 
            sQuote("x"), sQuote("m")), domain = NA)
    ili <- is.list(m)
    itype <- "chars"
    useBytes <- if (ili) 
        any(unlist(lapply(m, attr, "index.type")) == "bytes")
    else any(attr(m, "index.type") == "bytes")
    if (useBytes) {
        itype <- Encoding(x) <- "bytes"
    }
    if (!ili && isFALSE(invert)) {
        so <- m[ind <- (!is.na(m) & (m > -1L))]
        eo <- so + attr(m, "match.length")[ind] - 1L
        return(substring(x[ind], so, eo))
    }
    y <- if (is.na(invert)) {
        Map(function(u, so, ml) {
            if ((n <- length(so)) == 1L) {
                if (is.na(so)) 
                  return(NA_character_)
                else if (so == -1L) 
                  return(u)
            }
            eo <- so + ml - 1L
            if (n > 1L) {
                if (any(eo[-n] >= so[-1L])) 
                  stop(gettextf("need non-overlapping matches for %s", 
                    sQuote("invert = NA")), domain = NA)
            }
            beg <- c(1L, c(rbind(so, eo + 1L)))
            end <- c(c(rbind(so - 1L, eo)), nchar(u, itype))
            substring(u, beg, end)
        }, x, m, if (ili) 
            lapply(m, attr, "match.length")
        else attr(m, "match.length"), USE.NAMES = FALSE)
    }
    else if (invert) {
        Map(function(u, so, ml) {
            if ((n <- length(so)) == 1L) {
                if (is.na(so)) 
                  return(NA_character_)
                else if (so == -1L) 
                  return(u)
            }
            beg <- if (n > 1L) {
                eo <- so + ml - 1L
                if (any(eo[-n] >= so[-1L])) 
                  stop(gettextf("need non-overlapping matches for %s", 
                    sQuote("invert = TRUE")), domain = NA)
                c(1L, eo + 1L)
            }
            else {
                c(1L, so + ml)
            }
            end <- c(so - 1L, nchar(u, itype))
            substring(u, beg, end)
        }, x, m, if (ili) 
            lapply(m, attr, "match.length")
        else attr(m, "match.length"), USE.NAMES = FALSE)
    }
    else {
        Map(function(u, so, ml) {
            if (length(so) == 1L) {
                if (is.na(so) || (so == -1L)) 
                  return(character())
            }
            tmp <- substring(u, so, so + ml - 1L)
            dim(tmp) <- dim(so)
            dimnames(tmp) <- dimnames(so)
            names(tmp) <- names(so)
            tmp
        }, x, m, lapply(m, attr, "match.length"), USE.NAMES = FALSE)
    }
    names(y) <- names(x)
    y
}

# Examples
x <- c("A and B", "A, B and C", "A, B, C and D", "foobar")
pattern <- "[[:space:]]*(,|and)[[:space:]]"
## Match data from regexpr()
m <- regexpr(pattern, x)
regmatches(x, m)
regmatches(x, m, invert = TRUE)
## Match data from gregexpr()
m <- gregexpr(pattern, x)
regmatches(x, m)
regmatches(x, m, invert = TRUE)

## Consider
x <- "John (fishing, hunting), Paul (hiking, biking)"
## Suppose we want to split at the comma (plus spaces) between the
## persons, but not at the commas in the parenthesized hobby lists.
## One idea is to "blank out" the parenthesized parts to match the
## parts to be used for splitting, and extract the persons as the
## non-matched parts.
## First, match the parenthesized hobby lists.
m <- gregexpr("\\([^)]*\\)", x)
## Create blank strings with given numbers of characters.
blanks <- function(n) strrep(" ", n)
## Create a copy of x with the parenthesized parts blanked out.
s <- x
regmatches(s, m) <- Map(blanks, lapply(regmatches(s, m), nchar))
s
## Compute the positions of the split matches (note that we cannot call
## strsplit() on x with match data from s).
m <- gregexpr(", *", s)
## And finally extract the non-matched parts.
regmatches(x, m, invert = TRUE)

## regexec() and gregexec() return overlapping ranges because the
## first match is the full match.  This conflicts with regmatches()<-
## and regmatches(..., invert=TRUE).  We can work-around by dropping
## the first match.
drop_first <- function(x) {
    if(!anyNA(x) && all(x > 0)) {
        ml <- attr(x, 'match.length')
        if(is.matrix(x)) x <- x[-1,] else x <- x[-1]
        attr(x, 'match.length') <- if(is.matrix(ml)) ml[-1,] else ml[-1]
    }
    x
}
m <- gregexec("(\\w+) \\(((?:\\w+(?:, )?)+)\\)", x)
regmatches(x, m)
try(regmatches(x, m, invert=TRUE))
regmatches(x, lapply(m, drop_first))
## invert=TRUE loses matrix structure because we are retrieving what
## is in between every sub-match
regmatches(x, lapply(m, drop_first), invert=TRUE)
y <- z <- x
## Notice **list**(...) on the RHS
regmatches(y, lapply(m, drop_first)) <- list(c("<NAME>", "<HOBBY-LIST>"))
y
regmatches(z, lapply(m, drop_first), invert=TRUE) <-
    list(sprintf("<%d>", 1:5))
z

## With `perl = TRUE` and `invert = FALSE` capture group names
## are preserved.  Collect functions and arguments in calls:
NEWS <- head(readLines(file.path(R.home(), 'doc', 'NEWS.2')), 100)
m <- gregexec("(?<fun>\\w+)\\((?<args>[^)]*)\\)", NEWS, perl = TRUE)
y <- regmatches(NEWS, m)
y[[16]]
## Make tabular, adding original line numbers
mdat <- as.data.frame(t(do.call(cbind, y)))
mdat <- cbind(mdat, line=rep(seq_along(y), lengths(y) / ncol(mdat)))
head(mdat)
NEWS[head(mdat[['line']])]

