#? stdlib
`prettyNum` <- function (x, big.mark = "", big.interval = 3L, small.mark = "", 
    small.interval = 5L, decimal.mark = getOption("OutDec"), 
    input.d.mark = decimal.mark, preserve.width = c("common", 
        "individual", "none"), zero.print = NULL, replace.zero = FALSE, 
    drop0trailing = FALSE, is.cmplx = NA, ...) 
{
    if (notChar <- !is.character(x)) {
        is.cmplx <- is.complex(x)
        x <- vapply(x, format, "", big.mark = big.mark, big.interval = big.interval, 
            small.mark = small.mark, small.interval = small.interval, 
            decimal.mark = decimal.mark, zero.print = zero.print, 
            drop0trailing = drop0trailing, ...)
    }
    nMark <- big.mark == "" && small.mark == "" && (notChar || 
        decimal.mark == input.d.mark)
    if (identical(big.mark, decimal.mark)) 
        warning(gettextf("'big.mark' and 'decimal.mark' are both '%s', which could be confusing", 
            big.mark), domain = NA)
    nZero <- is.null(zero.print) && !drop0trailing
    if (nMark && nZero) 
        return(x)
    if (nMark && !drop0trailing) 
        return(.format.zeros(x, zero.print, replace = replace.zero))
    if (is.na(is.cmplx)) {
        ina <- is.na(x) | x == "NA"
        is.cmplx <- if (all(ina)) 
            FALSE
        else any(grepl("[0-9].*[-+][0-9].*i$", x))
    }
    preserve.width <- match.arg(preserve.width)
    if (is.cmplx) {
        x <- .format.zeros(x, zero.print, replace = replace.zero)
        z.sp <- strsplit(sub("([0-9] *)([-+])( *[0-9])", "\\1::\\2::\\3", 
            x), "::", fixed = TRUE)
        i3 <- lengths(z.sp) == 3L
        if (any(i3)) {
            z.sp <- z.sp[i3]
            z.im <- vapply(z.sp, `[[`, "", 3L)
            has.i <- grep("i$", z.im)
            z.im[has.i] <- sub("i$", "", z.im[has.i])
            r <- lapply(list(vapply(z.sp, `[[`, "", 1L), z.im), 
                function(.) prettyNum(., big.mark = big.mark, 
                  big.interval = big.interval, small.mark = small.mark, 
                  small.interval = small.interval, decimal.mark = decimal.mark, 
                  input.d.mark = input.d.mark, preserve.width = preserve.width, 
                  zero.print = zero.print, replace.zero = replace.zero, 
                  drop0trailing = drop0trailing, is.cmplx = FALSE, 
                  ...))
            r[[2]][has.i] <- paste0(r[[2]][has.i], "i")
            x[i3] <- paste0(r[[1]], vapply(z.sp, `[[`, "", 2L), 
                r[[2]])
        }
        return(x)
    }
    if (nchar(input.d.mark) == 0) 
        stop("'input.d.mark' has no characters")
    x.sp <- strsplit(x, input.d.mark, fixed = TRUE)
    if (any(lengths(x.sp) > 2)) {
        x.sp <- lapply(x.sp, function(xs) {
            lx <- length(xs)
            if (lx <= 2) 
                xs
            else c(paste(xs[-lx], collapse = input.d.mark), xs[lx])
        })
    }
    B. <- vapply(x.sp, `[`, "", 1L)
    A. <- vapply(x.sp, `[`, "", 2L)
    if (any(iN <- is.na(A.))) 
        A.[iN] <- ""
    if (nzchar(big.mark) && length(i.big <- grep(paste0("[0-9]{", 
        big.interval + 1L, ",}"), B.))) {
        revStr <- function(cc) vapply(lapply(strsplit(cc, NULL), 
            rev), paste, "", collapse = "")
        B.[i.big] <- revStr(gsub(paste0("([0-9]{", big.interval, 
            "})\\B"), paste0("\\1", revStr(big.mark)), revStr(B.[i.big])))
    }
    if (nzchar(small.mark) && length(i.sml <- grep(paste0("[0-9]{", 
        small.interval + 1L, ",}"), A.))) {
        A.[i.sml] <- gsub(paste0("([0-9]{", small.interval, "}\\B)"), 
            paste0("\\1", small.mark), A.[i.sml])
    }
    if (drop0trailing) {
        a <- A.[!iN]
        if (length(hasE <- grep("e", a, fixed = TRUE))) {
            a[hasE] <- sub("e[+-]0+$", "", a[hasE])
            a[-hasE] <- sub("0+$", "", a[-hasE])
        }
        else a <- sub("0+$", "", a)
        A.[!iN] <- a
        iN <- !nzchar(A.)
    }
    A. <- .format.zeros(paste0(B., c(decimal.mark, "")[iN + 1L], 
        A.), zero.print, replace = replace.zero)
    if (preserve.width != "none") {
        nnc <- nchar(A., "c")
        d.len <- nnc - nchar(x, "c")
        if (any(ii <- d.len > 0L)) {
            switch(preserve.width, individual = {
                A.[ii] <- vapply(which(ii), function(i) sub(sprintf("^ {1,%d}", 
                  d.len[i]), "", A.[i]), "")
            }, common = {
                A. <- format(A., justify = "right")
            })
        }
    }
    attributes(A.) <- attributes(x)
    class(A.) <- NULL
    A.
}
