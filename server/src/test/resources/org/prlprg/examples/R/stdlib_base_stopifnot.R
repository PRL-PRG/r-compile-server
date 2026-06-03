#? stdlib
`stopifnot` <- function (..., exprs, exprObject, local = TRUE) 
{
    n <- ...length()
    if ((has.e <- !missing(exprs)) || !missing(exprObject)) {
        if (n || (has.e && !missing(exprObject))) 
            stop("Only one of 'exprs', 'exprObject' or expressions, not more")
        envir <- if (isTRUE(local)) 
            parent.frame()
        else if (isFALSE(local)) 
            .GlobalEnv
        else if (is.environment(local)) 
            local
        else stop("'local' must be TRUE, FALSE or an environment")
        E1 <- if (has.e && is.call(exprs <- substitute(exprs))) 
            exprs[[1]]
        cl <- if (is.symbol(E1) && E1 == quote(`{`)) {
            exprs[[1]] <- quote(stopifnot)
            exprs
        }
        else as.call(c(quote(stopifnot), if (!has.e) exprObject else as.expression(exprs)))
        names(cl) <- NULL
        return(eval(cl, envir = envir))
    }
    Dparse <- function(call, cutoff = 60L) {
        ch <- deparse(call, width.cutoff = cutoff)
        if (length(ch) > 1L) 
            paste(ch[1L], "....")
        else ch
    }
    head <- function(x, n = 6L) x[seq_len(if (n < 0L) max(length(x) + 
        n, 0L) else min(n, length(x)))]
    abbrev <- function(ae, n = 3L) paste(c(head(ae, n), if (length(ae) > 
        n) "...."), collapse = "\n  ")
    for (i in seq_len(n)) {
        r <- ...elt(i)
        if (!(is.logical(r) && !anyNA(r) && all(r))) {
            dots <- match.call()[-1L]
            if (is.null(msg <- names(dots)) || !nzchar(msg <- msg[i])) {
                cl.i <- dots[[i]]
                msg <- if (is.call(cl.i) && identical(1L, pmatch(quote(all.equal), 
                  cl.i[[1]])) && (is.null(ni <- names(cl.i)) || 
                  length(cl.i) == 3L || length(cl.i <- cl.i[!nzchar(ni)]) == 
                  3L)) 
                  sprintf(gettext("%s and %s are not equal:\n  %s"), 
                    Dparse(cl.i[[2]]), Dparse(cl.i[[3]]), abbrev(r))
                else sprintf(ngettext(length(r), "%s is not TRUE", 
                  "%s are not all TRUE"), Dparse(cl.i))
            }
            stop(simpleError(msg, call = if (p <- sys.parent(1L)) 
                sys.call(p)))
        }
    }
    invisible()
}

# Examples
## NB: Some of these examples are expected to produce an error. To
##     prevent them from terminating a run with example() they are
##     piped into a call to try().

stopifnot(1 == 1, all.equal(pi, 3.14159265), 1 < 2) # all TRUE

m <- matrix(c(1,3,3,1), 2, 2)
stopifnot(m == t(m), diag(m) == rep(1, 2)) # all(.) |=>  TRUE

stopifnot(length(10)) |> try() # gives an error: '1' is *not* TRUE
## even when   if(1) "ok"   works

stopifnot(all.equal(pi, 3.141593),  2 < 2, (1:10 < 12), "a" < "b") |> try()
## More convenient for interactive "line by line" evaluation:
stopifnot(exprs = {
  all.equal(pi, 3.1415927)
  2 < 2
  1:10 < 12
  "a" < "b"
}) |> try()

eObj <- expression(2 < 3, 3 <= 3:6, 1:10 < 2)
stopifnot(exprObject = eObj) |> try()
stopifnot(exprObject = quote(3 == 3))
stopifnot(exprObject = TRUE)


# long all.equal() error messages are abbreviated:
stopifnot(all.equal(rep(list(pi),4), list(3.1, 3.14, 3.141, 3.1415))) |> try()

# The default error message can be overridden to be more informative:
m[1,2] <- 12
stopifnot("m must be symmetric"= m == t(m)) |> try()
#=> Error: m must be symmetric

##' warnifnot(): a "only-warning" version of stopifnot()
##'   {Yes, learn how to use do.call(substitute, ...) in a powerful manner !!}
warnifnot <- stopifnot ; N <- length(bdy <- body(warnifnot))
bdy        <- do.call(substitute, list(bdy,   list(stopifnot = quote(warnifnot))))
bdy[[N-1]] <- do.call(substitute, list(bdy[[N-1]], list(stop = quote(warning))))
body(warnifnot) <- bdy
warnifnot(1 == 1, 1 < 2, 2 < 2) # => warns " 2 < 2 is not TRUE  "
warnifnot(exprs = {
    1 == 1
    3 < 3  # => warns "3 < 3 is not TRUE"
})

