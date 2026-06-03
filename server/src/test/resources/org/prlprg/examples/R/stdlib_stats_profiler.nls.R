#? stdlib
`profiler.nls` <- function (fitted, ...) 
{
    fittedModel <- fitted$m
    algorithm <- fitted$call$algorithm
    ctrl <- fitted$call$control
    trace <- fitted$call$trace
    defaultPars <- fittedPars <- fittedModel$getPars()
    lower <- fitted$call$lower
    lower <- rep_len(if (!is.null(lower)) 
        as.double(lower)
    else Inf, length(defaultPars))
    upper <- fitted$call$upper
    upper <- rep_len(if (!is.null(upper)) 
        as.double(upper)
    else Inf, length(defaultPars))
    defaultVary <- rep.int(TRUE, length(defaultPars))
    S.hat <- deviance(fitted)
    s2.hat <- summary(fitted)$sigma^2
    on.exit(remove(fitted))
    prof <- list(getFittedPars = function() fittedPars, getFittedModel = function() fittedModel, 
        setDefault = function(varying, params) {
            if (missing(params) && missing(varying)) {
                fittedModel$setVarying()
                fittedModel$setPars(fittedPars)
                defaultPars <<- fittedPars
                defaultVary <<- rep.int(TRUE, length(defaultPars))
            } else {
                if (!missing(params)) {
                  if (length(params) != length(fittedPars)) stop("'params' has wrong length")
                  defaultPars <<- params
                }
                if (!missing(varying)) {
                  if (is.numeric(varying)) {
                    if (!all(varying %in% seq_along(fittedPars))) stop("'varying' must be in seq_along(pars)")
                    varying <- !((seq_along(fittedPars)) %in% 
                      varying)
                  } else if (is.logical(varying)) {
                    if (length(varying) != length(fittedPars)) stop("'varying' has wrong length")
                  } else if (is.character(varying)) {
                    if (!all(varying %in% names(fittedPars))) stop("'varying' must be in seq_along(pars)")
                    varying <- !(names(fittedPars) %in% varying)
                  } else stop("'varying' must be logical, integer or character")
                  defaultVary <<- varying
                }
            }
        }, getProfile = function(...) {
            args <- list(...)
            if (length(args) == 0L) {
                vary <- defaultVary
                startPars <- defaultPars
            } else if (length(args) == 2L && is.logical(args[[1L]])) {
                vary <- args[[1L]]
                params <- unlist(args[[2L]])
                startPars <- defaultPars
                startPars[!vary] <- params
            } else {
                if (length(args) == 1 && is.list(args[[1L]])) {
                  params <- unlist(args[[1L]])
                } else if (all(sapply(args, is.numeric))) {
                  params <- unlist(args)
                } else stop("invalid argument to 'getProfile'")
                if (!all(names(params) %in% names(fittedPars))) stop("cannot recognize parameter name")
                startPars <- defaultPars
                vary <- !(names(fittedPars) %in% names(params))
                startPars[!vary] <- params
            }
            fittedModel$setVarying()
            fittedModel$setPars(startPars)
            fittedModel$setVarying(vary)
            fittedModel$setPars(startPars[vary])
            if (algorithm != "port") {
                if (sum(vary)) .Call(C_nls_iter, fittedModel, 
                  ctrl, trace)
                dev <- fittedModel$deviance()
            } else {
                iv <- nls_port_fit(fittedModel, startPars[vary], 
                  lower[vary], upper[vary], ctrl, trace)
                dev <- if (!iv[1L] %in% 3:6) NA_real_ else fittedModel$deviance()
            }
            profiledModel <- fittedModel
            fstat <- (dev - S.hat)/s2.hat
            fittedModel$setVarying()
            ans <- list(fstat = fstat, parameters = profiledModel$getAllPars(), 
                varying = vary)
            fittedModel$setPars(defaultPars)
            ans
        })
    class(prof) <- c("profiler.nls", "profiler")
    prof
}
