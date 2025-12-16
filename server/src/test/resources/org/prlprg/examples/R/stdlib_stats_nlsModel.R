#? stdlib
`nlsModel` <- function (form, data, start, wts, upper = NULL, scaleOffset = 0, 
    nDcentral = FALSE) 
{
    if (is.environment(data)) 
        env <- data
    else {
        env <- new.env(hash = TRUE, parent = environment(form))
        list2env(data, env)
    }
    ind <- as.list(start)
    parLength <- 0L
    for (i in names(ind)) {
        temp <- start[[i]]
        storage.mode(temp) <- "double"
        env[[i]] <- temp
        ind[[i]] <- parLength + seq_along(temp)
        parLength <- parLength + length(temp)
    }
    getPars.noVarying <- function() unlist(mget(names(ind), env))
    getPars <- getPars.noVarying
    internalPars <- getPars()
    if (!is.null(upper)) 
        upper <- rep_len(upper, parLength)
    useParams <- rep_len(TRUE, parLength)
    lhs <- eval(form[[2L]], envir = env)
    rhs <- eval(form[[3L]], envir = env)
    .swts <- if (!missing(wts) && length(wts)) 
        sqrt(wts)
    else rep_len(1, length(rhs))
    env$.swts <- .swts
    resid <- .swts * (lhs - rhs)
    dev <- sum(resid^2)
    if (is.null(attr(rhs, "gradient"))) {
        getRHS.noVarying <- function() {
            if (is.null(upper)) 
                numericDeriv(form[[3L]], names(ind), env, central = nDcentral)
            else numericDeriv(form[[3L]], names(ind), env, dir = -1 + 
                2 * (internalPars < upper), central = nDcentral)
        }
        getRHS <- getRHS.noVarying
        rhs <- getRHS()
    }
    else {
        getRHS.noVarying <- function() eval(form[[3L]], envir = env)
        getRHS <- getRHS.noVarying
    }
    dimGrad <- dim(attr(rhs, "gradient"))
    marg <- length(dimGrad)
    if (marg > 0L) {
        gradSetArgs <- vector("list", marg + 1L)
        for (i in 2L:marg) gradSetArgs[[i]] <- rep_len(TRUE, 
            dimGrad[i - 1L])
        useParams <- rep_len(TRUE, dimGrad[marg])
    }
    else {
        gradSetArgs <- vector("list", 2L)
        useParams <- rep_len(TRUE, length(attr(rhs, "gradient")))
    }
    npar <- length(useParams)
    gradSetArgs[[1L]] <- (~attr(ans, "gradient"))[[2L]]
    gradCall <- switch(length(gradSetArgs) - 1L, call("[", gradSetArgs[[1L]], 
        gradSetArgs[[2L]], drop = FALSE), call("[", gradSetArgs[[1L]], 
        gradSetArgs[[2L]], gradSetArgs[[2L]], drop = FALSE), 
        call("[", gradSetArgs[[1L]], gradSetArgs[[2L]], gradSetArgs[[2L]], 
            gradSetArgs[[3L]], drop = FALSE), call("[", gradSetArgs[[1L]], 
            gradSetArgs[[2L]], gradSetArgs[[2L]], gradSetArgs[[3L]], 
            gradSetArgs[[4L]], drop = FALSE))
    getRHS.varying <- function() {
        ans <- getRHS.noVarying()
        attr(ans, "gradient") <- eval(gradCall)
        ans
    }
    if (length(gr <- attr(rhs, "gradient")) == 1L && !is.vector(gr)) 
        attr(rhs, "gradient") <- gr <- as.vector(gr)
    QR <- qr(.swts * gr)
    qrDim <- min(dim(QR$qr))
    if (QR$rank < qrDim) 
        stop("singular gradient matrix at initial parameter estimates")
    getPars.varying <- function() unlist(mget(names(ind), env))[useParams]
    setPars.noVarying <- function(newPars) {
        internalPars <<- newPars
        for (i in names(ind)) env[[i]] <- unname(newPars[ind[[i]]])
    }
    setPars.varying <- function(newPars) {
        internalPars[useParams] <<- newPars
        for (i in names(ind)) env[[i]] <- unname(internalPars[ind[[i]]])
    }
    setPars <- setPars.noVarying
    if (scaleOffset) 
        scaleOffset <- (length(resid) - npar) * scaleOffset^2
    convCrit <- function() {
        if (npar == 0) 
            return(0)
        rr <- qr.qty(QR, c(resid))
        sqrt(sum(rr[1L:npar]^2)/(scaleOffset + sum(rr[-(1L:npar)]^2)))
    }
    on.exit(remove(i, data, parLength, start, temp, m, gr, marg, 
        dimGrad, qrDim, gradSetArgs))
    m <- list(resid = function() resid, fitted = function() rhs, 
        formula = function() form, deviance = function() dev, 
        lhs = function() lhs, gradient = function() .swts * attr(rhs, 
            "gradient"), conv = function() convCrit(), incr = function() qr.coef(QR, 
            resid), setVarying = function(vary = rep_len(TRUE, 
            np)) {
            np <- length(useParams)
            useParams <<- useP <- if (is.character(vary)) {
                temp <- logical(np)
                temp[unlist(ind[vary])] <- TRUE
                temp
            } else if (is.logical(vary) && length(vary) != np) stop("setVarying : 'vary' length must match length of parameters") else vary
            gradCall[[length(gradCall) - 1L]] <<- useP
            if (all(useP)) {
                setPars <<- setPars.noVarying
                getPars <<- getPars.noVarying
                getRHS <<- getRHS.noVarying
                npar <<- length(useP)
            } else {
                setPars <<- setPars.varying
                getPars <<- getPars.varying
                getRHS <<- getRHS.varying
                npar <<- sum(useP)
            }
        }, setPars = function(newPars) {
            setPars(newPars)
            resid <<- .swts * (lhs - (rhs <<- getRHS()))
            dev <<- sum(resid^2)
            if (length(gr <- attr(rhs, "gradient")) == 1L) gr <- c(gr)
            QR <<- qr(.swts * gr)
            (QR$rank < min(dim(QR$qr)))
        }, getPars = function() getPars(), getAllPars = function() getPars(), 
        getEnv = function() env, trace = function() {
            d <- getOption("digits")
            cat(sprintf("%-*s (%.2e): par = (%s)\n", d + 4L + 
                2L * (scaleOffset > 0), formatC(dev, digits = d, 
                flag = "#"), convCrit(), paste(vapply(getPars(), 
                format, ""), collapse = " ")))
        }, Rmat = function() qr.R(QR), predict = function(newdata = list(), 
            qr = FALSE) eval(form[[3L]], as.list(newdata), env))
    class(m) <- "nlsModel"
    m
}
