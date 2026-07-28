#? stdlib
`tail.array` <- function (x, n = 6L, keepnums = TRUE, addrownums, ...) 
{
    if (!missing(addrownums)) {
        .Deprecated(msg = gettext("tail(., addrownums = V) is deprecated.\nUse ", 
            "tail(., keepnums = V) instead.\n"))
        if (missing(keepnums)) 
            keepnums <- addrownums
    }
    .checkHT(n, d <- dim(x))
    ii <- which(!is.na(n[seq_along(d)]))
    sel <- lapply(ii, function(i) {
        di <- d[i]
        ni <- n[i]
        seq.int(to = di, length.out = if (ni < 0L) max(di + ni, 
            0L) else min(ni, di))
    })
    args <- rep(alist(x, , drop = FALSE), c(1L, length(d), 1L))
    args[1L + ii] <- sel
    ans <- do.call(`[`, args)
    if (keepnums && length(d) > 1L) {
        jj <- if (!is.null(adnms <- dimnames(ans)[ii])) 
            which(vapply(adnms, is.null, NA))
        else seq_along(ii)
        if (length(jj) > 0) {
            dimnames(ans)[ii[jj]] <- lapply(jj, function(k) {
                if ((dnum <- ii[k]) == 1L) 
                  format(sprintf("[%d,]", sel[[k]]), justify = "right")
                else if (dnum == 2L) 
                  sprintf("[,%d]", sel[[k]])
                else sel[[k]]
            })
        }
    }
    ans
}
