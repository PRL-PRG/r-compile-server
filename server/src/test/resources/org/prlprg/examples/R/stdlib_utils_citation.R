#? stdlib
`citation` <- function (package = "base", lib.loc = NULL, auto = NULL) 
{
    if (!is.null(auto) && !is.logical(auto) && !anyNA(match(c("Package", 
        "Version", "Title"), names(meta <- as.list(auto)))) && 
        !all(is.na(match(c("Authors@R", "Author"), names(meta))))) {
        auto_was_meta <- TRUE
        package <- meta$Package
    }
    else {
        auto_was_meta <- FALSE
        dir <- system.file(package = package, lib.loc = lib.loc)
        if (dir == "") 
            stop(packageNotFoundError(package, lib.loc, sys.call()))
        meta <- packageDescription(pkg = package, lib.loc = dirname(dir))
        citfile <- file.path(dir, "CITATION")
        test <- file_test("-f", citfile)
        if (!test) {
            citfile <- file.path(dir, "inst", "CITATION")
            test <- file_test("-f", citfile)
        }
        if (is.null(auto) || is.na(auto)) 
            auto <- !test
        else if (!auto && !test) 
            stop(gettextf("package %s has no %s file: only auto-generation is possible", 
                sQuote(package), sQuote("CITATION")), domain = NA)
        if (!auto) {
            return(readCitationFile(citfile, meta))
        }
    }
    if ((!is.null(meta$Priority)) && (meta$Priority == "base")) {
        cit <- citation("base", auto = FALSE)
        attr(cit, "mheader")[1L] <- paste0("The ", sQuote(package), 
            " package is part of R.  ", attr(cit, "mheader")[1L])
        return(.citation(cit, package))
    }
    year <- sub("-.*", "", meta[["Date/Publication"]])
    if (!length(year) && !is.null(date <- meta[["Date"]])) {
        date <- trimws(as.vector(date))[1L]
        date <- strptime(date, "%Y-%m-%d", tz = "GMT")
        if (!is.na(date)) 
            year <- format(date, "%Y")
    }
    if (!length(year)) {
        date <- as.POSIXlt(sub(";.*", "", trimws(meta$Packaged)[1L]))
        if (!is.na(date)) 
            year <- format(date, "%Y")
    }
    if (!length(year)) {
        warning(gettextf("could not determine year for %s from package DESCRIPTION file", 
            sQuote(package)), domain = NA)
        year <- NA_character_
    }
    author <- meta$`Authors@R`
    if (length(author)) {
        aar <- .read_authors_at_R_field(author)
        author <- Filter(function(e) {
            !(is.null(e$given) && is.null(e$family)) && !is.na(match("aut", 
                e$role))
        }, aar)
        if (!length(author)) 
            author <- Filter(function(e) {
                !(is.null(e$given) && is.null(e$family)) && !is.na(match("cre", 
                  e$role))
            }, aar)
    }
    if (length(author)) {
        has_authors_at_R_field <- TRUE
    }
    else {
        has_authors_at_R_field <- FALSE
        author <- as.person(meta$Author)
    }
    z <- list(title = paste0(package, ": ", meta$Title), author = author, 
        year = year, note = paste("R package version", meta$Version))
    if (identical(meta$Repository, "CRAN")) {
        z$url <- sprintf("https://CRAN.R-project.org/package=%s", 
            package)
        if (!is.na(d <- meta[["Date/Publication"]]) && (as.Date(d) <= 
            Sys.Date() - 1L)) 
            z$doi <- sprintf("10.32614/CRAN.package.%s", package)
    }
    if (identical(meta$Repository, "R-Forge")) {
        z$url <- if (!is.null(rfp <- meta$"Repository/R-Forge/Project")) 
            sprintf("https://R-Forge.R-project.org/projects/%s/", 
                rfp)
        else "https://R-Forge.R-project.org/"
        if (!is.null(rfr <- meta$"Repository/R-Forge/Revision")) 
            z$note <- paste(z$note, rfr, sep = "/r")
    }
    if ((is.null(meta$Repository) || startsWith(meta$Repository, 
        "Bioconductor")) && !is.null(meta$git_url) && startsWith(meta$git_url, 
        "https://git.bioconductor.org/packages")) {
        z$url <- sprintf("https://bioconductor.org/packages/%s", 
            package)
        z$doi <- sprintf("10.18129/B9.bioc.%s", package)
    }
    if (identical(meta$RemoteType, "github") && identical(meta$RemoteHost, 
        "api.github.com")) {
        if (!is.null(meta$RemoteUsername) && !is.null(meta$RemoteRepo)) {
            z$url <- sprintf("https://github.com/%s/%s", meta$RemoteUsername, 
                meta$RemoteRepo)
        }
        if (!is.null(meta$RemoteSha)) {
            z$note <- sprintf("%s, commit %s", z$note, meta$RemoteSha)
        }
    }
    if (identical(meta$RemoteType, "gitlab")) {
        if (!is.null(meta$RemoteHost) && !is.null(meta$RemoteUsername) && 
            !is.null(meta$RemoteRepo)) {
            z$url <- sprintf("https://%s/%s/%s", meta$RemoteHost, 
                meta$RemoteUsername, meta$RemoteRepo)
        }
        if (!is.null(meta$RemoteSha)) {
            z$note <- sprintf("%s, commit %s", z$note, meta$RemoteSha)
        }
    }
    if (identical(meta$RemoteType, "git") || identical(meta$RemoteType, 
        "xgit")) {
        z$url <- meta$RemoteUrl
        if (!is.null(meta$RemoteSha)) {
            z$note <- sprintf("%s, commit %s", z$note, meta$RemoteSha)
        }
    }
    if (!length(z$url) && !is.null(url <- meta$URL)) {
        urls <- tools:::.get_urls_from_DESCRIPTION_URL_field(meta$URL)
        if (length(urls)) 
            z$url <- urls[1L]
    }
    header <- if (!auto_was_meta) {
        gettextf("To cite package %s in publications use:", sQuote(package))
    }
    else NULL
    footer <- if (!has_authors_at_R_field && !auto_was_meta) {
        gettextf("ATTENTION: This citation information has been auto-generated from the package DESCRIPTION file and may need manual editing, see %s.", 
            sQuote("help(\"citation\")"))
    }
    else NULL
    author <- format(z$author, include = c("given", "family"))
    if (length(author) > 1L) 
        author <- paste(paste(head(author, -1L), collapse = ", "), 
            tail(author, 1L), sep = " and ")
    rval <- bibentry(bibtype = "Manual", header = header, footer = footer, 
        other = z)
    .citation(rval, package)
}

# Examples
## the basic R reference
citation()

## extract the BibTeX entry from the return value
x <- citation()
toBibtex(x)
\donttest{
## references for a package
citation("lattice")
citation("lattice", auto = TRUE)  # request the Manual-type reference
citation("foreign")

## a CITATION file with more than one bibentry:
file.show(system.file("CITATION", package="mgcv"))
cm <- citation("mgcv")
cm # header, text references, plus "reminder" about getting BibTeX
print(cm, bibtex = TRUE) # each showing its bibtex code

## a CITATION file including citation(auto = meta)
file.show(system.file("CITATION", package="nlme"))
citation("nlme")
}

