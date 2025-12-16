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

# Examples
## 'esoph' has the frequencies of cases and controls for all levels of
## the variables 'agegp', 'alcgp', and 'tobgp'.
xtabs(cbind(ncases, ncontrols) ~ ., data = esoph)
## Output is not really helpful ... flat tables are better:
ftable(xtabs(cbind(ncases, ncontrols) ~ ., data = esoph))
## In particular if we have fewer factors ...
ftable(xtabs(cbind(ncases, ncontrols) ~ agegp, data = esoph))

## This is already a contingency table in array form.
DF <- as.data.frame(UCBAdmissions)
## Now 'DF' is a data frame with a grid of the factors and the counts
## in variable 'Freq'.
DF
## Nice for taking margins ...
xtabs(Freq ~ Gender + Admit, DF)
## And for testing independence ...
summary(xtabs(Freq ~ ., DF))

## with NA's
DN <- DF; DN[cbind(6:9, c(1:2,4,1))] <- NA
DN # 'Freq' is missing only for (Rejected, Female, B)
(xtNA <- xtabs(Freq ~ Gender + Admit, DN))     # NA prints 'invisibly'
print(xtNA, na.print = "NA")                   # show NA's better
xtabs(Freq ~ Gender + Admit, DN, na.rm = TRUE) # ignore missing Freq
## Use addNA = TRUE to tabulate missing factor levels:
xtabs(Freq ~ Gender + Admit, DN, addNA = TRUE)
xtabs(Freq ~ Gender + Admit, DN, addNA = TRUE, na.rm = TRUE)
## na.action = na.omit removes all rows with NAs right from the start:
xtabs(Freq ~ Gender + Admit, DN, na.action = na.omit)

## Create a nice display for the warp break data.
warpbreaks$replicate <- rep_len(1:9, 54)
ftable(xtabs(breaks ~ wool + tension + replicate, data = warpbreaks))

### ---- Sparse Examples ----

\donttest{if(require("Matrix")) withAutoprint({
 ## similar to "nlme"s  'ergoStool' :
 d.ergo <- data.frame(Type = paste0("T", rep(1:4, 9*4)),
                      Subj = gl(9, 4, 36*4))
 xtabs(~ Type + Subj, data = d.ergo) # 4 replicates each
 set.seed(15) # a subset of cases:
 xtabs(~ Type + Subj, data = d.ergo[sample(36, 10), ], sparse = TRUE)

 ## Hypothetical two-level setup:
 inner <- factor(sample(letters[1:25], 100, replace = TRUE))
 inout <- factor(sample(LETTERS[1:5], 25, replace = TRUE))
 fr <- data.frame(inner = inner, outer = inout[as.integer(inner)])
 xtabs(~ inner + outer, fr, sparse = TRUE)
})}

