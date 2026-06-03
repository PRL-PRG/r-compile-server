#? stdlib
`format.ftable` <- function (x, quote = TRUE, digits = getOption("digits"), method = c("non.compact", 
    "row.compact", "col.compact", "compact"), lsep = " | ", justify = c("left", 
    "right"), ...) 
{
    if (!inherits(x, "ftable")) 
        stop("'x' must be an \"ftable\" object")
    charQuote <- function(s) if (quote && length(s)) 
        paste0("\"", s, "\"")
    else s
    makeLabels <- function(lst) {
        lens <- lengths(lst)
        cplensU <- c(1, cumprod(lens))
        cplensD <- rev(c(1, cumprod(rev(lens))))
        y <- NULL
        for (i in rev(seq_along(lst))) {
            ind <- 1 + seq.int(from = 0, to = lens[i] - 1) * 
                cplensD[i + 1L]
            tmp <- character(length = cplensD[i])
            tmp[ind] <- charQuote(lst[[i]])
            y <- cbind(rep(tmp, times = cplensU[i]), y)
        }
        y
    }
    makeNames <- function(x) names(x) %||% rep_len("", length(x))
    l.xrv <- length(xrv <- attr(x, "row.vars"))
    l.xcv <- length(xcv <- attr(x, "col.vars"))
    method <- match.arg(method)
    if (l.xrv == 0) {
        if (method == "col.compact") 
            method <- "non.compact"
        else if (method == "compact") 
            method <- "row.compact"
    }
    if (l.xcv == 0) {
        if (method == "row.compact") 
            method <- "non.compact"
        else if (method == "compact") 
            method <- "col.compact"
    }
    LABS <- switch(method, non.compact = {
        cbind(rbind(matrix("", nrow = length(xcv), ncol = length(xrv)), 
            charQuote(makeNames(xrv)), makeLabels(xrv)), c(charQuote(makeNames(xcv)), 
            rep("", times = nrow(x) + 1)))
    }, row.compact = {
        cbind(rbind(matrix("", nrow = length(xcv) - 1, ncol = length(xrv)), 
            charQuote(makeNames(xrv)), makeLabels(xrv)), c(charQuote(makeNames(xcv)), 
            rep("", times = nrow(x))))
    }, col.compact = {
        cbind(rbind(cbind(matrix("", nrow = length(xcv), ncol = length(xrv) - 
            1), charQuote(makeNames(xcv))), charQuote(makeNames(xrv)), 
            makeLabels(xrv)))
    }, compact = {
        xrv.nms <- makeNames(xrv)
        xcv.nms <- makeNames(xcv)
        mat <- cbind(rbind(cbind(matrix("", nrow = l.xcv - 1, 
            ncol = l.xrv - 1), charQuote(makeNames(xcv[-l.xcv]))), 
            charQuote(xrv.nms), makeLabels(xrv)))
        mat[l.xcv, l.xrv] <- paste(tail(xrv.nms, 1), tail(xcv.nms, 
            1), sep = lsep)
        mat
    }, stop("wrong method"))
    DATA <- rbind(if (length(xcv)) 
        t(makeLabels(xcv)), if (method %in% c("non.compact", 
        "col.compact")) 
        rep("", times = ncol(x)), format(unclass(x), digits = digits, 
        ...))
    cbind(apply(LABS, 2L, format, justify = justify[[1]]), apply(DATA, 
        2L, format, justify = justify[[min(2, length(justify))]]))
}
