#? stdlib
`boxplot.default` <- function (x, ..., range = 1.5, width = NULL, varwidth = FALSE, 
    notch = FALSE, outline = TRUE, names, plot = TRUE, border = par("fg"), 
    col = "lightgray", log = "", pars = list(boxwex = 0.8, staplewex = 0.5, 
        outwex = 0.5), ann = !add, horizontal = FALSE, add = FALSE, 
    at = NULL) 
{
    args <- list(x, ...)
    namedargs <- if (!is.null(attributes(args)$names)) 
        attributes(args)$names != ""
    else rep_len(FALSE, length(args))
    groups <- if (is.list(x)) 
        x
    else args[!namedargs]
    if (0L == (n <- length(groups))) 
        stop("invalid first argument")
    if (length(class(groups))) 
        groups <- unclass(groups)
    if (!missing(names)) 
        attr(groups, "names") <- names
    else {
        if (is.null(attr(groups, "names"))) 
            attr(groups, "names") <- 1L:n
        names <- attr(groups, "names")
    }
    cls <- lapply(groups, class)
    cl <- NULL
    if (all(vapply(groups, function(e) {
        is.numeric(unclass(e)) && identical(names(attributes(e)), 
            "class")
    }, NA)) && (length(unique(cls)) == 1L)) 
        cl <- cls[[1L]]
    for (i in 1L:n) groups[i] <- list(boxplot.stats(unclass(groups[[i]]), 
        range))
    stats <- matrix(0, nrow = 5L, ncol = n)
    conf <- matrix(0, nrow = 2L, ncol = n)
    ng <- out <- group <- numeric(0L)
    ct <- 1
    for (i in groups) {
        stats[, ct] <- i$stats
        conf[, ct] <- i$conf
        ng <- c(ng, i$n)
        if ((lo <- length(i$out))) {
            out <- c(out, i$out)
            group <- c(group, rep.int(ct, lo))
        }
        ct <- ct + 1
    }
    if (length(cl) == 1L && cl != "numeric") 
        oldClass(stats) <- oldClass(conf) <- oldClass(out) <- cl
    z <- list(stats = stats, n = ng, conf = conf, out = out, 
        group = group, names = names)
    if (plot) {
        if (is.null(pars$boxfill) && is.null(args$boxfill)) 
            pars$boxfill <- col
        do.call(bxp, c(list(z, notch = notch, width = width, 
            varwidth = varwidth, log = log, border = border, 
            pars = pars, outline = outline, horizontal = horizontal, 
            add = add, ann = ann, at = at), args[namedargs]), 
            quote = TRUE)
        invisible(z)
    }
    else z
}
