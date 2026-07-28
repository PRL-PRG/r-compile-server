#? stdlib
`assertCondition` <- function (expr, ..., .exprString = .deparseTrim(substitute(expr), 
    cutoff = 30L), verbose = FALSE) 
{
    getConds <- function(expr) {
        conds <- list()
        withCallingHandlers(tryCatch(expr, error = function(e) conds <<- c(conds, 
            list(e))), warning = function(w) {
            conds <<- c(conds, list(w))
            tryInvokeRestart("muffleWarning")
        }, condition = function(cond) conds <<- c(conds, list(cond)))
        conds
    }
    conds <- c(...)
    .Wanted <- if (length(conds)) 
        paste(conds, collapse = " or ")
    else "any condition"
    res <- getConds(expr)
    if (length(res)) {
        if (is.null(conds)) {
            if (verbose) 
                message("assertConditon: successfully caught a condition", 
                  domain = NA)
            invisible(res)
        }
        else {
            ii <- vapply(res, function(cond) any(class(cond) %in% 
                conds), NA)
            if (any(ii)) {
                if (verbose) {
                  found <- unique(unlist(lapply(res[ii], function(cond) class(cond)[class(cond) %in% 
                    conds])))
                  message(sprintf("assertCondition: caught %s", 
                    paste(dQuote(found), collapse = ", ")), domain = NA)
                }
                invisible(res)
            }
            else {
                .got <- unique(unlist(lapply(res, function(obj) class(obj)[[1L]])))
                stop(gettextf("Got %s in evaluating %s; wanted %s", 
                  paste(.got, collapse = ", "), .exprString, 
                  .Wanted), domain = NA)
            }
        }
    }
    else stop(gettextf("Failed to get %s in evaluating %s", .Wanted, 
        .exprString), domain = NA)
}

# Examples
  assertError(sqrt("abc"))
  assertWarning(matrix(1:8, 4,3))

  assertCondition( ""-1 ) # ok, any condition would satisfy this

try( assertCondition(sqrt(2), "warning") )
## .. Failed to get warning in evaluating sqrt(2)
     assertCondition(sqrt("abc"), "error")   # ok
try( assertCondition(sqrt("abc"), "warning") )# -> error: had no warning
     assertCondition(sqrt("abc"), "error")
  ## identical to assertError() call above

assertCondition(matrix(1:5, 2,3), "warning")
try( assertCondition(matrix(1:8, 4,3), "error") )
## .. Failed to get expected error ....

## either warning or worse:
assertCondition(matrix(1:8, 4,3), "error","warning") # OK
assertCondition(matrix(1:8, 4, 3), "warning") # OK

## when both are signalled:
ff <- function() { warning("my warning"); stop("my error") }
    assertCondition(ff(), "warning")
## but assertWarning does not allow an error to follow
try(assertWarning(ff()))
    assertCondition(ff(), "error")          # ok
assertCondition(ff(), "error", "warning") # ok (quietly, catching warning)

## assert that assertC..() does not assert [and use *one* argument only]
assertCondition( assertCondition(sqrt( 2   ), "warning") )
assertCondition( assertCondition(sqrt("abc"), "warning"), "error")
assertCondition( assertCondition(matrix(1:8, 4,3), "error"),
                "error")

