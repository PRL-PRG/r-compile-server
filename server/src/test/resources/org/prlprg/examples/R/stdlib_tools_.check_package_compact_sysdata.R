#? stdlib
`.check_package_compact_sysdata` <- function (pkgDir, thorough = FALSE) 
{
    msg <- NULL
    files <- file.path(pkgDir, "R", "sysdata.rda")
    rdas <- checkRdaFiles(files)
    row.names(rdas) <- basename(row.names(rdas))
    problems <- with(rdas, (ASCII | compress == "none") & (size > 
        1e+05))
    if (any(rdas$compress %in% c("bzip2", "xz"))) {
        OK <- FALSE
        Rdeps <- .split_description(.read_description(file.path(pkgDir, 
            "DESCRIPTION")))$Rdepends2
        for (dep in Rdeps) {
            if (!(dep$op %in% c(">=", ">"))) 
                next
            if (dep$version >= package_version("2.10")) {
                OK <- TRUE
                break
            }
        }
        if (!OK) 
            msg <- "Warning: package needs dependence on R (>= 2.10)"
    }
    if (sum(rdas$size) < 1e+05 || any(rdas$compress %in% c("bzip2", 
        "xz"))) 
        thorough <- FALSE
    if (thorough) {
        cpdir <- tempfile("cp")
        dir.create(cpdir)
        file.copy(files, cpdir)
        resaveRdaFiles(cpdir)
        rdas2 <- checkRdaFiles(cpdir)
        row.names(rdas2) <- basename(row.names(rdas2))
        diff2 <- (rdas2$ASCII != rdas$ASCII) | (rdas2$compress != 
            rdas$compress)
        diff2 <- diff2 & (rdas$size > 10000) & (rdas2$size < 
            0.9 * rdas$size)
        sizes <- c(sum(rdas$size), sum(rdas2$size))
        improve <- data.frame(old_size = rdas$size, new_size = rdas2$size, 
            compress = rdas2$compress, row.names = row.names(rdas))[diff2, 
            ]
    }
    else sizes <- improve <- NULL
    structure(list(rdas = rdas[problems, 1:3], msg = msg, sizes = sizes, 
        improve = improve), class = "check_package_compact_datasets")
}
