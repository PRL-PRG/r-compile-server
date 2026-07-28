#? stdlib
`replications` <- function (formula, data = NULL, na.action) 
{
    if (missing(data) && inherits(formula, "data.frame")) {
        data <- formula
        formula <- ~.
    }
    if (!inherits(formula, "terms")) {
        formula <- as.formula(formula)
        if (length(formula) < 3L) {
            f <- y ~ x
            f[[3L]] <- formula[[2L]]
            formula <- f
        }
        formula <- terms(formula, data = data)
    }
    if (missing(na.action)) 
        if (!is.null(tj <- attr(data, "na.action")) && is.function(tj)) 
            na.action <- tj
        else {
            naa <- getOption("na.action")
            if (!is.null(naa)) 
                na.action <- match.fun(naa)
            else na.action <- na.fail
        }
    f <- attr(formula, "factors")
    o <- attr(formula, "order")
    labels <- attr(formula, "term.labels")
    vars <- as.character(attr(formula, "variables"))[-1L]
    if (is.null(data)) {
        v <- c(quote(data.frame), attr(formula, "variables"))
        data <- eval(as.call(v), parent.frame())
    }
    if (!is.function(na.action)) 
        stop("na.action must be a function")
    data <- na.action(data)
    class(data) <- NULL
    n <- length(o)
    z <- setNames(vector("list", n), labels)
    dummy <- numeric(.row_names_info(data, 2L))
    data <- lapply(data, function(x) if (is.character(x)) 
        as.factor(x)
    else x)
    notfactor <- !sapply(data, function(x) inherits(x, "factor"))
    balance <- TRUE
    for (i in seq_len(n)) {
        l <- labels[i]
        if (o[i] < 1 || startsWith(l, "Error")) {
            z[[l]] <- NULL
            next
        }
        select <- vars[f[, i] > 0]
        if (any(nn <- notfactor[select])) {
            warning(gettextf("non-factors ignored: %s", paste(names(nn), 
                collapse = ", ")), domain = NA)
            next
        }
        if (length(select)) 
            tble <- tapply(dummy, unclass(data[select]), length)
        nrep <- unique(as.vector(tble))
        if (length(nrep) > 1L) {
            balance <- FALSE
            tble[is.na(tble)] <- 0
            z[[l]] <- tble
        }
        else z[[l]] <- as.vector(nrep)
    }
    if (balance) 
        unlist(z)
    else z
}

# Examples
## From Venables and Ripley (2002) p.165.
N <- c(0,1,0,1,1,1,0,0,0,1,1,0,1,1,0,0,1,0,1,0,1,1,0,0)
P <- c(1,1,0,0,0,1,0,1,1,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0)
K <- c(1,0,0,1,0,1,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,1,0)
yield <- c(49.5,62.8,46.8,57.0,59.8,58.5,55.5,56.0,62.8,55.8,69.5,
55.0, 62.0,48.8,45.5,44.2,52.0,51.5,49.8,48.8,57.2,59.0,53.2,56.0)

npk <- data.frame(block = gl(6,4), N = factor(N), P = factor(P),
                  K = factor(K), yield = yield)
replications(~ . - yield, npk)

