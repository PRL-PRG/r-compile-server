#? stdlib
`pkgVignettes` <- function (package, dir, subdirs = NULL, lib.loc = NULL, output = FALSE, 
    source = FALSE, check = FALSE) 
{
    if (!missing(package)) {
        if (length(package) != 1L) 
            stop("argument 'package' must be of length 1")
        dir <- find.package(package, lib.loc)
    }
    if (missing(dir)) 
        stop("you must specify 'package' or 'dir'")
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    else {
        dir <- file_path_as_absolute(dir)
        if (is.null(subdirs)) 
            subdirs <- if (missing(package)) 
                "vignettes"
            else "doc"
        for (subdir in subdirs) {
            docdir <- file.path(dir, subdir)
            if (dir.exists(docdir)) 
                break
        }
    }
    if (!dir.exists(docdir)) 
        return(NULL)
    buildPkgs <- loadVignetteBuilder(dir, mustwork = FALSE, lib.loc = lib.loc)
    engineList <- vignetteEngine(package = buildPkgs)
    docs <- names <- engines <- patterns <- character()
    allFiles <- list.files(docdir, all.files = FALSE, full.names = TRUE)
    exclude <- inRbuildignore(sub(paste0(dir, "/"), "", allFiles, 
        fixed = TRUE), dir)
    allFiles <- allFiles[!exclude]
    matchedPattern <- rep.int(FALSE, length(allFiles))
    msg <- character()
    if (length(allFiles) > 0L) {
        for (name in names(engineList)) {
            engine <- engineList[[name]]
            for (pattern in engine$pattern) {
                idxs <- grep(pattern, allFiles)
                matchedPattern[idxs] <- TRUE
                keep <- vapply(allFiles[idxs], function(.d.) engineMatches(name, 
                  getVignetteEngine(.d.)), NA)
                if (any(keep)) {
                  idxs <- idxs[keep]
                  if (is.function(engine$weave)) {
                    docsT <- allFiles[idxs]
                    docs <- c(docs, docsT)
                    names <- c(names, gsub(pattern, "", basename(docsT)))
                    engines <- c(engines, rep.int(name, length(idxs)))
                    patterns <- c(patterns, rep.int(pattern, 
                      length(idxs)))
                  }
                  matchedPattern <- matchedPattern[-idxs]
                  allFiles <- allFiles[-idxs]
                  if (length(allFiles) == 0L) 
                    break
                }
            }
        }
        if (check && any(matchedPattern)) {
            files <- substring(allFiles[matchedPattern], nchar(dir) + 
                2)
            msg <- c("Files named as vignettes but with no recognized vignette engine:", 
                paste("  ", sQuote(files)), "(Is a VignetteBuilder field missing?)")
        }
    }
    stopifnot(length(names) == length(docs), length(engines) == 
        length(docs), length(patterns) == length(docs), !anyDuplicated(docs))
    defaultEncoding <- .get_package_metadata(dir)["Encoding"]
    encodings <- vapply(docs, getVignetteEncoding, "", default = defaultEncoding)
    z <- list(docs = docs, names = names, engines = engines, 
        patterns = patterns, encodings = encodings, dir = docdir, 
        pkgdir = dir, msg = msg)
    if (output) {
        outputs <- character(length(docs))
        for (i in seq_along(docs)) {
            file <- docs[i]
            name <- names[i]
            engine <- vignetteEngine(engines[i])
            outputI <- find_vignette_product(name, by = "weave", 
                dir = docdir, engine = engine)
            outputs[i] <- outputI
        }
        z$outputs <- outputs
    }
    if (source) {
        sources <- list()
        for (i in seq_along(docs)) {
            file <- docs[i]
            name <- names[i]
            engine <- vignetteEngine(engines[i])
            sourcesI <- find_vignette_product(name, by = "tangle", 
                main = FALSE, dir = docdir, engine = engine)
            sources[[file]] <- sourcesI
        }
        if (any(ind <- (lengths(sources) > 1L))) {
            rootify <- function(s) sub("[.][^.]+$", "", basename(s))
            dnm <- rootify(names(sources))
            snm <- lapply(sources, rootify)
            if (!any(is.na(match(dnm, unlist(snm))))) {
                for (i in which(ind)) {
                  sources[[i]] <- sources[[i]][is.na(match(snm[[i]], 
                    dnm[-i]))]
                }
            }
        }
        z$sources <- sources
    }
    class(z) <- "pkgVignettes"
    z
}
