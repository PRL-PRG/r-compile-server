#? stdlib
`CRAN_package_reverse_dependencies_and_views` <- function (packages) 
{
    repos <- getOption("repos")
    a <- utils::available.packages(filters = list(), repos = repos)
    v <- read_CRAN_object(CRAN_baseurl_for_src_area(), "src/contrib/Views.rds")
    v <- do.call(rbind, mapply(cbind, Package = lapply(v, function(e) e$packagelist$name), 
        View = vapply(v, `[[`, "name", FUN.VALUE = "")))
    v <- split(v[, 2L], v[, 1L])
    r <- package_dependencies(packages, a, reverse = TRUE)
    rr <- package_dependencies(packages, a, reverse = TRUE, recursive = TRUE)
    rrs <- package_dependencies(packages, a, "Suggests", reverse = TRUE, 
        recursive = "strong")
    expansions <- unique(c(unlist(r, use.names = FALSE), unlist(rr, 
        use.names = FALSE), unlist(rrs, use.names = FALSE)))
    names(expansions) <- expansions
    if ("CRAN" %in% names(repos)) {
        ind <- !startsWith(a[match(expansions, a[, "Package"]), 
            "Repository"], repos["CRAN"])
        expansions[ind] <- paste0(expansions[ind], "*")
    }
    rxrefs <- CRAN_Rd_xref_reverse_dependencies(packages)
    fmt <- function(x) {
        if (length(x)) 
            paste(sort(x), collapse = " ")
        else NA_character_
    }
    y <- lapply(packages, function(p) {
        c(Package = p, `Reverse depends` = fmt(expansions[r[[p]]]), 
            `Additional recursive reverse depends` = fmt(expansions[setdiff(rr[[p]], 
                r[[p]])]), `Additional recursive reverse depends of suggests` = fmt(expansions[setdiff(rrs[[p]], 
                rr[[p]])]), `Reverse Rd xref depends` = fmt(rxrefs[[p]]), 
            Views = fmt(v[[p]]))
    })
    y <- as.data.frame(do.call(rbind, y), stringsAsFactors = FALSE)
    class(y) <- c("CRAN_package_reverse_dependencies_and_views", 
        class(y))
    y
}
