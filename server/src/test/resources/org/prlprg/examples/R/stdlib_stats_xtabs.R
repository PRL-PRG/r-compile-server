#? stdlib
`xtabs` <- function (formula = ~., data = parent.frame(), subset, sparse = FALSE, 
    na.action, na.rm = FALSE, addNA = FALSE, exclude = if (!addNA) c(NA, 
        NaN), drop.unused.levels = FALSE) 
{
    if (missing(formula) && missing(data)) 
        stop("must supply 'formula' or 'data'")
    if (!missing(formula)) {
        formula <- as.formula(formula)
        if (!inherits(formula, "formula")) 
            stop("'formula' missing or incorrect")
    }
    if (any(attr(terms(formula, data = data), "order") > 1)) 
        stop("interactions are not allowed")
    m <- match.call(expand.dots = FALSE)
    if (is.matrix(eval(m$data, parent.frame()))) 
        m$data <- as.data.frame(data)
    m$... <- m$exclude <- m$drop.unused.levels <- m$sparse <- m$na.rm <- m$addNA <- NULL
    if (missing(na.action)) 
        m$na.action <- quote(na.pass)
    m[[1L]] <- quote(stats::model.frame)
    mf <- eval(m, parent.frame())
    if (length(formula) == 2L) {
        by <- mf
        y <- NULL
    }
    else {
        i <- attr(attr(mf, "terms"), "response")
        by <- mf[-i]
        y <- mf[[i]]
    }
    has.exclude <- !missing(exclude)
    by <- lapply(by, function(u) {
        if (!is.factor(u)) 
            u <- factor(u, exclude = exclude)
        else if (has.exclude) 
            u <- factor(as.character(u), levels = setdiff(levels(u), 
                exclude), exclude = NULL)
        if (addNA) 
            u <- addNA(u, ifany = TRUE)
        u[, drop = drop.unused.levels]
    })
    if (!sparse) {
        x <- if (is.null(y)) 
            table(by, dnn = names(by))
        else if (NCOL(y) == 1L) 
            tapply(y, by, sum, na.rm = na.rm, default = 0L)
        else {
            z <- lapply(as.data.frame(y), tapply, by, sum, na.rm = na.rm, 
                default = 0L)
            array(unlist(z), dim = c(dim(z[[1L]]), length(z)), 
                dimnames = c(dimnames(z[[1L]]), list(names(z))))
        }
        class(x) <- c("xtabs", "table")
        attr(x, "call") <- match.call()
        x
    }
    else {
        if (length(by) != 2L) 
            stop(gettextf("%s applies only to two-way tables", 
                "xtabs(*, sparse=TRUE)"), domain = NA)
        if (is.null(tryCatch(loadNamespace("Matrix"), error = function(e) NULL))) 
            stop(gettextf("%s needs package 'Matrix' correctly installed", 
                "xtabs(*, sparse=TRUE)"), domain = NA)
        if (length(i.ex <- unique(unlist(lapply(by, function(f) which(is.na(f))))))) {
            by <- lapply(by, `[`, -i.ex)
            if (!is.null(y)) 
                y <- y[-i.ex]
        }
        if (na.rm && !is.null(y) && any(isN <- is.na(y))) {
            ok <- !isN
            by <- lapply(by, `[`, ok)
            y <- y[ok]
        }
        rows <- by[[1L]]
        cols <- by[[2L]]
        dnms <- lapply(by, levels)
        x <- if (is.null(y)) 
            rep.int(1, length(rows))
        else as.double(y)
        methods::as(methods::new("dgTMatrix", x = x, Dimnames = dnms, 
            i = as.integer(rows) - 1L, j = as.integer(cols) - 
                1L, Dim = lengths(dnms, use.names = FALSE)), 
            "CsparseMatrix")
    }
}
