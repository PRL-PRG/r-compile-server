#? stdlib
`formatC` <- function (x, digits = NULL, width = NULL, format = NULL, flag = "", 
    mode = NULL, big.mark = "", big.interval = 3L, small.mark = "", 
    small.interval = 5L, decimal.mark = getOption("OutDec"), 
    preserve.width = "individual", zero.print = NULL, replace.zero = TRUE, 
    drop0trailing = FALSE) 
{
    if (is.object(x)) {
        if (!(is.atomic(x) || inherits(x, "vector"))) 
            warning("class of 'x' was discarded")
        x <- unclass(x)
    }
    flag <- as.character(flag)
    if (length(flag) != 1) 
        stop(gettextf("'%s' must be a character string", "flag"), 
            domain = NA)
    nf <- strsplit(flag, "")[[1L]]
    if (!all(nf %in% c("0", "+", "-", " ", "#", "'", "I"))) 
        stop("'flag' should contain only characters from [0+- #'I]")
    format.char <- function(x, width, flag) {
        if (is.null(width)) 
            width <- 0L
        else if (width < 0L) {
            flag <- "-"
            width <- -width
        }
        format.default(x, width = width, justify = if (flag == 
            "-") 
            "left"
        else "right")
    }
    if (!(n <- length(x))) 
        return(character())
    if (is.null(mode)) 
        mode <- storage.mode(x)
    else if (any(mode == c("double", "real", "integer"))) {
        if (mode == "real") 
            mode <- "double"
        storage.mode(x) <- mode
    }
    else if (mode != "character") 
        stop("'mode' must be \"double\" (\"real\"), \"integer\" or \"character\"")
    if (mode == "character" || (!is.null(format) && format == 
        "s")) {
        if (mode != "character") {
            warning("coercing argument to \"character\" for format=\"s\"")
            x <- as.character(x)
        }
        return(format.char(x, width = width, flag = flag))
    }
    if (missing(format) || is.null(format)) 
        format <- if (mode == "integer") 
            "d"
        else "g"
    else {
        if (any(format == c("f", "e", "E", "g", "G", "fg"))) {
            if (mode == "integer") 
                mode <- storage.mode(x) <- "double"
        }
        else if (format == "d") {
            if (mode != "integer") 
                mode <- storage.mode(x) <- "integer"
        }
        else stop("'format' must be one of {\"f\",\"e\",\"E\",\"g\",\"G\", \"fg\", \"s\"}")
    }
    some.special <- !all(Ok <- is.finite(x))
    if (some.special) {
        rQ <- as.character(x[!Ok])
        rQ[is.na(rQ)] <- "NA"
        x[!Ok] <- as.vector(0, mode = mode)
    }
    if (is.null(width) && is.null(digits)) 
        width <- 1L
    if (is.null(digits)) 
        digits <- if (mode == "integer") 
            2L
        else 4L
    else if (digits < 0L) 
        digits <- 6L
    else {
        maxDigits <- if (format != "f") 
            50L
        else ceiling(-(.Machine$double.neg.ulp.digits + .Machine$double.min.exp)/log2(10))
        if (digits > maxDigits) {
            warning(gettextf("'digits' reduced to %d", maxDigits), 
                domain = NA)
            digits <- maxDigits
        }
    }
    if (is.null(width)) 
        width <- digits + 1L
    else if (width == 0L) 
        width <- digits
    i.strlen <- pmax(abs(as.integer(width)), if (format == "fg" || 
        format == "f") {
        xEx <- as.integer(floor(log10(abs(x + (x == 0)))))
        as.integer(x < 0 | flag != "") + digits + if (format == 
            "f") {
            2L + pmax(xEx, 0L)
        }
        else {
            1L + pmax(xEx, digits, digits + (-xEx) + 1L) + length(nf)
        }
    }
    else rep.int(digits + 8L, n))
    if (digits > 0 && any(nf == "#")) 
        digits <- -digits
    attr(x, "Csingle") <- NULL
    r <- .Internal(formatC(x, as.character(mode), width, digits, 
        as.character(format), flag, i.strlen))
    if (some.special) 
        r[!Ok] <- format.char(rQ, width = width, flag = flag)
    if (nzchar(big.mark) || nzchar(small.mark) || decimal.mark != 
        "." || !is.null(zero.print) || drop0trailing) 
        r <- prettyNum(r, big.mark = big.mark, big.interval = big.interval, 
            small.mark = small.mark, small.interval = small.interval, 
            decimal.mark = decimal.mark, input.d.mark = ".", 
            preserve.width = preserve.width, zero.print = zero.print, 
            replace.zero = replace.zero, drop0trailing = drop0trailing, 
            is.cmplx = FALSE)
    if (!is.null(x.atr <- attributes(x))) 
        attributes(r) <- x.atr
    r
}

# Examples
xx <- pi * 10^(-5:4)
cbind(format(xx, digits = 4), formatC(xx))
cbind(formatC(xx, width = 9, flag = "-"))
cbind(formatC(xx, digits = 5, width = 8, format = "f", flag = "0"))
cbind(format(xx, digits = 4), formatC(xx, digits = 4, format = "fg"))

f <- (-2:4); f <- f*16^f
# Default ("g") format:
formatC(pi*f)
# Fixed ("f") format, more than one flag ('width' partly "enlarged"):
cbind(formatC(pi*f, digits = 3, width=9, format = "f", flag = "0+"))

formatC(    c("a", "Abc", "no way"), width = -7)  # <=> flag = "-"
formatC(c((-1:1)/0,c(1,100)*pi), width = 8, digits = 1)

## note that some of the results here depend on the implementation
## of long-double arithmetic, which is platform-specific.
xx <- c(1e-12,-3.98765e-10,1.45645e-69,1e-70,pi*1e37,3.44e4)
##       1        2             3        4      5       6
formatC(xx)
formatC(xx, format = "fg")       # special "fixed" format.
formatC(xx[1:4], format = "f", digits = 75) #>> even longer strings

formatC(c(3.24, 2.3e-6), format = "f", digits = 11)
formatC(c(3.24, 2.3e-6), format = "f", digits = 11, drop0trailing = TRUE)

r <- c("76491283764.97430", "29.12345678901", "-7.1234", "-100.1","1123")
## American:
prettyNum(r, big.mark = ",")
## Some Europeans:
prettyNum(r, big.mark = "'", decimal.mark = ",")

(dd <- sapply(1:10, function(i) paste((9:0)[1:i], collapse = "")))
prettyNum(dd, big.mark = "'")

## examples of 'small.mark'
pN <- stats::pnorm(1:7, lower.tail = FALSE)
cbind(format (pN, small.mark = " ", digits = 15))
cbind(formatC(pN, small.mark = " ", digits = 17, format = "f"))

cbind(ff <- format(1.2345 + 10^(0:5), width = 11, big.mark = "'"))
## all with same width (one more than the specified minimum)

## individual formatting to common width:
fc <- formatC(1.234 + 10^(0:8), format = "fg", width = 11, big.mark = "'")
cbind(fc)
## Powers of two, stored exactly, formatted individually:
pow.2 <- formatC(2^-(1:32), digits = 24, width = 1, format = "fg")
## nicely printed (the last line showing 5^32 exactly):
noquote(cbind(pow.2))

## complex numbers:
r <- 10.0000001; rv <- (r/10)^(1:10)
(zv <- (rv + 1i*rv))
op <- options(digits = 7) ## (system default)
(pnv <- prettyNum(zv))
stopifnot(pnv == "1+1i", pnv == format(zv),
          pnv == prettyNum(zv, drop0trailing = TRUE))
## more digits change the picture:
options(digits = 8)
head(fv <- format(zv), 3)
prettyNum(fv)
prettyNum(fv, drop0trailing = TRUE) # a bit nicer
options(op)

## The  '  flag :
doLC <- FALSE # <= R warns, so change to TRUE manually if you want see the effect
if(doLC) {
  oldLC <- Sys.getlocale("LC_NUMERIC")
           Sys.setlocale("LC_NUMERIC", "de_CH.UTF-8")
}
formatC(1.234 + 10^(0:4), format = "fg", width = 11, flag = "'")
## -->  .....  "      1'001" "     10'001"   on supported platforms
if(doLC) ## revert, typically to  "C"  :
  Sys.setlocale("LC_NUMERIC", oldLC)

