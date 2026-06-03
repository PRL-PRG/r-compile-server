#? stdlib
`.remove_stale_dups` <- function (ap) 
{
    pkgs <- ap[, "Package"]
    dup_pkgs <- pkgs[duplicated(pkgs)]
    if (length(dup_pkgs) > 100) {
        ap <- ap[!duplicated(ap[, c("Package", "Version")]), 
            , drop = FALSE]
        pkgs <- ap[, "Package"]
        dup_pkgs <- pkgs[duplicated(pkgs)]
    }
    stale_dups <- integer(length(dup_pkgs))
    i <- 1L
    for (dp in dup_pkgs) {
        wh <- which(dp == pkgs)
        vers <- package_version(ap[wh, "Version"])
        keep_ver <- max(vers)
        keep_idx <- which.max(vers == keep_ver)
        wh <- wh[-keep_idx]
        end_i <- i + length(wh) - 1L
        stale_dups[i:end_i] <- wh
        i <- end_i + 1L
    }
    if (length(stale_dups)) 
        ap[-stale_dups, , drop = FALSE]
    else ap
}
