#? stdlib
`.cbind.ts` <- function (sers, nmsers, dframe = FALSE, union = TRUE, ts.eps = getOption("ts.eps")) 
{
    nulls <- vapply(sers, is.null, NA)
    sers <- sers[!nulls]
    nser <- length(sers)
    if (nser == 0L) 
        return(NULL)
    if (nser == 1L) 
        return(if (dframe) as.data.frame(sers[[1L]]) else sers[[1L]])
    tsser <- vapply(sers, function(x) length(tsp(x)) > 0L, NA)
    if (!any(tsser)) 
        stop("no time series supplied")
    sers <- lapply(sers, as.ts)
    tsps <- sapply(sers[tsser], tsp)
    freq <- mean(tsps[3, ])
    if (max(abs(tsps[3, ] - freq)) > ts.eps) 
        stop("not all series have the same frequency")
    eph <- exp((0+2i) * (pi * apply(tsps, 2L, function(tsp) (tsp[1L] * 
        tsp[3L])%%1)))
    if (max(Mod(eph - mean(eph))) > ts.eps) 
        stop("not all series have the same phase")
    if (union) {
        st <- min(tsps[1, ])
        en <- max(tsps[2, ])
    }
    else {
        st <- max(tsps[1, ])
        en <- min(tsps[2, ])
        if (st > en) {
            warning("non-intersecting series")
            return(NULL)
        }
    }
    p <- c(st, en, freq)
    n <- round(freq * (en - st) + 1)
    if (any(!tsser)) {
        ln <- vapply(sers[!tsser], NROW, 1)
        if (any(ln != 1L & ln != n)) 
            stop("non-time series not of the correct length")
        for (i in (1L:nser)[!tsser]) {
            sers[[i]] <- ts(sers[[i]], start = st, end = en, 
                frequency = freq)
        }
        tsps <- sapply(sers, tsp)
    }
    nsers <- vapply(sers, NCOL, 1)
    if (dframe) {
        x <- setNames(vector("list", nser), nmsers)
    }
    else {
        ns <- sum(nsers)
        x <- matrix(, n, ns)
        cs <- c(0, cumsum(nsers))
        nm <- character(ns)
        for (i in 1L:nser) if (nsers[i] > 1) {
            cn <- colnames(sers[[i]]) %||% 1L:nsers[i]
            nm[(1 + cs[i]):cs[i + 1]] <- paste(nmsers[i], cn, 
                sep = ".")
        }
        else nm[cs[i + 1]] <- nmsers[i]
        dimnames(x) <- list(NULL, nm)
    }
    for (i in 1L:nser) {
        if (union) {
            xx <- if (nsers[i] > 1) 
                rbind(matrix(NA, round(freq * (tsps[1, i] - st)), 
                  nsers[i]), sers[[i]], matrix(NA, round(freq * 
                  (en - tsps[2, i])), nsers[i]))
            else c(rep.int(NA, round(freq * (tsps[1, i] - st))), 
                sers[[i]], rep.int(NA, round(freq * (en - tsps[2, 
                  i]))))
        }
        else {
            xx <- window(sers[[i]], st, en)
        }
        if (dframe) 
            x[[i]] <- structure(xx, tsp = p, class = "ts")
        else x[, (1 + cs[i]):cs[i + 1]] <- xx
    }
    if (dframe) 
        as.data.frame(x)
    else ts(x, start = st, frequency = freq)
}
