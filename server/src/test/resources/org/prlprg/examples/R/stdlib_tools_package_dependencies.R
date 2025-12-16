#? stdlib
`package_dependencies` <- function (packages = NULL, db = NULL, which = "strong", recursive = FALSE, 
    reverse = FALSE, verbose = getOption("verbose")) 
{
    packages1 <- unique(packages)
    if (is.null(db)) 
        db <- utils::available.packages()
    fields <- which <- .expand_dependency_type_spec(which)
    if (is.character(recursive)) {
        recursive <- .expand_dependency_type_spec(recursive)
        if (identical(which, recursive)) 
            recursive <- TRUE
        else fields <- unique(c(fields, recursive))
    }
    ind <- if (!is.character(recursive) && !recursive && !reverse && 
        !is.null(packages)) {
        match(packages1, db[, "Package"], nomatch = 0L)
    }
    else !duplicated(db[, "Package"])
    db <- as.data.frame(db[ind, c("Package", fields), drop = FALSE])
    for (f in fields) {
        if (!is.list(d <- db[[f]])) 
            db[[f]] <- lapply(d, .extract_dependency_package_names)
    }
    if (is.character(recursive)) {
        d_d <- Recall(packages, db, which, FALSE, reverse, verbose)
        d_r <- Recall(unique(unlist(d_d)), db, recursive, TRUE, 
            reverse, verbose)
        return(lapply(d_d, function(p) {
            sort(unique(c(p, unlist(d_r[p], use.names = FALSE))))
        }))
    }
    depends <- do.call(Map, c(list("c"), db[which], list(USE.NAMES = FALSE)))
    depends <- lapply(depends, unique)
    if (!recursive && !reverse) {
        names(depends) <- db$Package
        if (!is.null(packages)) {
            depends <- depends[match(packages, names(depends))]
            names(depends) <- packages
        }
        return(depends)
    }
    all_packages <- sort(unique(c(db$Package, unlist(depends))))
    if (!recursive) {
        depends <- split(rep.int(db$Package, lengths(depends)), 
            factor(unlist(depends), levels = all_packages))
        if (!is.null(packages)) {
            depends <- depends[match(packages, names(depends))]
            names(depends) <- packages
        }
        return(depends)
    }
    matchP <- match(rep.int(db$Package, lengths(depends)), all_packages)
    matchD <- match(unlist(depends), all_packages)
    tab <- if (reverse) 
        split(matchP, factor(matchD, levels = seq_along(all_packages)))
    else split(matchD, factor(matchP, levels = seq_along(all_packages)))
    if (is.null(packages)) {
        if (reverse) {
            packages1 <- all_packages
            p_L <- seq_along(all_packages)
        }
        else {
            packages1 <- db$Package
            p_L <- match(packages1, all_packages)
        }
    }
    else {
        p_L <- match(packages1, all_packages, nomatch = 0L)
        if (any(ind <- (p_L == 0L))) {
            p_L <- p_L[!ind]
        }
    }
    p_R <- tab[p_L]
    pos <- cbind(rep.int(p_L, lengths(p_R)), unlist(p_R))
    ctr <- 0L
    shift <- as.integer(2^15)
    if (length(pos) && max(pos) < shift) 
        posunique <- function(p) p[!duplicated(p[, 1L] * shift + 
            p[, 2L]), , drop = FALSE]
    else posunique <- function(p) unique(p)
    repeat {
        if (verbose) 
            cat("Cycle:", (ctr <- ctr + 1L))
        p_L <- split(pos[, 1L], pos[, 2L])
        new <- do.call(rbind, Map(function(i, k) cbind(rep.int(i, 
            length(k)), rep(k, each = length(i))), p_L, tab[as.integer(names(p_L))]))
        npos <- posunique(rbind(pos, posunique(new)))
        nnew <- nrow(npos) - nrow(pos)
        if (verbose) 
            cat(" NNew:", nnew, "\n")
        if (!nnew) 
            break
        pos <- npos
    }
    depends <- split(all_packages[pos[, 2L]], factor(all_packages[pos[, 
        1L]], levels = packages1))
    if (!is.null(packages)) {
        depends <- depends[match(packages, names(depends))]
        names(depends) <- packages
    }
    depends
}

# Examples
\donttest{
myPkgs <- c("MASS", "Matrix", "KernSmooth", "class", "cluster", "codetools")
pdb <- available.packages(repos = findCRANmirror("web"))
system.time(
dep1 <- package_dependencies(myPkgs, db = pdb) # all arguments at default
) # very fast
utils::str(dep1, vec.len=10)

system.time( ## reverse dependencies, recursively --- takes much longer:
deps <- package_dependencies(myPkgs, db = pdb, which = "most",
                             recursive = TRUE, reverse = TRUE)
) # seen ~ 10 seconds

lengths(deps) # 2020-05-03: all are 16053, but codetools with 16057

## install.packages(dependencies = TRUE) installs 'most' dependencies
## and the strong recursive dependencies of these: these dependencies
## can be obtained using 'which = "most"' and 'recursive = "strong"'.
## To illustrate on the first packages with non-missing Suggests:
packages <- pdb[head(which(!is.na(pdb[, "Suggests"]))), "Package"]
package_dependencies(packages, db = pdb,
                     which = "most", recursive = "strong")
}

