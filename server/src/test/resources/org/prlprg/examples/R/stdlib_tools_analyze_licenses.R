#? stdlib
`analyze_licenses` <- function (x, db = NULL) 
{
    x <- as.character(x)
    if (!length(x)) 
        return(NULL)
    v <- unique(x)
    out <- as.data.frame(do.call(rbind, lapply(v, analyze_license)), 
        stringsAsFactors = FALSE)
    pos <- match(c("is_empty", "is_canonical", "is_standardizable", 
        "is_verified", "standardization", "is_FOSS", "restricts_use"), 
        names(out))
    out[pos] <- lapply(out[pos], unlist)
    out <- out[match(x, v), ]
    rownames(out) <- NULL
    if (!is.null(db)) {
        cnms <- colnames(db)
        if (!is.na(pos <- match("License_is_FOSS", cnms))) {
            lif <- db[, pos]
            pos <- which(!is.na(lif))
            out$is_FOSS[pos] <- out$is_verified[pos] <- (lif[pos] == 
                "yes")
            pos <- pos[lif[pos] == "yes"]
            out$restricts_use[pos] <- FALSE
        }
        if (!is.na(pos <- match("License_restricts_use", cnms))) {
            lru <- db[, pos]
            pos <- which(!is.na(lru))
            out$restricts_use[pos] <- (lru[pos] == "yes")
            pos <- pos[lru[pos] == "yes"]
            out$is_FOSS[pos] <- out$is_verified[pos] <- FALSE
        }
    }
    out
}
