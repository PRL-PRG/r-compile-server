#? stdlib
`nls_port_fit` <- function (m, start, lower, upper, control, trace, give.v = FALSE) 
{
    p <- length(par <- as.double(unlist(start)))
    iv <- integer(4L * p + 82L)
    v <- double(105L + (p * (2L * p + 20L)))
    .Call(C_port_ivset, 1, iv, v)
    if (length(control)) {
        if (!is.list(control) || is.null(nms <- names(control))) 
            stop("'control' argument must be a named list")
        for (noN in intersect(nms, c("tol", "minFactor", "warnOnly", 
            "printEval", "scaleOffset", "nDcentral"))) control[[noN]] <- NULL
        nms <- names(control)
        pos <- pmatch(nms, names(port_cpos))
        if (any(nap <- is.na(pos))) {
            warning(sprintf(ngettext(length(nap), "unrecognized control element named %s ignored", 
                "unrecognized control elements named %s ignored"), 
                paste(nms[nap], collapse = ", ")), domain = NA)
            pos <- pos[!nap]
            control <- control[!nap]
        }
        ivpars <- pos <= 4
        vpars <- !ivpars
        if (any(ivpars)) 
            iv[port_cpos[pos[ivpars]]] <- as.integer(unlist(control[ivpars]))
        if (any(vpars)) 
            v[port_cpos[pos[vpars]]] <- as.double(unlist(control[vpars]))
    }
    if (trace) 
        iv[port_cpos[["trace"]]] <- 1L
    scale <- 1
    if (any(lower != -Inf) || any(upper != Inf)) {
        low <- rep_len(as.double(lower), length(par))
        upp <- rep_len(as.double(upper), length(par))
        if (any(unlist(start) < low) || any(unlist(start) > upp)) {
            iv[1L] <- 300
            return(if (give.v) list(iv = iv, v = v[seq_len(18L)]) else iv)
        }
    }
    else low <- upp <- numeric()
    if (p > 0) {
        .Call(C_port_nlsb, m, d = rep_len(as.double(scale), length(par)), 
            df = m$gradient(), iv, v, low, upp)
    }
    else iv[1L] <- 6
    if (give.v) 
        list(iv = iv, v = v[seq_len(18L)])
    else iv
}
