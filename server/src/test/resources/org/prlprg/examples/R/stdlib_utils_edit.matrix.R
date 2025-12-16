#? stdlib
`edit.matrix` <- function (name, edit.row.names = !is.null(dn[[1L]]), ...) 
{
    if (.Platform$OS.type == "unix" && .Platform$GUI != "AQUA") 
        if (.Platform$GUI == "unknown" || Sys.getenv("DISPLAY") == 
            "") 
            return(edit.default(name, ...))
    check_screen_device("edit()")
    if (!is.matrix(name) || !mode(name) %in% c("numeric", "character", 
        "logical") || any(dim(name) < 1)) 
        stop("invalid input matrix")
    if (grepl("darwin", R.version$os)) 
        check_for_XQuartz(file.path(R.home("modules"), "R_de.so"))
    logicals <- is.logical(name)
    if (logicals) 
        mode(name) <- "character"
    if (is.object(name) || isS4(name)) 
        warning("class of 'name' will be discarded", call. = FALSE, 
            immediate. = TRUE)
    dn <- dimnames(name)
    datalist <- split(c(name), col(name))
    if (!is.null(dn[[2L]])) 
        names(datalist) <- dn[[2L]]
    else names(datalist) <- paste0("col", 1L:ncol(name))
    modes <- as.list(rep.int(mode(name), ncol(name)))
    if (edit.row.names && is.null(dn[[1L]])) 
        stop("cannot edit NULL row names")
    if (edit.row.names) {
        datalist <- c(list(row.names = dn[[1L]]), datalist)
        modes <- c(list(row.names = "character"), modes)
    }
    out <- .External2(C_dataentry, datalist, modes)
    lengths <- lengths(out)
    maxlength <- max(lengths)
    if (edit.row.names) 
        rn <- out[[1L]]
    for (i in which(lengths != maxlength)) out[[i]] <- c(out[[i]], 
        rep.int(NA, maxlength - lengths[i]))
    if (edit.row.names) {
        out <- out[-1L]
        if ((ln <- length(rn)) < maxlength) 
            rn <- c(rn, paste0("row", (ln + 1L):maxlength))
    }
    out <- do.call("cbind", out)
    if (edit.row.names) 
        rownames(out) <- rn
    else if (!is.null(dn[[1L]]) && length(dn[[1L]]) == maxlength) 
        rownames(out) <- dn[[1L]]
    if (logicals) 
        mode(out) <- "logical"
    out
}
