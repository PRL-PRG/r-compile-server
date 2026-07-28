#? stdlib
`profile.nls` <- function (fitted, which = 1L:npar, maxpts = 100, alphamax = 0.01, 
    delta.t = cutoff/5, ...) 
{
    f.summary <- summary(fitted)
    std.err <- f.summary$coefficients[, "Std. Error"]
    nobs <- length(resid(fitted))
    prof <- profiler(fitted)
    pars <- prof$getFittedPars()
    npar <- length(pars)
    lower <- fitted$call$lower
    lower <- rep_len(if (!is.null(lower)) 
        as.double(lower)
    else -Inf, npar)
    upper <- fitted$call$upper
    upper <- rep_len(if (!is.null(upper)) 
        as.double(upper)
    else Inf, npar)
    if (is.character(which)) 
        which <- match(which, names(pars), 0)
    which <- which[which >= 1 & which <= npar]
    cutoff <- sqrt(qf(1 - alphamax, 1L, nobs - npar))
    out <- vector("list", npar)
    on.exit(prof$setDefault())
    for (par in which) {
        pars <- prof$getFittedPars()
        prof$setDefault(varying = par)
        sgn <- -1
        count <- 1
        varying <- rep.int(TRUE, npar)
        varying[par] <- FALSE
        tau <- double(2 * maxpts)
        par.vals <- array(0, c(2L * maxpts, npar), list(NULL, 
            names(pars)))
        tau[1L] <- 0
        par.vals[1, ] <- pars
        base <- pars[par]
        profile.par.inc <- delta.t * std.err[par]
        pars[par] <- base - profile.par.inc
        pars[par] <- pmin(upper[par], pmax(lower[par], pars[par]))
        while (count <= maxpts) {
            if (is.na(pars[par]) || isTRUE(all.equal(pars, par.vals[1, 
                ])) || pars[par] < lower[par] || pars[par] > 
                upper[par] || abs(pars[par] - base)/std.err[par] > 
                10 * cutoff) 
                break
            prof$setDefault(params = pars)
            ans <- prof$getProfile()
            if (is.na(ans$fstat) || ans$fstat < 0) 
                break
            newtau <- sgn * sqrt(ans$fstat)
            if (abs(newtau - tau[count]) < 0.1) 
                break
            count <- count + 1
            tau[count] <- newtau
            par.vals[count, ] <- pars <- ans$parameters[1L:npar]
            if (abs(tau[count]) > cutoff) 
                break
            pars <- pars + ((pars - par.vals[count - 1, ]) * 
                delta.t)/abs(tau[count] - tau[count - 1])
            pars[-par] <- pmin(upper[-par], pmax(lower[-par], 
                pars[-par]))
        }
        ind <- seq_len(count)
        tau[ind] <- tau[rev(ind)]
        par.vals[ind, ] <- par.vals[rev(ind), ]
        sgn <- 1
        newmax <- count + maxpts
        pars <- par.vals[count, ]
        pars[par] <- base + profile.par.inc
        pars[par] <- pmin(upper[par], pmax(lower[par], pars[par]))
        while (count <= newmax) {
            if (is.na(pars[par]) || isTRUE(all.equal(pars, par.vals[1, 
                ])) || pars[par] < lower[par] || pars[par] > 
                upper[par] || abs(pars[par] - base)/std.err[par] > 
                10 * cutoff) 
                break
            prof$setDefault(params = pars)
            ans <- prof$getProfile()
            if (is.na(ans$fstat) || ans$fstat < 0) 
                break
            newtau <- sgn * sqrt(ans$fstat)
            if (abs(newtau - tau[count]) < 0.1) 
                break
            count <- count + 1
            tau[count] <- newtau
            par.vals[count, ] <- pars <- ans$parameters[1L:npar]
            if (abs(tau[count]) > cutoff) 
                break
            pars <- pars + ((pars - par.vals[count - 1, ]) * 
                delta.t)/abs(tau[count] - tau[count - 1])
            pars[-par] <- pmin(upper[-par], pmax(lower[-par], 
                pars[-par]))
        }
        ind <- seq_len(count)
        out[[par]] <- structure(list(tau = tau[ind], par.vals = par.vals[ind, 
            , drop = FALSE]), class = "data.frame", row.names = as.character(ind), 
            parameters = list(par = par, std.err = std.err[par]))
        prof$setDefault()
    }
    names(out)[which] <- names(coef(fitted))[which]
    out <- out[which]
    attr(out, "original.fit") <- fitted
    attr(out, "summary") <- f.summary
    class(out) <- c("profile.nls", "profile")
    out
}
