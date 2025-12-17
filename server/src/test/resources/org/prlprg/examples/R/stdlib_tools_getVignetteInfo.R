#? stdlib
`getVignetteInfo` <- function (package = NULL, lib.loc = NULL, all = TRUE) 
{
    paths <- if (is.null(package)) {
        package <- .packages(all.available = all, lib.loc)
        find.package(package, lib.loc, quiet = TRUE)
    }
    else find.package(package, lib.loc)
    paths <- paths[dir.exists(file.path(paths, "doc"))]
    empty <- cbind(Package = character(0), Dir = character(0), 
        Topic = character(0), File = character(0), Title = character(0), 
        R = character(0), PDF = character(0))
    getVinfo <- function(dir) {
        entries <- NULL
        if (file.exists(INDEX <- file.path(dir, "Meta", "vignette.rds"))) 
            entries <- readRDS(INDEX)
        if (NROW(entries) > 0) {
            R <- entries$R %||% rep.int("", NROW(entries))
            file <- basename(entries$File)
            pdf <- entries$PDF
            topic <- file_path_sans_ext(ifelse(R == "", ifelse(pdf == 
                "", file, pdf), R))
            cbind(Package = basename(dir), Dir = dir, Topic = topic, 
                File = file, Title = entries$Title, R = R, PDF = pdf)[order(entries$Title), 
                , drop = FALSE]
        }
        else empty
    }
    if (length(paths)) 
        do.call(rbind, lapply(paths, getVinfo))
    else empty
}
