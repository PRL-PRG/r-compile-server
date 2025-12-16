#? stdlib
`.convert_package_rdfiles` <- function (package, dir = NULL, lib.loc = NULL, ..., stages = c("build", 
    "later", "install", "render"), xLinks = character(0)) 
{
    isPkgTarball <- function(x) {
        length(x) == 1L && endsWith(x, "tar.gz") && length(strsplit(basename(x), 
            "_", fixed = TRUE)[[1]]) == 2L
    }
    isURL <- function(x) {
        length(x) == 1L && (startsWith(x, "http://") || startsWith(x, 
            "https://"))
    }
    db <- if (!missing(package) && isTRUE(isPkgTarball(package))) {
        if (isURL(package)) {
            destdir <- tempfile("dir")
            if (!dir.create(destdir)) 
                stop(gettextf("unable to create temporary directory %s", 
                  sQuote(destdir)))
            utils::download.file(package, destfile = file.path(destdir, 
                basename(package)))
            package <- file.path(destdir, basename(package))
        }
        tmpDir <- tempfile("pkg")
        if (!dir.create(tmpDir)) 
            stop(gettextf("unable to create temporary directory %s", 
                sQuote(tmpDir)))
        utils::untar(package, exdir = tmpDir)
        pkgdir <- list.dirs(tmpDir, recursive = FALSE)
        if (length(pkgdir) != 1) 
            stop(gettextf("expected one package directory, found %d.", 
                length(pkgdir)))
        Rd_db(dir = pkgdir, stages = stages)
    }
    else {
        pkgdir <- if (is.null(dir)) 
            find.package(package, lib.loc)
        else dir
        if (is.null(dir)) 
            Rd_db(package, , lib.loc, stages = stages)
        else Rd_db(, dir, lib.loc, stages = stages)
    }
    Links0 <- .build_links_index(Rd_contents(db), basename(pkgdir))
    Links <- c(Links0, findHTMLlinks(pkgdir, level = 1))
    Links2 <- if (length(xLinks)) 
        xLinks
    else findHTMLlinks(level = 2)
    rd2lines <- function(Rd, ...) {
        outlines <- utils::capture.output(h <- Rd2HTML(Rd, out = "", 
            package = pkgdir, Links = Links, Links2 = Links2, 
            ...))
        list(outlines = outlines, info = attr(h, "info"))
    }
    structure(lapply(db, rd2lines, standalone = FALSE, ...), 
        descfile = file.path(pkgdir, "DESCRIPTION"))
}
