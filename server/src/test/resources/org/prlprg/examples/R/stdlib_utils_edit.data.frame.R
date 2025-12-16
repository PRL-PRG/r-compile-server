#? stdlib
`edit.data.frame` <- function (name, factor.mode = c("character", "numeric"), edit.row.names = any(row.names(name) != 
    1L:nrow(name)), ...) 
{
    if (.Platform$OS.type == "unix" && .Platform$GUI != "AQUA") 
        if (.Platform$GUI == "unknown" || Sys.getenv("DISPLAY") == 
            "") 
            return(edit.default(name, ...))
    check_screen_device("edit()")
    is.vector.unclass <- function(x) is.vector(unclass(x))
    if (length(name) && !all(vapply(name, is.vector.unclass, 
        NA) | vapply(name, is.factor, NA))) 
        stop("can only handle vector and factor elements")
    if (grepl("darwin", R.version$os)) 
        check_for_XQuartz(file.path(R.home("modules"), "R_de.so"))
    factor.mode <- match.arg(factor.mode)
    as.num.or.char <- function(x) {
        if (is.numeric(x)) 
            x
        else if (is.factor(x) && factor.mode == "numeric") 
            as.numeric(x)
        else as.character(x)
    }
    attrlist <- lapply(name, attributes)
    datalist <- lapply(name, as.num.or.char)
    factors <- which(vapply(name, is.factor, NA))
    logicals <- which(vapply(name, is.logical, NA))
    if (length(name)) {
        has_class <- vapply(name, function(x) (is.object(x) || 
            isS4(x)) && !is.factor(x), NA)
        if (any(has_class)) 
            warning(sprintf(ngettext(sum(has_class), "class discarded from column %s", 
                "classes discarded from columns %s"), paste(sQuote(names(name)[has_class]), 
                collapse = ", ")), domain = NA, call. = FALSE, 
                immediate. = TRUE)
    }
    modes <- lapply(datalist, mode)
    if (edit.row.names) {
        datalist <- c(list(row.names = row.names(name)), datalist)
        modes <- c(list(row.names = "character"), modes)
    }
    rn <- attr(name, "row.names")
    out <- .External2(C_dataentry, datalist, modes)
    if (length(out) == 0L) {
        return(name)
    }
    lengths <- lengths(out)
    maxlength <- max(lengths)
    if (edit.row.names) 
        rn <- out[[1L]]
    for (i in which(lengths != maxlength)) out[[i]] <- c(out[[i]], 
        rep.int(NA, maxlength - lengths[i]))
    if (edit.row.names) {
        out <- out[-1L]
        if ((ln <- length(rn)) < maxlength) 
            rn <- c(rn, paste0("row", (ln + 1):maxlength))
    }
    else if (length(rn) != maxlength) 
        rn <- seq_len(maxlength)
    for (i in factors) {
        if (factor.mode != mode(out[[i]])) 
            next
        a <- attrlist[[i]]
        if (factor.mode == "numeric") {
            o <- as.integer(out[[i]])
            ok <- is.na(o) | (o > 0 & o <= length(a$levels))
            if (any(!ok)) {
                warning(gettextf("invalid factor levels in '%s'", 
                  names(out)[i]), domain = NA)
                o[!ok] <- NA
            }
            attributes(o) <- a
        }
        else {
            o <- out[[i]]
            if (any(new <- is.na(match(o, c(a$levels, NA_integer_))))) {
                new <- unique(o[new])
                warning(gettextf("added factor levels in '%s'", 
                  names(out)[i]), domain = NA)
                o <- factor(o, levels = c(a$levels, new), ordered = is.ordered(o))
            }
            else {
                o <- match(o, a$levels)
                attributes(o) <- a
            }
        }
        out[[i]] <- o
    }
    for (i in logicals) out[[i]] <- as.logical(out[[i]])
    attr(out, "row.names") <- rn
    attr(out, "class") <- "data.frame"
    if (edit.row.names) {
        if (anyDuplicated(rn)) {
            warning("edited row names contain duplicates and will be ignored")
            attr(out, "row.names") <- seq_len(maxlength)
        }
    }
    out
}

# Examples


