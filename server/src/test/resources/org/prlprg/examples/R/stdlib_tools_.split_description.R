#? stdlib
`.split_description` <- function (db, verbose = FALSE) 
{
    if (!is.na(Built <- db["Built"])) {
        Built <- as.list(strsplit(Built, "; ")[[1L]])
        if (length(Built) != 4L) {
            warning(gettextf("*** someone has corrupted the Built field in package '%s' ***", 
                db["Package"]), domain = NA, call. = FALSE)
            Built <- NULL
        }
        else {
            names(Built) <- c("R", "Platform", "Date", "OStype")
            Built[["R"]] <- R_system_version(sub("^R ([0-9.]+)", 
                "\\1", Built[["R"]]))
        }
    }
    else Built <- NULL
    Depends <- .split_dependencies(db[names(db) %in% "Depends"])
    ind <- match("base", names(Depends), 0L)
    if (ind) 
        Depends <- Depends[-ind]
    if ("R" %in% names(Depends)) {
        Rdeps2 <- Depends["R" == names(Depends)]
        names(Rdeps2) <- NULL
        Rdeps <- Depends[["R", exact = TRUE]]
        Depends <- Depends[names(Depends) != "R"]
        if (verbose && length(Rdeps) == 1L) 
            message("WARNING: omitting pointless dependence on 'R' without a version requirement")
        if (length(Rdeps) <= 1L) 
            Rdeps2 <- Rdeps <- NULL
    }
    else Rdeps2 <- Rdeps <- NULL
    Rdeps <- as.vector(Rdeps)
    Suggests <- .split_dependencies(db[names(db) %in% "Suggests"])
    Imports <- .split_dependencies(db[names(db) %in% "Imports"])
    LinkingTo <- .split_dependencies(db[names(db) %in% "LinkingTo"])
    structure(list(DESCRIPTION = db, Built = Built, Rdepends = Rdeps, 
        Rdepends2 = Rdeps2, Depends = Depends, Suggests = Suggests, 
        Imports = Imports, LinkingTo = LinkingTo), class = "packageDescription2")
}
